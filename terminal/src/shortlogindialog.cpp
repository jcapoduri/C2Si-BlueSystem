#include <QMessageBox>
#include "shortlogindialog.h"
#include "ui_shortlogindialog.h"

shortLoginDialog::shortLoginDialog(user *usr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shortLoginDialog)
{
    ui->setupUi(this);
    t_user = usr;
    ui->userEdit->setText(t_user->username());

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(log()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(close()));
}

shortLoginDialog::~shortLoginDialog()
{
    delete ui;
}

void shortLoginDialog::log()
{
    if(t_user->shortpassword() == ui->passwordLineEdit->text()){
        emit userLogged(t_user);
    }else{
        QMessageBox::warning(this, tr("Advertencia"), tr("Password no valido"), QMessageBox::Ok);
    };
    close();
}
