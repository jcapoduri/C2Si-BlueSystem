#include "wuser.h"
#include "ui_wuser.h"

wUser::wUser(user *usr, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wUser)    
{
    ui->setupUi(this);
    toAdd = false;
    t_user = usr;
    if(t_user == 0){
        setWindowTitle("Agregar Usuario");
        t_user = new user();
    }else{
        setWindowTitle("Modificar Usuario");
        ui->contraseALineEdit->setText(t_user->password());
        ui->usuarioLineEdit->setText(t_user->username());
        ui->nombreLineEdit->setText(t_user->name());
        ui->apellidoLineEdit->setText(t_user->lastname());
        ui->contraseACortaLineEdit->setText(t_user->shortpassword());
        ui->emailLineEdit->setText(t_user->email());
        ui->telefonoLineEdit->setText(t_user->telephone());
        ui->activoCheckBox->setChecked(t_user->isActive());
        ui->adminCheckBox->setChecked(t_user->isAdmin());
        ui->fechaNacimienoDateEdit->setDate(t_user->birthdate());
    };

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(saved()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(closed()));

}

wUser::~wUser()
{
    delete ui;
}

void wUser::saved()
{
    t_user->setPassword(ui->contraseALineEdit->text());
    t_user->setUsername(ui->usuarioLineEdit->text());
    t_user->setName(ui->nombreLineEdit->text());
    t_user->setLastname(ui->apellidoLineEdit->text());
    //t_user->setName(ui->nombreLineEdit->text());
    t_user->setShortpassword(ui->contraseACortaLineEdit->text());
    t_user->setEmail(ui->emailLineEdit->text());
    t_user->setTelephone(ui->telefonoLineEdit->text());
    t_user->setActive(ui->activoCheckBox->isChecked());
    t_user->setAdmin(ui->adminCheckBox->isChecked());
    t_user->setBirthdate(ui->fechaNacimienoDateEdit->date());

    t_user->commit(0);
    emit updated(t_user);
    close();
}

void wUser::closed()
{
    if(toAdd) delete t_user;
    close();
}
