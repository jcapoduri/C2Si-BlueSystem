#include "wworkorder.h"
#include "wjob.h"
#include "ui_wworkorder.h"
#include "mainwidget.h"
#include "wworkorder_pages.h"

wworkorder::wworkorder(wJob *wjob, workorder *work, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wworkorder)
{
    ui->setupUi(this);
    t_wjob = wjob;
    t_workorder = work;
    ui->estadoComboBox->addItem("Recibido", workorder::Waiting);
    ui->estadoComboBox->addItem("Fotocopiando", workorder::Fotocopiando);
    ui->estadoComboBox->addItem("Anillando", workorder::Anillando);
    ui->estadoComboBox->addItem("Terminado", workorder::Finished);
    ui->estadoComboBox->addItem("Entregado", workorder::Delivered);
    ui->estadoComboBox->addItem("Reciclado", workorder::Recycled);

    if(t_workorder == 0){

    }else{
        ui->completeYesButton->setChecked(t_workorder->doComplete());
        ui->completeNoButton->setChecked(!t_workorder->doComplete());
        ui->anilladoGroupBox->setChecked(t_workorder->conAnillado() || t_workorder->conAbrochado());
        ui->estadoComboBox->setCurrentIndex(ui->estadoComboBox->findData(t_workorder->estado()));
        ui->abrochadoRadioButton->setChecked(t_workorder->conAbrochado());
        if(t_workorder->anilladoHowTo() == workorder::Superior) ui->superiorRadioButton->setChecked(true);
        if(t_workorder->anilladoHowTo() == workorder::Lateral) ui->leftRadioButton->setChecked(true);
        if(t_workorder->anilladoHowTo() == workorder::LateralDerecho) ui->rightRadioButton->setChecked(true);
        if(t_workorder->anilladoHowTo() == workorder::Inferior) ui->bottomButton->setChecked(true);
        //cantidades
        ui->simpleFazSpinBox->setValue(t_workorder->simpleFaz());
        ui->doubleFazSpinBox->setValue(t_workorder->doubleFaz());
        ui->imprSimpleFazSpinBox->setValue(t_workorder->isimpleFaz());
        ui->imprDoubleFazSpinBox->setValue(t_workorder->idoubleFaz());
        ui->imprColorSFSpinBox->setValue(t_workorder->csimpleFaz());
        ui->imprColorDFSpinBox->setValue(t_workorder->cdoubleFaz());
        //precios
        ui->costoSFDoubleSpinBox->setValue(t_workorder->simpleFazTotal());
        ui->costoDFDoubleSpinBox->setValue(t_workorder->doubleFazTotal());
        ui->imprSFDoubleSpinBox->setValue(t_workorder->isimpleFazTotal());
        ui->imprDFDoubleSpinBox->setValue(t_workorder->idoubleFazTotal());
        ui->colorSFDoubleSpinBox->setValue(t_workorder->csimpleFazTotal());
        ui->colorDFDoubleSpinBox->setValue(t_workorder->cdoubleFazTotal());

        ui->seADoubleSpinBox->setValue(t_workorder->senna());
        ui->tOTALDoubleSpinBox->setValue(t_workorder->total());
        ui->costoAnilladoDoubleSpinBox->setValue(t_workorder->anillado());

        ui->nroJuegosSpinBox->setValue(t_workorder->copies());
        ui->nombreLineEdit->setText(t_workorder->costumerName());
        ui->observationTextEdit->setPlainText(t_workorder->observations());
        setHowTo(t_workorder->howtoFlags());
        ui->ignoreCheckBox->setChecked(t_workorder->ignore());
        ui->outOfOrderSpinBox->setValue(t_workorder->outOfOrder());
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
    /*connect(ui->imprDFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));
    connect(ui->imprSFDoubleSpinBox, SIGNAL(editingFinished()), this, SLOT(updateCost()));*/
}

wworkorder::~wworkorder()
{
    delete ui;
}

void wworkorder::save()
{
    if(ui->superiorRadioButton->isChecked()) t_workorder->setAnilladoHowTo(workorder::Superior);
    if(ui->leftRadioButton->isChecked()) t_workorder->setAnilladoHowTo(workorder::Lateral);
    if(ui->bottomButton->isChecked()) t_workorder->setAnilladoHowTo(workorder::Inferior);
    if(ui->rightRadioButton->isChecked()) t_workorder->setAnilladoHowTo(workorder::LateralDerecho);


    //pasar todo el ui al work
    t_workorder->setBusiness(new business(* mainWidget::currentBusiness()));
    t_workorder->setDoComplete(ui->completeYesButton->isChecked());
    t_workorder->setCopies(ui->nroJuegosSpinBox->value());
    t_workorder->setEstado((workorder::State)(ui->estadoComboBox->itemData(ui->estadoComboBox->currentIndex(), Qt::UserRole).toInt()));
    t_workorder->setSenna(ui->seADoubleSpinBox->value());
    t_workorder->setHowTo(retrieveBestHowToState());
    t_workorder->setHowToFlags(retrieveHowTo());
    t_workorder->setConAnillado(ui->anilladoGroupBox->isChecked() && ui->anilladoRadioButton->isChecked());
    t_workorder->setTotal(ui->tOTALDoubleSpinBox->value());
    t_workorder->setAnillado(ui->costoAnilladoDoubleSpinBox->value());
    t_workorder->setConAbrochado(ui->anilladoGroupBox->isChecked() && ui->abrochadoCheckBox->isChecked());

    //cantidades
    t_workorder->setSimpleFaz(ui->simpleFazSpinBox->value());
    t_workorder->setDobleFaz(ui->doubleFazSpinBox->value());
    t_workorder->setISimpleFaz(ui->imprColorSFSpinBox->value());
    t_workorder->setIDobleFaz(ui->imprDoubleFazSpinBox->value());
    t_workorder->setCSimpleFaz(ui->imprColorSFSpinBox->value());
    t_workorder->setCDobleFaz(ui->imprColorDFSpinBox->value());
    //costos
    t_workorder->setSimpleFazTotal(ui->costoSFDoubleSpinBox->value());
    t_workorder->setDobleFazTotal(ui->costoDFDoubleSpinBox->value());
    t_workorder->setISimpleFazTotal(ui->imprSFDoubleSpinBox->value());
    t_workorder->setIDobleFazTotal(ui->imprDFDoubleSpinBox->value());
    t_workorder->setCSimpleFazTotal(ui->colorSFDoubleSpinBox->value());
    t_workorder->setCDobleFazTotal(ui->colorDFDoubleSpinBox->value());
    //resto
    t_workorder->setCostumerName(ui->nombreLineEdit->text());
    t_workorder->setObservation(ui->observationTextEdit->toPlainText());
    t_workorder->setIgnore(ui->ignoreCheckBox->isChecked());
    t_workorder->setOutOfOrder(ui->outOfOrderSpinBox->value());
    //t_workorder->commit(0);
    close();

}

void wworkorder::addPages()
{
    wworkorder_pages* dialog = new wworkorder_pages();
    connect(dialog, SIGNAL(pagesSaved(workorder_pages*)), this, SLOT(pagesAdded(workorder_pages*)));
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
}

void wworkorder::delPages()
{
    QModelIndexList list = ui->pagesTableWidget->selectionModel()->selectedRows(0);
    if(list.isEmpty()) return;

    QModelIndex data = list.at(0);
    t_workorder->removeWorkorderPagesAt(data.row());

    refreshPages();
}

void wworkorder::pagesAdded(workorder_pages *pages)
{
    t_workorder->addWorkorderPages(pages);
    refreshPages();
}

void wworkorder::deleteMe()
{
    if(QMessageBox::warning(this, tr("Advertencia!"), tr("Esta por borrar el trabajo actual, esta seguro de continuar?"), QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes){
        t_wjob->delWorks(t_workorder);
    };
}

void wworkorder::updateCost()
{
    ui->costoSFDoubleSpinBox->setValue(ui->simpleFazSpinBox->value() * mainWidget::currentBusiness()->sfvalue());
    ui->costoDFDoubleSpinBox->setValue(ui->doubleFazSpinBox->value() * mainWidget::currentBusiness()->dfvalue());
    ui->imprSFDoubleSpinBox->setValue(ui->imprSimpleFazSpinBox->value() * mainWidget::currentBusiness()->impsfvalue());
    ui->imprDFDoubleSpinBox->setValue(ui->imprDoubleFazSpinBox->value() * mainWidget::currentBusiness()->impdfvalue());
    ui->colorSFDoubleSpinBox->setValue(ui->imprColorSFSpinBox->value() * mainWidget::currentBusiness()->coloursfvalue());
    ui->colorDFDoubleSpinBox->setValue(ui->imprColorDFSpinBox->value() * mainWidget::currentBusiness()->colourdfvalue());

    double total = 0;
    total += ui->costoSFDoubleSpinBox->value() + ui->costoDFDoubleSpinBox->value();
    total += ui->imprSFDoubleSpinBox->value() + ui->imprDFDoubleSpinBox->value();
    total += ui->colorSFDoubleSpinBox->value() + ui->colorDFDoubleSpinBox->value();
    total += ui->costoAnilladoDoubleSpinBox->value();
    total -= ui->seADoubleSpinBox->value();
    ui->tOTALDoubleSpinBox->setValue(total * ui->nroJuegosSpinBox->value());

}

void wworkorder::setBookInfo(books *bk)
{
    if(bk == 0) return;
    ui->imprSimpleFazSpinBox->setValue(bk->simpleFaz());
    ui->imprDoubleFazSpinBox->setValue(bk->doubleFaz());
    //ui->costoAnilladoDoubleSpinBox->setValue(bk->anillado());
    updateCost();
}

void wworkorder::refreshPages()
{
    qDebug() << "refresh pages";
    ui->pagesTableWidget->clear();
    ui->pagesTableWidget->setHorizontalHeaderLabels(QStringList() << "Desde" << "Hasta");
    ui->pagesTableWidget->setColumnCount(2);
    int i;
    workorder_pages *p;
    for(i = 0; i < t_workorder->workorderPages(); i++){
        p = t_workorder->workorderPagesAt(i);
        ui->pagesTableWidget->setRowCount(i+1);
        //ui->listWidget->addItem(QString("%1 (%2, %3)").arg(u->username()).arg(u->lastname()).arg(u->name()));
        ui->pagesTableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(p->pagefrom())));
        ui->pagesTableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(p->pageto())));
    };
}


int wworkorder::retrieveHowTo()
{
    //TwoinOneDF, TwoinOneSF, toDF, toSF, HHDF, HHSF, likeThat}
    int flags = 0;
    if(ui->d2En1DFCheckBox->isChecked()) flags = flags | workorder::TwoinOneDF;
    if(ui->d2En1SFCheckBox->isChecked()) flags = flags | workorder::TwoinOneSF;
    if(ui->hHDFCheckBox->isChecked()) flags = flags | workorder::HHDF;
    if(ui->hHSFCheckBox->isChecked()) flags = flags | workorder::HHSF;
    if(ui->pasarDFCheckBox->isChecked()) flags = flags | workorder::toDF;
    if(ui->pasarSFCheckBox->isChecked()) flags = flags | workorder::toSF;
    if(ui->comoEstaCheckBox->isChecked()) flags = flags | workorder::likeThat;
    return flags;
}

workorder::HowTo wworkorder::retrieveBestHowToState()
{
    if(ui->d2En1DFCheckBox->isChecked()) return workorder::_TwoinOneDF;
    if(ui->d2En1SFCheckBox->isChecked()) return workorder::_TwoinOneSF;
    if(ui->hHDFCheckBox->isChecked()) return workorder::_HHDF;
    if(ui->hHSFCheckBox->isChecked()) return workorder::_HHSF;
    if(ui->pasarDFCheckBox->isChecked()) return workorder::_toDF;
    if(ui->pasarSFCheckBox->isChecked()) return workorder::_toSF;
    if(ui->comoEstaCheckBox->isChecked()) return workorder::_likeThat;
    return workorder::_likeThat;
}

void wworkorder::setHowTo(int value)
{
    //TwoinOneDF, TwoinOneSF, toDF, toSF, HHDF, HHSF, likeThat}
    int flags = value;
    if (flags == 0) {
        workorder::HowTo oldFlag = t_workorder->howto();
        ui->d2En1DFCheckBox->setChecked(oldFlag == workorder::_TwoinOneDF);
        ui->d2En1SFCheckBox->setChecked(oldFlag == workorder::_TwoinOneSF);
        ui->hHDFCheckBox->setChecked(oldFlag == workorder::_HHDF);
        ui->hHSFCheckBox->setChecked(oldFlag == workorder::_HHSF);
        ui->pasarDFCheckBox->setChecked(oldFlag == workorder::_toDF);
        ui->pasarSFCheckBox->setChecked(oldFlag == workorder::_toSF);
        ui->comoEstaCheckBox->setChecked(oldFlag == workorder::_likeThat);
    } else {
        ui->d2En1DFCheckBox->setChecked(flags & workorder::TwoinOneDF);
        ui->d2En1SFCheckBox->setChecked(flags & workorder::TwoinOneSF);
        ui->hHDFCheckBox->setChecked(flags & workorder::HHDF);
        ui->hHSFCheckBox->setChecked(flags & workorder::HHSF);
        ui->pasarDFCheckBox->setChecked(flags & workorder::toDF);
        ui->pasarSFCheckBox->setChecked(flags & workorder::toSF);
        ui->comoEstaCheckBox->setChecked(flags & workorder::likeThat);
    }
}

