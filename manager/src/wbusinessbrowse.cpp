#include "wbusinessbrowse.h"
#include "ui_wbusinessbrowse.h"
#include "connection.h"
#include "mainwindow.h"

wBusinessBrowse::wBusinessBrowse(bool toSel, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBusinessBrowse),
    businessModel(new QSqlTableModel(0, nd::connection::maindb()))
{
    ui->setupUi(this);
    if(toSel){
        setWindowTitle("Seleccione un Negocio");
        ui->addButton->setVisible(false);
        ui->delButton->setVisible(false);
        ui->modButton->setVisible(false);
    }else{
        setWindowTitle("Negocios");
        ui->selButton->setVisible(false);
    };
    businessModel->setTable("business");
    ui->tableView->setModel(businessModel);

    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(add()));
    connect(ui->modButton, SIGNAL(clicked()), this, SLOT(mod()));
    connect(ui->delButton, SIGNAL(clicked()), this, SLOT(del()));
    connect(ui->selButton, SIGNAL(clicked()), this, SLOT(sel()));

    refresh();
}

wBusinessBrowse::~wBusinessBrowse()
{    
    delete ui;
    delete businessModel;
}

void wBusinessBrowse::del()
{
}

void wBusinessBrowse::add()
{
    wBusiness *form = new wBusiness();
    form->setAttribute(Qt::WA_DeleteOnClose);
    connect(form, SIGNAL(destroyed()), this, SLOT(refresh()));
    MainWindow::instance()->showForm(form);
}

void wBusinessBrowse::mod()
{
    QModelIndexList list = ui->tableView->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        business *b = new business(list.at(0).data().toInt());
        b->update();
        wBusiness *form = new wBusiness(b);
        form->setAttribute(Qt::WA_DeleteOnClose);
        MainWindow::instance()->showForm(form);
        connect(form, SIGNAL(destroyed()), this, SLOT(refresh()));
    };
}

void wBusinessBrowse::selected()
{
    QModelIndexList list = ui->tableView->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        business *b = new business(list.at(0).data().toInt());
        b->update();
        businessSelected(b);
        close();
    };
}

void wBusinessBrowse::refresh()
{
    businessModel->select();
}
