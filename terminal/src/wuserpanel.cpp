#include "wuserpanel.h"
#include "ui_wuserpanel.h"
#include "mainwidget.h"
#include "wjob.h"
#include "printobject.h"
#include <QInputDialog>
#include <QMessageBox>
#include "wuserlist.h"
#include "woptions.h"

wUserPanel::wUserPanel(user *usr, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wUserPanel)
{
    ui->setupUi(this);
    t_user = usr;
    setWindowTitle(QString("Panel de Opciones::Usuario %1 (%2, %3)").arg(t_user->username()).arg(t_user->lastname()).arg(t_user->name()));
    connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->logoutButton, SIGNAL(clicked()), this, SLOT(logout()));

    connect(ui->searchJobButton, SIGNAL(clicked()), this, SLOT(searchJob()));
    connect(ui->viewJobButton, SIGNAL(clicked()), this, SLOT(checkJob()));
    connect(ui->newJobButton, SIGNAL(clicked()), this, SLOT(addJob()));
    connect(ui->configButton, SIGNAL(clicked()), this, SLOT(options()));

    if(!t_user->isAdmin()){
        ui->adminGroupBox->setEnabled(false);
        ui->adminGroupBox->setVisible(false);
    };
    connect(ui->usersButton, SIGNAL(clicked()), this, SLOT(manageUsers()));
}

wUserPanel::~wUserPanel()
{
    delete ui;
}

void wUserPanel::logout()
{
    mainWidget::instance()->logoutUser(t_user);
    close();
}

void wUserPanel::addJob()
{
    wJob *form = new wJob(t_user);
    form->setWindowModality(Qt::ApplicationModal);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->showMaximized();
}

void wUserPanel::checkJob()
{
    bool ok;
    QString code = QInputDialog::getText(this, tr("Ingrese Numero de Orden:"), tr("orden: "), QLineEdit::Normal, "", &ok);
    if(!ok) return;
    QStringList codes = code.split("-");
    if(codes.at(0).toInt() > 800){
        int business_id = 1000 - codes.at(0).toInt();
        if(mainWidget::currentBusiness()->internalID() == business_id){
            //magic number

        }else{
            QMessageBox::warning(this, tr("Advertencia"), tr("Este trabajo no pertenece a este negocio"), QMessageBox::Ok);
        };
    };

    if(mainWidget::currentBusiness()->internalID() == codes.at(0).toInt() && (codes.at(0).toInt() < 800)){
        job* j = new job(codes.at(1).toInt());
        if(j->update()){
            //printObject::instance()->printJob(j);
            wJob *form = new wJob(t_user, j);
            form->setWindowModality(Qt::ApplicationModal);
            form->setAttribute(Qt::WA_DeleteOnClose);
            form->showMaximized();
        }else{
            QMessageBox::warning(this, tr("Advertencia"), tr("Este trabajo no existe"), QMessageBox::Ok);
        };
    }else{
        QMessageBox::warning(this, tr("Advertencia"), tr("Este trabajo no pertenece a este negocio"), QMessageBox::Ok);
    };
}

void wUserPanel::searchJob()
{
    wSeachJob* form = new wSeachJob(t_user);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}

void wUserPanel::options()
{
    woptions *wdg = new woptions(this->t_user);
    wdg->setAttribute(Qt::WA_DeleteOnClose);
    wdg->setWindowModality(Qt::ApplicationModal);
    wdg->show();
}

void wUserPanel::manageUsers()
{
    wUserList* form = new wUserList(t_user);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);
    form->show();
}
