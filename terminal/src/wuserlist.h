#ifndef WUSERLIST_H
#define WUSERLIST_H

#include <QDialog>
#include "mainwidget.h"

namespace Ui {
class wUserList;
}

class wUserList : public QDialog
{
    Q_OBJECT
    
public:
    explicit wUserList(user *usr, QWidget *parent = 0);
    ~wUserList();
public slots:
    void    kickUsers();

private:
    void    refreshUsers();
    Ui::wUserList   *ui;
    user            *t_user;
};

#endif // WUSERLIST_H
