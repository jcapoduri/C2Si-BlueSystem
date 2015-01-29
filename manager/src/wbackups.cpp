
#include "wbackups.h"
#include "wbackupdialog.h"
#include "ui_wbackups.h"

wBackups::wBackups(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBackups)
{
    ui->setupUi(this);
    t_folder = "backups/";
    connect(ui->createButton, SIGNAL(clicked()), this, SLOT(createBk()));
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteBk()));
    connect(ui->applyButton, SIGNAL(clicked()), this, SLOT(applyBk()));
    refreshBk();
}

wBackups::~wBackups()
{
    delete ui;
}

void wBackups::createBk()
{
    wBackupDialog *dlg = new wBackupDialog();
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->show();
    connect(dlg, SIGNAL(destroyed()), this, SLOT(refreshBk()));
}

void wBackups::applyBk()
{
    QModelIndexList _list = ui->tableWidget->selectionModel()->selectedRows(0);
    if(_list.isEmpty()) return;
    QString _file_name = _list.at(0).data().toString();

    if(QMessageBox::warning(this, tr("Restaurar Back-up"), QString("Esta seguro de restaurar el backup %1?").arg(_file_name), QMessageBox::Yes | QMessageBox::No) == QMessageBox::No){
        return;
    };

    QMessageBox::warning(this, tr("Restaurar Back-up"), QString("No se pudo restaurar el backup %1. Llame al proveedor del sistema").arg(_file_name), QMessageBox::Ok);

}

void wBackups::deleteBk()
{
    QModelIndexList _list = ui->tableWidget->selectionModel()->selectedRows(0);
    if(_list.isEmpty()) return;
    QString _file_name = _list.at(0).data().toString();

    if(QMessageBox::warning(this, tr("Borrar Back-up"), QString("Esta seguro de borrar el backup %1?").arg(_file_name), QMessageBox::Yes | QMessageBox::No) == QMessageBox::No){
        return;
    };

    QString _txt = "";
    if(QFile::remove(t_folder + _file_name)){
        _txt = "Backup borrado exitosamente";
    }else{
        _txt = "El Backup no pudo ser borrado, intentelo nuevamente mas tarde";
    };
    QMessageBox::warning(this, tr("Borrado de Backup"), _txt, QMessageBox::Ok);
    refreshBk();
}

void wBackups::refreshBk()
{
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Backups");
    ui->tableWidget->setColumnCount(1);
    QDir dir(t_folder);
    dir.setFilter(QDir::Files);
    dir.setSorting(QDir::Time);
    dir.setNameFilters(QStringList() << "*.sql");
    QStringList _list = dir.entryList(QDir::Files | QDir::Readable, QDir::Time);
    QString _str;
    int i = 0;
    ui->tableWidget->setRowCount(_list.count());
    foreach (_str, _list) {
        ui->tableWidget->setItem(i++, 0, new QTableWidgetItem(_str));
    }

}
