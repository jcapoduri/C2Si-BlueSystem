#include "wbooks.h"
#include "ui_wbooks.h"

wBooks::wBooks(business *bs, books *bk, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wBooks)
{
    ui->setupUi(this);
    //business* b = mainWidget::currentBusiness();
    anillado *a;
    for(int i = 0; i < bs->anilladoCount(); i++){
        a = bs->anilladoAt(i);
        ui->anilladoComboBox->addItem(a->name(), a->internalID());
    };

    t_book = bk;
    if(t_book == 0){
        setWindowTitle("Agregar Libro");
        t_book = new books();
    }else{
        setWindowTitle("Modificar Libro");
        ui->numeroSpinBox->setValue(t_book->number());
        ui->nombreLineEdit->setText(t_book->name());
        ui->simpleFazSpinBox->setValue(t_book->simpleFaz());
        ui->doubleFazSpinBox->setValue(t_book->doubleFaz());
        //ui->anilladoDoubleSpinBox->setValue(t_book->anillado());
        ui->anilladoComboBox->setCurrentIndex(ui->anilladoComboBox->findData(t_book->anillados()->internalID()));
    };

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(saved()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(closed()));

}

wBooks::~wBooks()
{
    delete ui;
}

void wBooks::closed()
{
    if(toAdd) delete t_book;
    close();
}

void wBooks::saved()
{
    anillado *a = new anillado(ui->anilladoComboBox->itemData(ui->anilladoComboBox->currentIndex()).toInt());
    t_book->setNumber(ui->numeroSpinBox->value());
    t_book->setName(ui->nombreLineEdit->text());
    t_book->setSimpleFaz(ui->simpleFazSpinBox->value());
    t_book->setDoubleFaz(ui->doubleFazSpinBox->value());
    t_book->setAnillado(a);
    //t_book->commit(0);
    emit updated(t_book);
    close();
}
