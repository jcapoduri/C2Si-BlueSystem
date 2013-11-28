#include "uiworkordertab.h"
#include "global_scope.h"
#include "ui_wworkorder.h"
#include <QDebug>

uiWorkorderTab::uiWorkorderTab(QJsonObject *obj, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wworkorder)
{
    ui->setupUi(this);
    order = obj;

    ui->estadoComboBox->addItem("Recibido", uiWorkorderTab::Waiting);
    ui->estadoComboBox->addItem("Fotocopiando", uiWorkorderTab::Fotocopiando);
    ui->estadoComboBox->addItem("Anillando", uiWorkorderTab::Anillando);
    ui->estadoComboBox->addItem("Terminado", uiWorkorderTab::Finished);
    ui->estadoComboBox->addItem("Entregado", uiWorkorderTab::Delivered);
    ui->estadoComboBox->addItem("Reciclado", uiWorkorderTab::Recycled);

    if (order->isEmpty()) {
        //order = *(app->createObject("workorder"));
        qDebug() << order;
    } else {
        fromJson();
    };

    refreshPages();
    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(addPages()));
    connect(ui->delButton, SIGNAL(clicked()), this, SLOT(delPages()));
    connect(ui->deleteButton, SIGNAL(clicked()), this, SLOT(deleteMe()));

    connect(ui->simpleFazSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->doubleFazSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprSimpleFazSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprDoubleFazSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprColorSFSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprColorDFSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->colorDFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->colorSFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));

    connect(ui->costoAnilladoDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->seADoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->costoDFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->costoSFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprSFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprDFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->colorSFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->colorDFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
}

uiWorkorderTab::~uiWorkorderTab()
{
    delete ui;
}

void uiWorkorderTab::toJson()
{
    order["doComplete"] = ui->completeYesButton->isChecked();
    order["withRinging"] = ui->anilladoGroupBox->isChecked();
    order["state"] = ui->estadoComboBox->currentIndex();
    if(ui->superiorRadioButton->isChecked()) order["anilladoHowTo"] = uiWorkorderTab::Superior;
    if(ui->leftRadioButton->isChecked()) order["anilladoHowTo"] = uiWorkorderTab::Lateral;
    if(ui->bottomButton->isChecked()) order["anilladoHowTo"] = uiWorkorderTab::Inferior;

    //order[""]
}

void uiWorkorderTab::fromJson()
{
    ui->completeYesButton->setChecked(order->value("doComplete").toBool());
    ui->completeNoButton->setChecked(!order->value("doComplete").toBool());
    ui->anilladoGroupBox->setChecked(order->value("withRinging").toBool());
    ui->estadoComboBox->setCurrentIndex(ui->estadoComboBox->findData(order->value("state").toString().toInt()));

    if(order->value("anilladoHowTo").toString().toInt() == uiWorkorderTab::Superior) ui->superiorRadioButton->setChecked(true);
    if(order->value("anilladoHowTo").toString().toInt() == uiWorkorderTab::Lateral) ui->leftRadioButton->setChecked(true);
    if(order->value("anilladoHowTo").toString().toInt() == uiWorkorderTab::Inferior) ui->bottomButton->setChecked(true);

    //cantidades
    ui->simpleFazSpinBox->setValue(order->value("simplefaz").toString().toDouble());
    ui->doubleFazSpinBox->setValue(order->value("doublefaz").toString().toDouble());
    ui->imprSimpleFazSpinBox->setValue(order->value("isimplefaz").toString().toDouble());
    ui->imprDoubleFazSpinBox->setValue(order->value("idoublefaz").toString().toDouble());
    ui->copiaColorSFSpinBox->setValue(order->value("csimplefaz").toString().toDouble());
    ui->copiaColorDFSpinBox->setValue(order->value("cdoublefaz").toString().toDouble());
    ui->imprColorSFSpinBox->setValue(order->value("icsimplefaz").toString().toDouble());
    ui->imprColorDFSpinBox->setValue(order->value("icdoublefaz").toString().toDouble());

    //precios
    ui->costoSFDoubleSpinBox->setValue(order->value("simplefaztotal").toString().toDouble());
    ui->costoDFDoubleSpinBox->setValue(order->value("doublefaztotal").toString().toDouble());
    ui->imprSFDoubleSpinBox->setValue(order->value("isimplefaztotal").toString().toDouble());
    ui->imprDFDoubleSpinBox->setValue(order->value("idoublefaztotal").toString().toDouble());
    ui->copiaColorSFDoubleSpinBox->setValue(order->value("csimplefaztotal").toString().toDouble());
    ui->copiaColorDFDoubleSpinBox->setValue(order->value("cdoublefaztotal").toString().toDouble());
    ui->colorSFDoubleSpinBox->setValue(order->value("icsimplefaztotal").toString().toDouble());
    ui->colorDFDoubleSpinBox->setValue(order->value("icdoublefaztotal").toString().toDouble());

    ui->seADoubleSpinBox->setValue(order->value("senna").toString().toDouble());
    ui->tOTALDoubleSpinBox->setValue(order->value("total").toString().toDouble());
    ui->costoAnilladoDoubleSpinBox->setValue(order->value("anillado").toString().toDouble());

    ui->nroJuegosSpinBox->setValue(order->value("copies").toString().toDouble());
    ui->nombreLineEdit->setText(order->value("description").toString());
    ui->observationTextEdit->setPlainText(order->value("observations").toString());
    //setHowTo();
    switch(order->value("howto").toString().toInt()){
        case workorder::TwoinOneDF:
            ui->d2En1DFRadioButton->setChecked(true);
            break;
        case workorder::TwoinOneSF:
            ui->d2En1SFRadioButton->setChecked(true);
            break;
        case workorder::HHDF:
            ui->hHDFRadioButton->setChecked(true);
            break;
        case workorder::HHSF:
            ui->hHSFRadioButton->setChecked(true);
            break;
        case workorder::toDF:
            ui->pasarDFRadioButton->setChecked(true);
            break;
        case workorder::toSF:
            ui->pasarSFRadioButton->setChecked(true);
            break;
        case workorder::likeThat:
            ui->comoEstaRadioButton->setChecked(true);
            break;
    };
    ui->ignoreCheckBox->setChecked(order->value("ignore").toBool());
    ui->outOfOrderSpinBox->setValue(order->value("outoforder").toString().toInt());
}

void uiWorkorderTab::refreshPages()
{
}

void uiWorkorderTab::updateCost()
{
}

void uiWorkorderTab::deleteMe()
{
}

