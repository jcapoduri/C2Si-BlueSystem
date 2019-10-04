#include "mainwindow.h"
#include "connection.h"
#include "wbusiness.h"
#include "wbusinessbrowse.h"
#include "wuser.h"
#include "wuserbrowse.h"
#include "wbooksbrowser.h"
#include "wworksbrowser.h"
#include "wuserlogbrowser.h"
#include "wbackups.h"
#include "wbackupdialog.h"
#include "woptiondialog.h"
#include "printobject.h"
#include "configmanager.h"
#include <QInputDialog>

MainWindow* MainWindow::pInstance = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    wlogin(new loginDialog)
{
    ui->setupUi(this);
    t_user = 0;
    wlogin->setWindowModality(Qt::ApplicationModal);

    setWindowTitle("BlueSystem::Administracion     ver: " + VERSION);

    connect(ui->actionSalir, SIGNAL(triggered()), this, SLOT(close()));
    connect(wlogin, SIGNAL(userLogged(user*)), this, SLOT(setCurrentUser(user*)));
    connect(wlogin, SIGNAL(rejected()), this, SLOT(close()));
    connect(qApp, SIGNAL(lastWindowClosed()), qApp, SLOT(quit()));

    connect(ui->actionAgregar_Locales, SIGNAL(triggered()), this, SLOT(businessAdd()));
    connect(ui->actionVer_Locales, SIGNAL(triggered()), this, SLOT(businessBrowse()));
    connect(ui->actionAgregar_Usuarios, SIGNAL(triggered()), this, SLOT(userAdd()));
    connect(ui->actionVer_Usuarios, SIGNAL(triggered()), this, SLOT(userBrowse()));
    connect(ui->actionVer_Libros, SIGNAL(triggered()), this, SLOT(booksBrowse()));

    connect(ui->actionVer_Trabajos, SIGNAL(triggered()), this, SLOT(showWorks()));
    connect(ui->actionDe_Empleado, SIGNAL(triggered()), this, SLOT(showEmployee()));

    connect(ui->actionManegar_backup_locales, SIGNAL(triggered()), this, SLOT(showBackups()));
    connect(ui->actionCrear_back_up_en_la_nube, SIGNAL(triggered()), this, SLOT(makeCloudBackup()));

    connect(ui->actionOpciones, SIGNAL(triggered()), this, SLOT(showOptions()));
    connect(ui->actionDe_Fuera_de_Serie, SIGNAL(triggered()), this, SLOT(makeOutOfSerie()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete t_user;
    delete wlogin;
    delete pInstance;
    nd::connection::deleteLater();
}

void MainWindow::connectToDB()
{
    nd::connection* conn;
    conn = nd::connection::instance();
    //conn->setMainDb(conn->addMySQL("mysql", "localhost", "root", "", "bluesystem"));
    /*nd::connection::instance()->addTable("books");
    nd::connection::instance()->addTable("business");
    nd::connection::instance()->addTable("business_books");
    nd::connection::instance()->addTable("business_users");
    nd::connection::instance()->addTable("client");
    nd::connection::instance()->addTable("jobs");
    nd::connection::instance()->addTable("jobs_workorders");
    nd::connection::instance()->addTable("ndconfig");
    nd::connection::instance()->addTable("users");
    nd::connection::instance()->addTable("workorders");
    nd::connection::instance()->addTable("workorders_pages");*/
    printObject::instance();

    QString dbname = configManager::getValue("database", "dbname").toString();
    QString dbhost = configManager::getValue("database", "dbhost").toString();
    QString dbuser = configManager::getValue("database", "dbuser").toString();
    QString dbpass = configManager::getValue("database", "dbpass").toString();

    nd::connection::instance()->setMainDb(nd::connection::addMySQL("main", dbhost, dbuser, dbpass, dbname));
    /*nd::connection::instance()->setFallbackDb(nd::connection::addMySQL("fallback", "fotocasitaazul.com.ar", "fotocasi_user", "lokithor", "fotocasi_bluesystem"));*/
    //nd::connection::instance()->setFallbackDb(nd::connection::addMySQL("fallback", "localhost", "root", "", "bluesystem"));
    //nd::connection::instance()->setMainDb(nd::connection::addMySQL("main", "fotocasitaazul.com.ar", "fotocasi_user", "lokithor", "fotocasi_bluesystem"));
    //nd::connection::instance()->setMainDb(nd::connection::addMySQL("main", "CasitaAzul3-PC", "root", "", "bluesystem"));
    /*nd::connection::instance()->setFallbackDb(nd::connection::addMySQL("fallback", "localhost", "root", "", "bluesystem"));
    nd::connection::instance()->sync();*/
}

void MainWindow::setCurrentUser(user *usr)
{
    this->t_user = usr;
}

void MainWindow::login()
{
    /*close all windows*/
    ui->mdiArea->closeAllSubWindows();
    if(t_user != 0) delete t_user;
    wlogin->show();
}

void MainWindow::businessAdd()
{
    wBusiness *form = new wBusiness();
    showForm(form);
}

void MainWindow::businessBrowse()
{
    wBusinessBrowse *form = new wBusinessBrowse();
    showForm(form);
}

void MainWindow::userAdd()
{
    wUser *form = new wUser();
    showForm(form);
}

void MainWindow::userBrowse()
{
    wUserBrowse *form = new wUserBrowse();
    showForm(form);
}

void MainWindow::showWorks()
{
    wWorksBrowser *form = new wWorksBrowser();
    showForm(form);
}

void MainWindow::showEmployee()
{
    wUserLogBrowser *form = new wUserLogBrowser();
    showForm(form);
}

void MainWindow::showBackups()
{
    wBackups *form = new wBackups();
    showForm(form);
}

void MainWindow::showOptions()
{
    wOptionDialog *dlg = new wOptionDialog();
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->exec();
}

void MainWindow::makeCloudBackup()
{
    wBackupDialog *dlg = new wBackupDialog();    
    QString _txt;
    if(dlg->cloudBackup()){
        _txt = "Ok";
    }else{
        _txt = "No Ok";
    };
    QMessageBox::warning(0, tr("Cloud Backup"), _txt, QMessageBox::Ok);
    dlg->deleteLater();
}

void MainWindow::makeLocalBackup()
{
}

void MainWindow::makeOutOfSerie()
{
    QSettings sets(tr("config.ini"), QSettings::IniFormat);
    business *temp;
    int toPrint;
    sets.beginGroup("General");
    temp = new business(sets.value("thisBusiness", 1).toInt());
    toPrint = sets.value("lastOutOfOrder", 1).toInt();
    // Preguntar por la cantidad a imprimir
    bool ok;
    int cantidad = QInputDialog::getInt(this, tr("Fuera de Orden"), tr(""), 1, -214748347, 214748347, 1, &ok);
    if(!ok) return;
    ok = printObject::instance()->printOutOfOrder(toPrint, cantidad, temp);
    if(ok){
        sets.setValue("lastOutOfOrder", toPrint);
    };
    delete temp;
}

void MainWindow::booksBrowse()
{
    wBooksBrowser *form = new wBooksBrowser();
    showForm(form);
}

MainWindow* MainWindow::instance(){
    if(pInstance == 0){
        pInstance = new MainWindow();
    };
    return pInstance;
}

user* MainWindow::currentUser(){
    return pInstance->t_user;
}

void MainWindow::showForm(QWidget *form, bool modal){
    form->setAttribute(Qt::WA_DeleteOnClose);
    QMdiSubWindow *f = ui->mdiArea->addSubWindow(form);
    connect(form, SIGNAL(destroyed()), f, SLOT(close()));
    f->setAttribute(Qt::WA_DeleteOnClose);
    if(modal) f->setWindowModality(Qt::ApplicationModal);
    f->show();
}
