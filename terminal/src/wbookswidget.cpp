#include "wbookswidget.h"
#include "ui_wbookswidget.h"
#include "connection.h"
#include "db.h"
#include "mainwidget.h"

wBooksWidget::wBooksWidget(business *current, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBooksWidget)
{
    ui->setupUi(this);
    t_business = current;
    books *bk;
    for(int i = 0; i < t_business->booksCount(); i++){
        bk = t_business->booksAt(i);
        ui->primaryComboBox->addItem(bk->name(), bk->internalID());
    };
    connect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
    //ui->primaryComboBox->setCurrentIndex(0);
    quint64 id = ui->primaryComboBox->itemData(ui->primaryComboBox->currentIndex()).toInt();

    QList<QComboBox *> toAdd = createComboBoxes(t_business->retrieveBookById(id));
    qDebug() << "libro: " << t_business->retrieveBookById(id)->internalID();
    QComboBox* who;
    foreach(who, toAdd){
        ui->comboLayout->addWidget(who);
        t_comboboxes << who;
    }
}

wBooksWidget::wBooksWidget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::wBooksWidget)
{
     ui->setupUi(this);
}

wBooksWidget::~wBooksWidget()
{
    delete ui;
}

books *wBooksWidget::getChosedBook()
{
    return t_business->retrieveBookById(t_comboboxes.last()->itemData(t_comboboxes.last()->currentIndex(), Qt::UserRole).toInt());
}

void wBooksWidget::setChosedBook(books *bk)
{
    QList<books*> bks;
    books* b = bk;
    QComboBox* box;
    while(b->internalID() != 0){
        qDebug() << "bk:" << b->internalID() << " parent: " << b->parent();
        bks << b;
        b = b->parent();
    };

    disconnect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
    //b = bks.takeFirst();
    b = bks.takeLast();
    qDebug() << b->name();
    qDebug() << b->internalID();
    ui->primaryComboBox->setCurrentIndex(ui->primaryComboBox->findData(b->internalID()));
    qDebug() << "primary id: " << ui->primaryComboBox->currentIndex();
    comboChanged(ui->primaryComboBox);
    //QMetaObject::invokeMethod(ui->primaryComboBox, "currentIndexChanged");
    //qApp->processEvents(QEventLoop::AllEvents);
    int i = 0;
    while(!bks.isEmpty()){
        //b = bks.takeFirst();
        b = bks.takeLast();
        box = t_comboboxes.at(i);
        qDebug() << "t_comboboxes: " << box;
        box->setCurrentIndex(box->findData(b->internalID()));
        comboChanged(box);
        i++;
    };
    connect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
}

void wBooksWidget::comboChanged(int index)
{
    QComboBox* who = dynamic_cast<QComboBox*>(sender());
    if(ui->primaryComboBox == who){
        qDebug() << "first combo";
        while(!t_comboboxes.isEmpty()){
            who = t_comboboxes.takeFirst();
            qDebug() << who->currentText();
            qDebug() << ui->comboLayout->indexOf(who);
            qDebug() << ui->comboLayout->itemAt(ui->comboLayout->indexOf(who));
            ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(who)));
            qDebug() << "1";
            delete who;
            qDebug() << "1";
        };
        qDebug() << "1";
        who = ui->primaryComboBox;
        qDebug() << "1";
    }else{
        //for(int i = index + 1; i < t_comboboxes.count(); i++){
        qDebug() << "combo at " << index;
        who = dynamic_cast<QComboBox*>(sender());
        bool find = false;
        int  idx = 0;
        while(!find && idx < t_comboboxes.count()){
            qDebug() << "combobox: " << t_comboboxes[idx];
            qDebug() << "who: " << who;
            if(t_comboboxes[idx] == who)
                find = true;
            else
                idx++;
        };
        qDebug() << "idx:" << idx;
        for(int i = t_comboboxes.count() - 1; i > idx; i--){
            who = t_comboboxes.takeAt(i);
            //ui->comboLayout->removeWidget(who);
            ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(who)));
            //who->deleteLater();
            delete who;
        };
        qDebug() << "test";

    };
    who = dynamic_cast<QComboBox*>(sender());
    quint64 id = who->itemData(who->currentIndex()).toInt();

    QList<QComboBox *> toAdd = createComboBoxes(t_business->retrieveBookById(id));
    foreach(who, toAdd){
        ui->comboLayout->addWidget(who);
        t_comboboxes << who;
    };
    /*qDebug() << "getChosedBook" << getChosedBook();
    qDebug() << "last" << toAdd.last()->itemData(toAdd.last()->currentIndex(), Qt::UserRole).toInt();
    qDebug() << "t_business" << t_business->retrieveBookById(toAdd.last()->itemData(toAdd.last()->currentIndex(), Qt::UserRole).toInt());*/
    emit currentBookChanged(getChosedBook());
}

void wBooksWidget::setCurrentBusiness(business *current)
{
    t_business = current;
    books *bk;
    for(int i = 0; i < t_business->booksCount(); i++){
        bk = t_business->booksAt(i);
        ui->primaryComboBox->addItem(bk->name(), bk->internalID());
    };
    connect(ui->primaryComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));

    quint64 id = ui->primaryComboBox->itemData(ui->primaryComboBox->currentIndex()).toInt();

    QList<QComboBox *> toAdd = createComboBoxes(t_business->retrieveBookById(id));
    //qDebug() << "libro: " << t_business->retrieveBookById(id)->internalID();
    QComboBox* who;
    foreach(who, toAdd){
        ui->comboLayout->addWidget(who);
        t_comboboxes << who;
    }
}

QList<QComboBox *> wBooksWidget::createComboBoxes(books *bks)
{
    QList<QComboBox*> retu;
    if(bks->filesCount() == 0) return retu; else{
        QComboBox* box = new QComboBox();
        books *bk;
        for(int i = 0; i < bks->filesCount(); i++){
            bk = bks->fileAt(i);
            box->addItem(QString("%1 - %2").arg(bk->number()).arg(bk->name()), bk->internalID());
        };
        connect(box, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged(int)));
        retu << box;
        retu << createComboBoxes(bks->fileAt(0));
    };
    return retu;
}

void wBooksWidget::comboChanged(QComboBox *index)
{
    QComboBox* who = index;
    if(ui->primaryComboBox == who){
        qDebug() << "first combo";
        while(!t_comboboxes.isEmpty()){
            who = t_comboboxes.takeFirst();
            qDebug() << who->currentText();
            qDebug() << ui->comboLayout->indexOf(who);
            qDebug() << ui->comboLayout->itemAt(ui->comboLayout->indexOf(who));
            ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(who)));
            //delete who;
            who->deleteLater();
        };
        who = ui->primaryComboBox;
    }else{
        //for(int i = index + 1; i < t_comboboxes.count(); i++){
        //qDebug() << "combo at " << index;
        who = index;
        bool find = false;
        int  idx = 0;
        while(!find && idx < t_comboboxes.count()){
            qDebug() << "combobox: " << t_comboboxes[idx];
            qDebug() << "who: " << who;
            if(t_comboboxes[idx] == who)
                find = true;
            else
                idx++;
        };
        qDebug() << "idx:" << idx;
        for(int i = t_comboboxes.count() - 1; i > idx; i--){
            who = t_comboboxes.takeAt(i);
            //ui->comboLayout->removeWidget(who);
            ui->comboLayout->removeItem(ui->comboLayout->itemAt(ui->comboLayout->indexOf(who)));
            //who->deleteLater();
            delete who;
        };
        qDebug() << "test";

    };
    qDebug() << "lend";
    who = index;
    quint64 id = who->itemData(who->currentIndex()).toInt();
    qDebug() << "id:" << id;
    qDebug() << "end" << t_business->retrieveBookById(id);
    QList<QComboBox *> toAdd = createComboBoxes(t_business->retrieveBookById(id));
    qDebug() << "end";
    foreach(who, toAdd){
        ui->comboLayout->addWidget(who);
        t_comboboxes << who;
    };
    qDebug() << "end";
}
