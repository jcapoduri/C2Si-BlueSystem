#include "wbusiness.h"
#include "ui_wbusiness.h"
#include "wuserbrowse.h"
#include "wanillado.h"
#include "mainwindow.h"

wBusiness::wBusiness(business *bus, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBusiness)
{
    ui->setupUi(this);
    toAdd = false;
    t_business = bus;
    if(t_business == 0){
        setWindowTitle("Agregar Negocio");
        t_business = new business();
        toAdd = true;
    }else{
        setWindowTitle("Modificar Negocio");
        ui->direcciNLineEdit->setText(t_business->address());
        ui->emailLineEdit->setText(t_business->email());
        ui->nombreLineEdit->setText(t_business->name());
        ui->dueOLineEdit->setText(t_business->owner());
        ui->telefonoLineEdit->setText(t_business->telephone());

        ui->simpleFazDoubleSpinBox->setValue(t_business->sfvalue());
        ui->dobleFazDoubleSpinBox->setValue(t_business->dfvalue());
        ui->impSimpleFazDoubleSpinBox->setValue(t_business->impsfvalue());
        ui->impDoubleFazDoubleSpinBox->setValue(t_business->impdfvalue());
        ui->colorImpSimpleFazDoubleSpinBox->setValue(t_business->coloursfvalue());
        ui->colorImpDoblleFazDoubleSpinBox->setValue(t_business->colourdfvalue());
        ui->copiaColDobleFazDoubleSpinBox->setValue(t_business->impcolordfvalue());
        ui->copiaColSimpleFazDoubleSpinBox->setValue(t_business->impcolorsfvalue());
    };

    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(addUser()));
    connect(ui->delButton, SIGNAL(clicked()), this, SLOT(delUser()));

    connect(ui->anilladoAddButton, SIGNAL(clicked()), this, SLOT(addAnillado()));
    connect(ui->anilladoDelButton, SIGNAL(clicked()), this, SLOT(delAnillado()));

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(saved()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(closed()));
    refresh();
}

wBusiness::~wBusiness()
{
    delete ui;
}

void wBusiness::addUser()
{
    wUserBrowse *form = new wUserBrowse(true);
    form->setAttribute(Qt::WA_DeleteOnClose);
    connect(form, SIGNAL(userSelected(user*)), this, SLOT(userAdded(user*)));
    form->show();
}

void wBusiness::delUser()
{    
    t_business->delUser(t_business->userAt(ui->listWidget->currentIndex().row()));
    refresh();
}

void wBusiness::userAdded(user *u)
{
    t_business->addUser(u);
    refresh();
}

void wBusiness::addAnillado()
{
    wanillado *form = new wanillado();
    form->setAttribute(Qt::WA_DeleteOnClose);
    connect(form, SIGNAL(anilladoAdded(anillado*)), this, SLOT(anilladoAdded(anillado*)));
    form->show();
}

void wBusiness::delAnillado()
{
    t_business->delanillado(t_business->anilladoAt(ui->anilladoListWidget->currentIndex().row()));
    refresh();
}

void wBusiness::anilladoAdded(anillado *an)
{
    qDebug() << an;
    qDebug() << "anillado added" << t_business->addanillado(an);
    refresh();
}

void wBusiness::saved()
{
    t_business->setAddress(ui->direcciNLineEdit->text());
    t_business->setEmail(ui->emailLineEdit->text());
    t_business->setName(ui->nombreLineEdit->text());
    t_business->setOwner(ui->dueOLineEdit->text());
    t_business->setTelephone(ui->telefonoLineEdit->text());
    t_business->setSfvalue(ui->simpleFazDoubleSpinBox->value());
    t_business->setDfvalue(ui->dobleFazDoubleSpinBox->value());
    t_business->setImpsfvalue(ui->impSimpleFazDoubleSpinBox->value());
    t_business->setImpdfvalue(ui->impDoubleFazDoubleSpinBox->value());
    t_business->setColoursfvalue(ui->colorImpSimpleFazDoubleSpinBox->value());
    t_business->setColourdfvalue(ui->colorImpDoblleFazDoubleSpinBox->value());

    t_business->commit(MainWindow::currentUser()->internalID());
    emit updated(t_business);
    close();
}

void wBusiness::closed()
{
    if(toAdd) delete t_business;
    close();
}

void wBusiness::refresh()
{
    ui->listWidget->clear();
    ui->anilladoListWidget->clear();
    int i;
    user* u;
    anillado *a;

    for(i = 0; i < t_business->usersCount(); i++){
        u = t_business->userAt(i);
        ui->listWidget->addItem(QString("%1 (%2, %3)").arg(u->username()).arg(u->lastname()).arg(u->name()));
    };
    qDebug() << "business anillado count:" << t_business->anilladoCount();
    for(i = 0; i < t_business->anilladoCount(); i++){
        a = t_business->anilladoAt(i);
        ui->anilladoListWidget->addItem(QString("%1 %2").arg(a->name()).arg(a->cost()));
    };
}
