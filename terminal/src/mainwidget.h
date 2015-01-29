#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QToolButton>
#include <QPushButton>
#include <QSpacerItem>
#include <QSystemTrayIcon>
#include <QTimer>
#include "business.h"
#include "userlog.h"
#include "userstamp.h"

#include "version.h"
#include "user.h"
#include "printobject.h"
#include "workorderlist.h"
#include "syncthread.h"
#ifdef WIN32
#include <windows.h>
#include <shellapi.h>
#endif //WIN32

#define WM_APPBAR_CALLBACK ( WM_USER + 1 )

namespace Ui {
    class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit mainWidget(QWidget *parent = 0);
    ~mainWidget();

    static mainWidget* instance();
    static business*   currentBusiness();

    QList<user*>        t_users;
public slots:
    void    connectToDB();
    void    refreshUsers();
    void    loginUser(user* usr);
    void    addUser(user* usr);
    void    logoutUser(user *usr);
    void    userButtonClicked();    
    void    logNewUser();
    void    checkWorks();

    void    checkRemoteLogin();
    void    sync();

    void    listWorks();
    void    listBookWorks();
    void    listOthers();

protected:
#ifdef WIN32
    virtual bool winEvent( MSG* msg, long* result );
#endif //WIN32
private:
    Ui::mainWidget*     ui;
    business*           t_business;
    QList<QAction*>     t_actions;

    QList<QPushButton*> t_buttons;
    static  mainWidget* t_instance;
    QSpacerItem*            t_spacer;
    QSystemTrayIcon     *t_icon;
    QTimer              *t_timer;
    QTimer              *t_timer_sync;
    workorderList       *t_work_lister;
    syncThread          *t_sync_thread;
    //desktop dockeable - only windows
#ifdef WIN32
    APPBARDATA abd;
    /* Registers the app bar */
    void registerAppBar();
    /* Unregisters the app bar */
    void unregisterAppBar();
    /* Called by winEvent to handle WM_APPBAR_CALLBACK messages */
    void appBarCallback( WPARAM msg, LPARAM lParam );
    void setWidth(int w);
#endif //WIN32
};
#endif // MAINWIDGET_H
