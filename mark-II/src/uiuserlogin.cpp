#include "uiuserlogin.h"
#include "ui_logindialog.h"
#include "global_scope.h"
#include <QCryptographicHash>
#include <QDebug>
#include <QMessageBox>

uiUserLogin::uiUserLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog),
    adminlogin(true)
{
    ui->setupUi(this);

    connect(ui->loginButton, SIGNAL(pressed()), this, SLOT(attemptToLog()));
    connect(ui->cancelButton, SIGNAL(pressed()), this, SLOT(reject()));
}

uiUserLogin::uiUserLogin(QJsonObject &b, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog),
    adminlogin(false)
{
    ui->setupUi(this);
    business = b;

    connect(ui->loginButton, SIGNAL(pressed()), this, SLOT(attemptToLog()));
    connect(ui->cancelButton, SIGNAL(pressed()), this, SLOT(reject()));
}


uiUserLogin::~uiUserLogin()
{
    delete ui;
}

void uiUserLogin::attemptToLog()
{
    QJsonObject tmp_data;

    tmp_data.insert("username", QJsonValue(ui->usuarioLineEdit->text()));
    tmp_data.insert("password", QJsonValue(QString(QCryptographicHash::hash(ui->passwordLineEdit->text().toLatin1(), QCryptographicHash::Md5).toHex())));
    QByteArray data = app->jqXHR()->request(QString("post"), QString("/business/%1/login").arg(business.value("id").toString()), tmp_data);
    if (data == "-1") {
        QMessageBox::warning(this, tr("User login"), tr("Usuario y/o Contraseña es invalido"), QMessageBox::Ok);
    }else{
        QDialog::accept();
    };
}

void uiUserLogin::logResponse()
{
}

