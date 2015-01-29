#include "woptiondialog.h"
#include "ui_woptiondialog.h"
#include "connection.h"
#include "db.h"

wOptionDialog::wOptionDialog(QWidget *parent) :
    QDialog(parent),
    sets(new QSettings( tr("config.ini"), QSettings::IniFormat)),
    ui(new Ui::wOptionDialog)
{
    ui->setupUi(this);
    t_business = nd::db::select<business>().all();

    for(int i = 0; i < t_business.count(); i++){
        ui->localComboBox->addItem(t_business[i].name(), t_business[i].internalID());
    };

    sets->beginGroup("General");
    int _curr = sets->value("thisBusiness", 1).toInt();
    ui->localComboBox->setCurrentIndex(ui->localComboBox->findData(_curr));

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(save()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(cancel()));
}

wOptionDialog::~wOptionDialog()
{
    delete ui;
    delete sets;
}

void wOptionDialog::save()
{
    sets->setValue("thisBusiness", ui->localComboBox->itemData(ui->localComboBox->currentIndex()).toInt());
    accept();
}

void wOptionDialog::cancel()
{
    reject();
}
