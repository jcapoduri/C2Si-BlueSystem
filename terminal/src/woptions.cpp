#include "woptions.h"
#include "ui_woptions.h"
#include <QMessageBox>
#include <QInputDialog>

woptions::woptions(user *u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::woptions)
{
    ui->setupUi(this);
    t_user = u;
    setWindowTitle(QString("Opciones (%1, %2)").arg(u->lastname()).arg(u->name()));

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(save()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(cancel()));
}

woptions::~woptions()
{
    delete ui;
}

void woptions::save()
{
    t_user->commit(t_user->internalID());
    close();
}

void woptions::cancel()
{
    close();
}

void woptions::resetPassword()
{
    if(!checkPassword()){
        QMessageBox::warning(this, tr("Error"), tr("El password suministrado no es valido"), QMessageBox::Ok);
        return;
    };

    if(ui->passwordLineEdit->text() != ui->repetirPasswordLineEdit->text()){
        QMessageBox::warning(this, tr("Error"), tr("Difieren ambos campos de password"), QMessageBox::Ok);
        return;
    };

    t_user->setPassword(ui->passwordLineEdit->text());
    QMessageBox::warning(this, tr("Reset de Password"), tr("El password ha sido modificado con exito"), QMessageBox::Ok);
}

void woptions::resetShortPassword()
{
    if(!checkPassword()){
        QMessageBox::warning(this, tr("Error"), tr("El password suministrado no es valido"), QMessageBox::Ok);
        return;
    };

    if(ui->shortPasswordLineEdit->text() != ui->repetirShortLineEdit->text()){
        QMessageBox::warning(this, tr("Error"), tr("Difieren ambos campos de password"), QMessageBox::Ok);
        return;
    };

    t_user->setShortpassword(ui->shortPasswordLineEdit->text());
    QMessageBox::warning(this, tr("Reset de Password"), tr("El password ha sido modificado con exito"), QMessageBox::Ok);
}

bool woptions::checkPassword()
{
    bool _ok;
    QString _passwd = QInputDialog::getText(this, tr("Ingrese Numero de Orden:"), tr("orden: "), QLineEdit::Normal, "", &_ok);
    if(!_ok) return false;

    return (t_user->password() == _passwd);
}
