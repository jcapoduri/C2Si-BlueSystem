#include "wuserlist.h"
#include "ui_wuserlist.h"

wUserList::wUserList(user *usr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wUserList)
{
    ui->setupUi(this);
    t_user = usr;
    //load users
    refreshUsers();
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(close()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(kickUsers()));
}

wUserList::~wUserList()
{
    delete ui;
}

void wUserList::kickUsers()
{
    QModelIndexList list = ui->listWidget->selectionModel()->selectedRows(0);
    QList<user*> toKick;
    QModelIndex idx;
    user* u;
    foreach (idx, list) {
        u = mainWidget::instance()->t_users.at(idx.row());
        if(u != t_user) toKick << u;
    };

    foreach(u, toKick) mainWidget::instance()->logoutUser(u);

    refreshUsers();
}

void wUserList::refreshUsers()
{
    user *u;
    ui->listWidget->clear();
    foreach (u, mainWidget::instance()->t_users) {
        ui->listWidget->addItem(new QListWidgetItem(QString("%1 (%2, %3)").arg(u->username()).arg(u->lastname()).arg(u->name())));
    };
}
