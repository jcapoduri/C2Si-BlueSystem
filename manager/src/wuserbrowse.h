#ifndef WUSERBROWSE_H
#define WUSERBROWSE_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>
#include "wuser.h"

namespace Ui {
class wUserBrowse;
}

class wUserBrowse : public QWidget
{
    Q_OBJECT
    
public:
    explicit wUserBrowse(bool toSel = false, QWidget *parent = 0);
    ~wUserBrowse();

public slots:
    void    add();
    void    mod();
    void    del();
    //void    userAdded(user* usr);

    void    refresh();
    void    select();
signals:
    void    userSelected(user *u);
private:
    Ui::wUserBrowse *ui;
    QSqlTableModel *model;
};

#endif // WUSERBROWSE_H
