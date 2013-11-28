#include <QMessageBox>
#include <QInputDialog>
#include "uiuserpanel.h"
#include "uijobwidget.h"
#include "ui_wuserpanel.h"


uiUserPanel::uiUserPanel(QJsonObject &bus, QJsonObject &usr, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uiUserPanel)
{
    business = bus;
    user = usr;
    ui->setupUi(this);

    setWindowTitle(QString("User: %1 - Panel de Control").arg(usr.value("name").toString()));

    connect(ui->newJobButton, SIGNAL(pressed()), this, SLOT(newJob()));
    connect(ui->searchJobButton, SIGNAL(pressed()), this, SLOT(searchJob()));
    connect(ui->logoutButton, SIGNAL(pressed()), this, SLOT(logout()));
    connect(ui->viewJobButton, SIGNAL(pressed()), this, SLOT(openJob()));
    connect(ui->configButton, SIGNAL(pressed()), this, SLOT(config()));

    connect(ui->closeButton, SIGNAL(pressed()), this, SLOT(close()));
}

uiUserPanel::~uiUserPanel()
{
    delete ui;
}

void uiUserPanel::newJob()
{
    uiJobWidget* widget = new uiJobWidget();
    widget->setAttribute(Qt::WA_DeleteOnClose);
    widget->setWindowModality(Qt::ApplicationModal);
    widget->show();
}

void uiUserPanel::openJob()
{
    bool ok;
    QJsonObject j;
    QString code = QInputDialog::getText(this, tr("Ingrese Numero de Orden:"), tr("orden: "), QLineEdit::Normal, "", &ok);
    if(!ok) return;
    QStringList codes = code.split("-");

    if (business.value("id").toString() == codes.at(0)) {
        //load job

        /*if(){
            //printObject::instance()->printJob(j);
            uiJobWidget *form = uiJobWidget wJob(user, j);
            form->setWindowModality(Qt::ApplicationModal);
            form->setAttribute(Qt::WA_DeleteOnClose);
            form->showMaximized();
        }else{
            QMessageBox::warning(this, tr("Advertencia"), tr("Este trabajo no existe"), QMessageBox::Ok);
        };*/
    }else{
        QMessageBox::warning(this, tr("Advertencia"), tr("Este trabajo no pertenece a este negocio"), QMessageBox::Ok);
    };

    uiJobWidget* widget = new uiJobWidget();
    widget->setAttribute(Qt::WA_DeleteOnClose);
    widget->setWindowModality(Qt::ApplicationModal);
    widget->show();
}

void uiUserPanel::searchJob()
{
    uiJobWidget* widget = new uiJobWidget();
    widget->setAttribute(Qt::WA_DeleteOnClose);
    widget->setWindowModality(Qt::ApplicationModal);
    widget->show();
}

void uiUserPanel::logout()
{
    emit userLoggout(user);
}

void uiUserPanel::config()
{
}
