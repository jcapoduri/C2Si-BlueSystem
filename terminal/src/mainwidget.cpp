#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "connection.h"
#include "queryresult.h"
#include "logindialog.h"
#include "shortlogindialog.h"
#include "wuserpanel.h"
#include "configmanager.h"
#include <QSettings>
#include <QSpacerItem>
#include <QMenu>
#include <QTimer>
#include <QFile>

#include "wworklist.h"
#include "wlistlista.h"
#include "wlistclient.h"
#include "workorderlist.h"
#include "wworkbooklist.h"
#include "logger.h"

mainWidget* mainWidget::t_instance = 0;

mainWidget::mainWidget(QWidget *parent) :
    QWidget(parent, Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint),
    ui(new Ui::mainWidget),
    t_spacer(new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding)),
    t_icon(new QSystemTrayIcon(QIcon(":/icons/graphics/casitaazul.png"))),
    t_timer(new QTimer),
    t_timer_sync(new QTimer),
    t_sync_thread(new syncThread(this))
{
    // seteo la Ui
    ui->setupUi(this);
    // cargo el comercio de esta terminal
    QSettings   sets("config.ini", QSettings::IniFormat);
    int businessValue = configManager::getValue("thisBusiness").toInt();
    t_business = new business(businessValue);
    t_work_lister = new workorderList(t_business);

    //seteo de logger
    QString logfilename  = configManager::getValue("log", "file").toString();
    int     logverbosity = configManager::getValue("log", "verbosity").toInt();
    int     loglevel     = configManager::getValue("log", "level").toInt();
    QFile*  logfile      = new QFile(logfilename);
    logfile->open(QIODevice::Append);
    nd::logger::setup(logfile, logverbosity, loglevel);

    //cargo los usuarios
    refreshUsers();

    //seteo menu de cerrar en el systray
    QAction *quitAction = new QAction(tr("&Cerrar"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    QMenu *trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(quitAction);
    t_icon->setContextMenu(trayIconMenu);

    //seteo el timer de trabajos (5min)
    t_timer->setInterval(5*60*1000);
    t_timer_sync->setInterval(1*60*1000);

#ifdef WIN32
    abd.cbSize = sizeof( APPBARDATA );
    abd.uEdge = (int)ABE_RIGHT;
    registerAppBar();
    setWidth( width() );
#endif //WIN32

    // muestro el systray
    t_icon->show();

    connect(ui->logUserButton, SIGNAL(clicked()), this, SLOT(logNewUser()));
    connect(t_timer, SIGNAL(timeout()), this, SLOT(checkWorks()));
    connect(ui->worksPushButton, SIGNAL(clicked()), this, SLOT(listWorks()));
    connect(ui->listaButton, SIGNAL(clicked()), this, SLOT(listBookWorks()));
    connect(ui->othersButton, SIGNAL(clicked()), this, SLOT(listOthers()));
    //connect(t_timer_sync, SIGNAL(timeout()), this, SLOT(sync()));
}

mainWidget::~mainWidget()
{
#ifdef WIN32
    unregisterAppBar();
#endif //WIN32
    //userstamp::closeAllSession();
    //delete t_icon;
    t_icon->hide();
    delete ui;
    delete t_business;    
    delete t_timer;
    delete t_timer_sync;
}

mainWidget *mainWidget::instance()
{
    if(t_instance == 0){
        t_instance = new mainWidget();
    };
    return t_instance;
}

business *mainWidget::currentBusiness()
{
    return mainWidget::instance()->t_business;
}

void mainWidget::connectToDB()
{
    //seteo de las db
    QString dbname = configManager::getValue("database", "dbname").toString();
    QString dbhost = configManager::getValue("database", "dbhost").toString();
    QString dbuser = configManager::getValue("database", "dbuser").toString();
    QString dbpass = configManager::getValue("database", "dbpass").toString();

    nd::connection::instance()->setMainDb(nd::connection::addMySQL("main", dbhost, dbuser, dbpass, dbname));
    QSqlError lastError = nd::connection::maindb().lastError();
    qDebug() << lastError.text();
    if (lastError.type() != QSqlError::NoError)
        nd::logger::instance()->error(lastError.text());

    t_business->update();
    t_work_lister = new workorderList(t_business, this);

    userlog::setBusiness(t_business);
    userstamp::setBusiness(t_business);
    userstamp::checkSession();

    setWindowTitle(QString("BlueSystem(%1)::Terminal    ver: %2").arg(t_business->name()).arg(VERSION));

    t_timer->start();
    t_timer_sync->start();
    checkRemoteLogin();
}

void mainWidget::refreshUsers()
{
    QPushButton *b;
    while(!t_buttons.isEmpty()){
        b = t_buttons.takeFirst();
        ui->userArea->widget()->layout()->removeWidget(b);
        delete b;
    };
    ui->userArea->widget()->layout()->removeItem(t_spacer);
    while(!ui->userArea->widget()->layout()->isEmpty()){
        ui->userArea->widget()->layout()->removeItem(ui->userArea->widget()->layout()->itemAt(0));
    };
    for(int i = 0; i < t_actions.count(); i++){
        b = new QPushButton(QIcon(":/icons/graphics/im-user.png"), t_actions.at(i)->text());
        connect(b, SIGNAL(clicked()), t_actions.at(i), SLOT(trigger()));
        ui->userArea->widget()->layout()->addWidget(b);
        t_buttons << b;
    };
    ui->userArea->widget()->layout()->addItem(t_spacer);
}

void mainWidget::loginUser(user *usr)
{
    //refreshUsers();
    t_business->updateUsers();
    wUserPanel *panel = new wUserPanel(usr);
    panel->setAttribute(Qt::WA_DeleteOnClose);
    panel->setWindowModality(Qt::ApplicationModal);
    panel->show();
}

void mainWidget::addUser(user *usr)
{
    qDebug()  << "user :" << usr->internalID();
    bool finded = false;
    int i = 0;
    while(!finded && (i < t_business->usersCount())){
        if(t_business->userAt(i)->internalID() == usr->internalID()){
            finded = true;
        };
        i++;
    };
    qDebug() << "finded : " << finded;

    if(finded){
        finded = false;
        int i = 0;
        while(!finded && i < t_users.count()){
            if(t_users.at(i)->internalID() == usr->internalID()){
                finded = true;
            }else{
                i++;
            };
        };
        if(!finded){
            t_users.append(usr);
            QAction* act = new QAction(usr->username(), this);
            t_actions << act;
            connect(act, SIGNAL(triggered()), this, SLOT(userButtonClicked()));
            act->setData(qVariantFromValue(usr));
            refreshUsers();
            userstamp::openSession(*usr);
        }else{
            delete usr;
        };
    }else{
        QMessageBox::warning(this, tr("Error!"), tr("Usted no esta habilitado para entrar a a este negocio, consulte con el administrador del sistema."), QMessageBox::Ok);
        delete usr;
    };
}

void mainWidget::logoutUser(user *usr)
{
    qDebug() << "u count: " << t_users.count();
    t_users.removeAll(usr);
    qDebug() << "u count: " << t_users.count();
    qDebug() << "1";
    user* u;
    qDebug() << "1";
    for(int i = 0; i < t_actions.count(); i++){
        qDebug() << "1";
        //u = qVariantValue<user*>(t_actions.at(i)->data());
        u = t_actions.at(i)->data().value<user*>();
        qDebug() << "1" << u;
        if(u->internalID() == usr->internalID()){
            QAction* act = t_actions.takeAt(i);
            t_actions.removeAll(act);
            userstamp::closeSession(*usr);
            qDebug() << "1";
            delete act;
            delete u;
        };
        qDebug() << "1";
    };
    refreshUsers();
}

void mainWidget::userButtonClicked()
{
    //QToolButton* bt = dynamic_cast<QToolButton*>(sender());
    //QAction* act = bt->actions().at(0);
    QAction* act = dynamic_cast<QAction*>(sender());
    shortLoginDialog *form = new shortLoginDialog(act->data().value<user*>());
    connect(form, SIGNAL(userLogged(user*)), this, SLOT(loginUser(user*)));
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->exec();
}

void mainWidget::logNewUser()
{
    loginDialog *form = new loginDialog();
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    connect(form, SIGNAL(userLogged(user*)), this, SLOT(addUser(user*)));
    form->exec();
}

void mainWidget::checkWorks()
{
    qDebug() << "checkWorks";
    //get all work not finished at this time, and show the top 5 critical
    int _max = 5;
    int _min_interval = 30; //minutes before alarm
    int _i = 0;
    QString _toShow = "";
    workorder w;
    t_work_lister->setFromDate(QDateTime::currentDateTime().addMonths(-1));
    t_work_lister->setToDate(QDateTime::currentDateTime().addMSecs(_min_interval*60*1000));
    //qDebug() << "from: " << QDateTime::currentDateTime().addMonths(-1) << " to: " << QDateTime::currentDateTime().addMSecs(_min_interval*60*1000);
    t_work_lister->addState(workorder::Waiting);
    t_work_lister->addState(workorder::Fotocopiando);
    t_work_lister->addState(workorder::Anillando);
    t_work_lister->query();
    qDebug() << "t";
    if(t_work_lister->first()){
        do{
            qDebug() << "t";
            w = t_work_lister->item();
            qDebug() << "t";
            qDebug() << w.internalID();
            _toShow.append(QString("Trabajo: %1, cliente: %2, fecha: %3 \r\n").arg(w.descripcion()).arg(w.costumerName()).arg(w.deadLine().toString("d MMMM hh:mm")));
        }while(t_work_lister->next());
        qDebug() << "be";
    };
    if(!_toShow.isEmpty()) t_icon->showMessage("Trabajos pendientes", _toShow);
    qDebug() << "checkWorks";
}

void mainWidget::checkRemoteLogin()
{
    qDebug() << "sync";
    //retrieve logged user
    nd::db::queryResult<userstamp>   q;
    QList<user*>                user_list;
    QList<userstamp*>           stamp_list;
    user*                       user_temp;
    q.setTablename("userstamp");
    q.setFilter("userstamp.endstamp = '0000-00-00 00:00:00'");
    q.exec();
    qDebug() << "sync";
    stamp_list = q.allPtr();
    for(int i = 0; i < stamp_list.count(); i++){
        user_temp = new user(stamp_list.at(i)->userID());
        if(user_temp->update()) user_list << user_temp;
    };
    //for each user check if logued or not
    foreach (user_temp, t_users) {
        bool finded = false;
        int i = 0;
        while(!finded && i < user_list.count()){
            if(user_list.at(i)->internalID() == user_temp->internalID()){
                finded = true;
            }else{
                i++;
            };
        };
        if(!finded){
            logoutUser(user_temp);
            //delete user_temp;
        };
    };

    //add all users
    foreach (user_temp, user_list) {
        addUser(new user(*user_temp));
    };

    qDeleteAll(stamp_list.begin(), stamp_list.end());
    qDeleteAll(user_list.begin(), user_list.end());
}

void mainWidget::listWorks()
{
    wWorkList *wgt = new wWorkList();
    wgt->setAttribute(Qt::WA_DeleteOnClose);
    wgt->search();
    wgt->hideFilter();
    wgt->show();
    wgt->setTitle("Listado de Pendientes");
}

void mainWidget::listBookWorks()
{
    wWorkBookList *wgt = new wWorkBookList();
    wgt->setAttribute(Qt::WA_DeleteOnClose);
    wgt->show();
}

void mainWidget::listOthers()
{
    wWorkList *wgt = new wWorkList();
    wgt->setAttribute(Qt::WA_DeleteOnClose);
    wgt->show();
}

#ifdef WIN32
bool mainWidget::winEvent(MSG *msg, long *result)
{
    *result = 0;

    switch( msg->message )
    {
    case WM_APPBAR_CALLBACK:
        appBarCallback( msg->wParam, msg->lParam );
        break;

    case WM_ACTIVATE:
        SHAppBarMessage( ABM_ACTIVATE, &abd );
        break;

    case WM_WINDOWPOSCHANGED:
        SHAppBarMessage( ABM_WINDOWPOSCHANGED, &abd );
        break;

    default:
        return false;
    }

    return true;
}

void mainWidget::registerAppBar()
{
    abd.hWnd = (HWND)winId();
    abd.uCallbackMessage = WM_APPBAR_CALLBACK;

    if( SHAppBarMessage( ABM_NEW, &abd ) != TRUE )
        qDebug() << "Error: QAppBar: SHAppBarMessage( ABM_NEW ) failed";
}

void mainWidget::unregisterAppBar()
{
    SHAppBarMessage( ABM_REMOVE, &abd );
}

void mainWidget::appBarCallback(WPARAM msg, LPARAM lParam)
{
    if( msg == ABN_FULLSCREENAPP )
    {
        // An application is going fullscreen (lParam = 1) or all fullscreen apps
        // have ended (lParam = 0).  We are supposed to use this to remove or re-add
        // the 'topmost' style attribute.  But apparently being a Qt.Tool window
        // takes care of this? Tried one fullscreen app (Windows Media Player) and
        // the appbar hid, minimized it and the appbar reappeared as topmost.
    }
    else if( msg == ABN_POSCHANGED )
    {
        // The taskbar or another appbar has changed its size or position, we might
        // need to move now.
        setWidth( width());
    }
}

void mainWidget::setWidth(int w)
{
    //if( minimumWidth() != 0 ) w = max( w, minimumWidth());

    // Get the area of the entire desktop
    abd.rc.left = abd.rc.top = 0;
    abd.rc.right = GetSystemMetrics( SM_CXSCREEN );
    abd.rc.bottom = GetSystemMetrics( SM_CYSCREEN );

    // Let Windows subtract the amount being used by other appbars and the
    // taskbar
    SHAppBarMessage( ABM_QUERYPOS, &abd );

    // Position our window on either the left or right side of the screen
    if( abd.uEdge == ABE_LEFT ) abd.rc.right = abd.rc.left + w;
    else abd.rc.left = abd.rc.right - w;

    // Pass the final bounding rectangle to the system
    SHAppBarMessage( ABM_SETPOS, &abd );

    // Set our actual position based on what came back from ABM_SETPOS
    RECT& rc = abd.rc;
    setGeometry( rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top );
    //resizeHandle->setFixedHeight( rc.bottom - rc.top );
}

#endif //WIN32

void mainWidget::sync()
{
    //qDebug() << "temp";
    //t_icon->showMessage("", "Sincronizando...", QSystemTrayIcon::Warning);
    checkRemoteLogin();
    //qDebug() << "sync thread" << t_sync_thread->isRunning();
    //if(!t_sync_thread->isRunning()) t_sync_thread->start();
    //t_icon->showMessage("","Sincronizacion Completa...", QSystemTrayIcon::Warning, 5000);
    //nd::connection::instance()->sync();
}
