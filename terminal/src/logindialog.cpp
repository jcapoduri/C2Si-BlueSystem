#include "logindialog.h"
#include "ui_logindialog.h"

user *loginDialog::askUserSignature()
{
    loginDialog* dlg = new loginDialog();
    dlg->exec();
    return dlg->getLoggedUser();
}

loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    ui->setupUi(this);
    t_user = 0;

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(reject()));

    setAttribute(Qt::WA_DeleteOnClose);
}

user *loginDialog::getLoggedUser()
{
    return this->t_user;
}

loginDialog::~loginDialog()
{
    delete ui;
}

void loginDialog::accept(){
    disconnect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    t_user = user::login(ui->usuarioLineEdit->text(), ui->passwordLineEdit->text());
    if(t_user != 0){
        emit userLogged(t_user);
        QDialog::accept();
    }else{
        QMessageBox::warning(this, tr("Alert"), tr("Usuario y/o password no valido/s"), QMessageBox::Ok);
        connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
    };
}
