#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QAction>
#include "ui_mainwindow.h"
#include "user.h"
#include "logindialog.h"
#include "version.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void    showForm(QWidget *form, bool modal = false);

    static  MainWindow* instance();
    static  user*       currentUser();

public slots:
    void    connectToDB();
    void    setCurrentUser(user* usr);
    void    login();

    void    businessAdd();
    void    businessBrowse();

    void    userAdd();
    void    userBrowse();

    void    showWorks();
    void    showEmployee();
    void    showBackups();
    void    showOptions();
    void    makeCloudBackup();
    void    makeLocalBackup();
    void    makeOutOfSerie();

    void    booksBrowse();
private:
    Ui::MainWindow *ui;
    user           *t_user;
    loginDialog    *wlogin;
    static MainWindow*     pInstance;
};

#endif // MAINWINDOW_H
