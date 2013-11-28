#ifndef UIUSERLOGIN_H
#define UIUSERLOGIN_H

#include <QDialog>
#include <QJsonObject>

namespace Ui {
    class loginDialog;
}

class uiUserLogin : public QDialog
{
    Q_OBJECT
public:
    explicit uiUserLogin(QWidget *parent = 0);
    explicit uiUserLogin(QJsonObject & b, QWidget *parent = 0);
    ~uiUserLogin();
signals:
    
public slots:
    void    attemptToLog();
    void    logResponse();

private:
    Ui::loginDialog *ui;
    bool            adminlogin;
    QJsonObject     business;

};

#endif // UIUSERLOGIN_H
