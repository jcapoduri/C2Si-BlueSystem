#ifndef UITERMINALMAIN_H
#define UITERMINALMAIN_H

#include <QWidget>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QSpacerItem>
#include <QPushButton>

#ifdef WIN32
#include <windows.h>
#include <shellapi.h>
#endif //WIN32

#define WM_APPBAR_CALLBACK ( WM_USER + 1 )

namespace Ui {
    class terminalWidget;
}

class uiTerminalMain : public QWidget
{
    Q_OBJECT
public:
    explicit uiTerminalMain(QJsonObject & b, QWidget *parent = 0);
    ~uiTerminalMain();
    
signals:
    
public slots:
    void    addUser();
    void    startUser();

    void    updateUsers();


protected:
#ifdef WIN32
    virtual bool winEvent( MSG* msg, long* result );
#endif //WIN32

private:
   Ui::terminalWidget*  ui;
   QJsonObject          business;
   QJsonArray           loggedUsers;
   QList<QPushButton*>  buttons;
   QSpacerItem*         t_spacer;

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

#endif // UITERMINALMAIN_H
