#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "user.h"

namespace Ui {
class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT
    
public:
    static user* askUserSignature();
    explicit loginDialog(QWidget *parent = 0);
    user*    getLoggedUser();
    ~loginDialog();
signals:
    void    userLogged(user* usr);
public slots:
    void    accept();
private:
    Ui::loginDialog *ui;
    user*          t_user;
};

#endif // LOGINDIALOG_H
