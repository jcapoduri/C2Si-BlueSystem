#include <QTime>
#include "wjob.h"
#include "mainwidget.h"
#include "ui_wjob.h"
#include "printobject.h"
#include <QInputDialog>

wJob::wJob(user *usr, job *j, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wJob)
{
    ui->setupUi(this);
    t_job = j;
    t_user = usr;
    isAdd = false;
    ui->ownWidget->setCurrentBusiness(new business(*(mainWidget::currentBusiness())));

    if(t_job == 0){
        setWindowTitle("Agregar Trabajo");
        t_job = new job();
        t_job->setUserOwner(new user(*usr));
        t_job->setBusiness(new business(*mainWidget::currentBusiness()));
        isAdd = true;
        ui->fechaDateEdit->setDate(QDate::currentDate());
        ui->horaTimeEdit->setTime(QTime(QTime::currentTime().addSecs(1800).hour(), 0).addSecs(3600));
        ui->markFinishedButton->setEnabled(false);
        ui->reprintButton->setEnabled(false);
    }else{
        setWindowTitle("Modificar Trabajo");
        //set values
        ui->fechaDateEdit->setDate(t_job->date());
        ui->horaTimeEdit->setTime(t_job->hour());
        job::kindOfJob kind = t_job->kind();
        ui->ignoreCheckBox->setChecked(t_job->ignore());
        switch(kind){
            case job::fromFile:
                ui->fileLineEdit->setText(t_job->fileTitle());                
                ui->fileButton->setChecked(true);
                break;
            case job::fromBooks:
                qDebug() << "fromBooks";
                ui->ownWidget->setChosedBook(new books(*(mainWidget::currentBusiness()->retrieveBookById(t_job->currentBook()->internalID()))));
                ui->ownButton->setChecked(true);
                ui->ownWidget->setEnabled(true);
                qDebug() << "fromBooks end";
                break;
            case job::fromClient:
                ui->bookLineEdit->setText(t_job->fileTitle());
                ui->bookButton->setChecked(true);
                break;
        };
    };


    connect(ui->ownButton, SIGNAL(clicked(bool)), ui->ownWidget, SLOT(setEnabled(bool)));
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->discardButton, SIGNAL(clicked()), this, SLOT(cancel()));
    connect(ui->reprintButton, SIGNAL(clicked()), this, SLOT(reprint()));
    connect(ui->otherJobButton, SIGNAL(clicked()), this, SLOT(cloneJob()));

    connect(ui->sameWorkButton, SIGNAL(clicked()), this, SLOT(cloneWork()));
    connect(ui->differentButton, SIGNAL(clicked()), this, SLOT(addWorks()));
    refreshWorkorders();
}

wJob::~wJob()
{
    /*wworkorder *w;
    foreach (w, t_tabs) {
        delete w;
    };*/
    qDeleteAll(t_tabs.begin(), t_tabs.end());
    if(t_job != 0) delete t_job;
    delete ui;
}

void wJob::refreshWorkorders()
{
    wworkorder *ww;
    workorder* w;

    //remuevo los tabs viejos    
    while(ui->tabWidget->count() != 0) ui->tabWidget->removeTab(0);
    while(t_tabs.count() != 0){ ww = t_tabs.takeFirst(); delete ww; }

    //creo todos nuevos
    for(int i = 0; i < t_job->workCount(); i++){
        w = t_job->workAt(i);        
        ww = new wworkorder(this, w);
        connect(ui->ownWidget, SIGNAL(currentBookChanged(books*)), ww, SLOT(setBookInfo(books*)));
        t_tabs << ww;
        ui->tabWidget->addTab(ww, QIcon(), QString("Orden Nro. %1").arg(i+1));
    };
}

void wJob::save()
{
    workorder* a;
    wworkorder* w;
    QTime t;

    //check for no-empty name
    foreach (w, t_tabs) {
        w->save();
    };
    bool ok = true;
    for(int i = 0; i < t_job->workCount(); i++){
        a = t_job->workAt(i);
        if(a->costumerName().isEmpty()){
            ok = false;
            break;
        };
    };

    if(!ok){
        QMessageBox::warning(this,tr("Error"), tr("No todos los trabajos tienen nombre de usuario"), QMessageBox::Ok);
        return;
    };

    t_job->setDate(ui->fechaDateEdit->date());
    t_job->setHour(ui->horaTimeEdit->time());
    t_job->setIgnore(ui->ignoreCheckBox->isChecked());
    if(ui->fileButton->isChecked()){ t_job->setFileTitle(ui->fileLineEdit->text()); t_job->setKindOfJob(job::fromFile);};
    if(ui->bookButton->isChecked()){ t_job->setFileTitle(ui->bookLineEdit->text()); t_job->setKindOfJob(job::fromClient);};
    if(ui->ownButton->isChecked()){ t_job->setBooks(new books(*(ui->ownWidget->getChosedBook()))); t_job->setKindOfJob(job::fromBooks);};

    for(int i = 0; i < t_job->workCount(); i++){
        a = t_job->workAt(i);
        a->setDeadline(QDateTime(ui->fechaDateEdit->date(), ui->horaTimeEdit->time()));
        a->setDescription(t_job->fileTitle());
        a->setBusiness(new business(*(t_job->getBusiness())));
        a->setLista(ui->ownButton->isChecked());

        if(isAdd) a->setUserowner(new user(t_user->internalID()));
        if(t_job->kind() == job::fromBooks) a->setDescription(t_job->currentBook()->name());
    };
    qDebug() << "Inicio guardar";
    t.start();

    //qDebug() << nd::connection::maindb().transaction();
    nd::connection::instance()->exec("BEGIN TRANSACTION;");


    if(t_job->commit(t_user->internalID())){
        userlog::logThis(t_user, t_job, isAdd ? "Alta de trabajo" : "Modificacion del trabajo");
        for(int i = 0; i < t_job->workCount(); i++){
            a = t_job->workAt(i);
            userlog::logThis(t_user, a, isAdd ? "Alta de workorder" : "Modificacion del workorder");
        };
        //qDebug() << nd::connection::maindb().commit();
        qDebug() << "commiteo time elapsed" << t.elapsed();
        //t.restart();
        if(isAdd) printObject::instance()->printJob(t_job);
        //qDebug() << "print time elapsed" << t.elapsed();
        nd::connection::instance()->exec("COMMIT;");
        close();
    }else{
        QMessageBox::warning(this, tr("Advertencia!"), tr("No se ha podido guardar el pedido, por favor, realizelo nuevamente"), QMessageBox::Yes);
        workorder* w;
        for(int i = 0; i < t_job->workCount(); i++){
            w = t_job->workAt(i);
            w->erase();
        };
        nd::connection::maindb().rollback();
    };
}

void wJob::cancel()
{
    if(isAdd){
        delete t_job;
        t_job = 0;
    }else{
        if(QMessageBox::warning(this, tr("Advertencia!"), tr("Esta por borrar el trabajo actual y todos sus pedidos derivados, esta seguro de continuar?"), QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes){
            t_job->erase(t_user->internalID());
        };
    };
    close();
}

void wJob::reprint()
{
    //preguntar por que cosa reimprimir
    printObject::instance()->printJob(t_job);
}

void wJob::cloneWork()
{
    /*int copies = QInputDialog::getInt(this, tr("Cantidad de copias"), tr("cantidad: "), 1, 1);
    wworkorder* ww = dynamic_cast<wworkorder*>(ui->tabWidget->currentWidget());
    ww->save();

    wworkorder* w;
    foreach (w, t_tabs) {
        qDebug() << w->windowTitle();
        w->save();
        qDebug() << w->getWorkorder()->internalID() << w->getWorkorder()->costumerName();
    };
    refreshWorkorders();*/
    int copies = QInputDialog::getInt(this, tr("Cantidad de copias"), tr("cantidad: "), 1, 1);
    wworkorder* ww = dynamic_cast<wworkorder*>(ui->tabWidget->currentWidget());
    ww->save();
    workorder* w;
    for(int i = 0; i < copies; i++){
        w = new workorder(*(ww->getWorkorder()));
        w->setUserowner(new user(*t_user));
        w->setCostumerName("");
        t_job->addWork(w);
    };
    refreshWorkorders();
}

void wJob::addWorks()
{
    int copies = QInputDialog::getInt(this, tr("Cantidad de copias"), tr("cantidad: "), 1, 1);
    wworkorder* ww = dynamic_cast<wworkorder*>(ui->tabWidget->currentWidget());
    ww->save();
    workorder* w;
    for(int i = 0; i < copies; i++){
        w = new workorder();
        w->setUserowner(new user(*t_user));
        t_job->addWork(w);
    };
    refreshWorkorders();
}

void wJob::cloneJob()
{
    qDebug() << "debug";
    save();
    job* j = new job(*t_job);
    qDebug() << "debug";
    //clareo info del job
    j->setFileTitle("");
    workorder* a;
    for(int i = 0; i < j->workCount(); i++){
        a = j->workAt(i);
        a->clearId();
    };
    wJob *form = new wJob(t_user, j);
    qDebug() << "debug";
    form->setWindowModality(Qt::ApplicationModal);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->showMaximized();
}

void wJob::delWorks(workorder *w)
{
    t_job->delWork(w);
    delete w;
    refreshWorkorders();
}

void wJob::showWorkorder(quint64 id)
{
    bool find = false;
    int i = 0;
    while(!find && i < t_job->workCount()){
        if(t_job->workAt(i)->internalID() == id){
            find = true;
        }else{
            i++;
        };
    };

    if(find){
        wworkorder *w = t_tabs.at(i);
        ui->tabWidget->setCurrentWidget(w);
    };
}
