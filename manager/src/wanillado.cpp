#include "wanillado.h"
#include "ui_wanillado.h"
#include "mainwindow.h"

wanillado::wanillado(anillado *an, QWidget *parent) :
    QDialog(parent),
    toAdd(false),
    ui(new Ui::wanillado)
{
    ui->setupUi(this);
    t_anillado = an;
    if(t_anillado == 0){
        toAdd = true;
        t_anillado = new anillado();
    }else{
        //take data to ui
        ui->nombreLineEdit->setText(t_anillado->name());
        ui->costoDoubleSpinBox->setValue(t_anillado->cost());
    };

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(save()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(cancel()));
}

wanillado::~wanillado()
{
    delete ui;
}

void wanillado::save()
{
    t_anillado->setCost(ui->costoDoubleSpinBox->value());
    t_anillado->setName(ui->nombreLineEdit->text());

    t_anillado->commit(MainWindow::currentUser()->internalID());

    emit anilladoAdded(t_anillado);
}

void wanillado::cancel()
{
    if(toAdd) delete t_anillado;
    close();
}
