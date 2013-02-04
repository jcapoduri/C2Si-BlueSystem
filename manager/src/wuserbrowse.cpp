#include "wuserbrowse.h"
#include "ui_wuserbrowse.h"
#include "connection.h"
#include "mainwindow.h"
#include "wuser.h"

wUserBrowse::wUserBrowse(bool toSel, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wUserBrowse),
    model(new QSqlTableModel(0, nd::connection::maindb()))
{
    ui->setupUi(this);
    if(toSel){
        setWindowTitle("Seleccione un Usuario");
        ui->addButton->setVisible(false);
        ui->delButton->setVisible(false);
        ui->modButton->setVisible(false);
    }else{
        setWindowTitle("Usuarios");
        ui->selButton->setVisible(false);
    };

    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(add()));
    connect(ui->modButton, SIGNAL(clicked()), this, SLOT(mod()));
    connect(ui->delButton, SIGNAL(clicked()), this, SLOT(del()));
    connect(ui->selButton, SIGNAL(clicked()), this, SLOT(select()));

    model->setTable("users");
    ui->tableView->setModel(model);

    refresh();

    ui->tableView->setModel(model);

    //connect()
}

wUserBrowse::~wUserBrowse()
{
    delete ui;
}

void wUserBrowse::add()
{
    wUser *form = new wUser();
    form->setAttribute(Qt::WA_DeleteOnClose);
    connect(form, SIGNAL(destroyed()), this, SLOT(refresh()));
    MainWindow::instance()->showForm(form);
}

void wUserBrowse::mod()
{
    QModelIndexList list = ui->tableView->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        user*   u = new user(list.at(0).data().toInt());
        u->update();
        wUser *form = new wUser(u);
        form->setAttribute(Qt::WA_DeleteOnClose);
        MainWindow::instance()->showForm(form);
        connect(form, SIGNAL(destroyed()), this, SLOT(refresh()));
    };
}

void wUserBrowse::del()
{
    QModelIndexList list = ui->tableView->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        user*   u = new user(list.at(0).data().toInt());
        u->erase(0);
        /*wUser *form = new wUser(u);
        form->setAttribute(Qt::WA_DeleteOnClose);
        MainWindow::instance()->showForm(form);
        connect(form, SIGNAL(destroyed()), this, SLOT(refresh()));*/
        refresh();
    };
}

void wUserBrowse::refresh()
{
    model->select();
}

void wUserBrowse::select()
{
    QModelIndexList list = ui->tableView->selectionModel()->selectedRows(0);
    if(!list.isEmpty()){
        user* u = new user(list.at(0).data().toInt());
        u->update();
        userSelected(u);
        /*wUser *form = new wUser(new user(list.at(0).data().toInt()));
        form->setAttribute(Qt::WA_DeleteOnClose);
        MainWindow::instance()->showForm(form);
        connect(form, SIGNAL(destroyed()), this, SLOT(refresh()));*/
    };
}
