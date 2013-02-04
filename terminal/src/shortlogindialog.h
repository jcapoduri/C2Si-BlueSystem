#ifndef SHORTLOGINDIALOG_H
#define SHORTLOGINDIALOG_H

#include <QDialog>
#include "user.h"

namespace Ui {
class shortLoginDialog;
}

class shortLoginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit shortLoginDialog(user* usr, QWidget *parent = 0);
    ~shortLoginDialog();
public slots:
    void        log();
signals:
    void        userLogged(user* usr);
private:
    Ui::shortLoginDialog *ui;
    user*                 t_user;
};

#endif // SHORTLOGINDIALOG_H
