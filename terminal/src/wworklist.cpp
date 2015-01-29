#include "wworklist.h"
#include "ui_wworklist.h"
#include "printobject.h"

wWorkList::wWorkList(QWidget *parent) :
    QWidget(parent),
    _title(""),
    _work_lister(mainWidget::currentBusiness()),
    ui(new Ui::wWorkList)
{
    ui->setupUi(this);
    ui->desdeDateTimeEdit->setDateTime(QDateTime::currentDateTime().addYears(-1));
    ui->hastaDateTimeEdit->setDateTime(QDateTime::currentDateTime().addYears(1));
    connect(ui->searchButton, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->printButton, SIGNAL(clicked()), this, SLOT(print()));
}

wWorkList::~wWorkList()
{
    delete ui;
}

void wWorkList::search()
{
    if(ui->anillandoCheckBox->isChecked()) _work_lister.addState(workorder::Anillando);
    else _work_lister.delState(workorder::Anillando);

    if(ui->recibidoCheckBox->isChecked()) _work_lister.addState(workorder::Waiting);
    else _work_lister.delState(workorder::Waiting);

    if(ui->fotocopiandoCheckBox->isChecked()) _work_lister.addState(workorder::Fotocopiando);
    else _work_lister.delState(workorder::Fotocopiando);

    if(ui->terminadoCheckBox->isChecked()) _work_lister.addState(workorder::Finished);
    else _work_lister.delState(workorder::Finished);

    if(ui->entregadoCheckBox->isChecked()) _work_lister.addState(workorder::Delivered);
    else _work_lister.delState(workorder::Delivered);

    if(ui->recicladoCheckBox->isChecked()) _work_lister.addState(workorder::Recycled);
    else _work_lister.delState(workorder::Recycled);

    if(ui->clientCheckBox->isChecked()){
        _work_lister.setClientName(ui->searchLineEdit->text());
    }else{
        _work_lister.setClientName("");
    }

    if(ui->descriptionCheckBox->isChecked()) _work_lister.setDescriptionName(ui->descriptionCheckBox->text());
    else _work_lister.setDescriptionName("");

    _work_lister.setShowByLista(true);
    _work_lister.setShowLista(ui->listaCheckBox->isChecked());

    _work_lister.setFromDate(ui->desdeDateTimeEdit->dateTime());
    _work_lister.setToDate(ui->hastaDateTimeEdit->dateTime());
    qDebug() << "query begin";
    _work_lister.query();
    qDebug() << "query end";
    ui->tableWidget->clear();

    ui->tableWidget->setRowCount(_work_lister.count());
    ui->tableWidget->setColumnCount(_work_lister.columnCount());
    workorder w;
    QStringList names;
    names << "id";
    for(int i = 0; i < w.fieldsCount(); i++)
        names << QString("%1").arg(w.fieldName(i));
    ui->tableWidget->setHorizontalHeaderLabels(names);
    QList<QTableWidgetItem*> row;
    int current_row = 0;
    for(current_row = 0; current_row < _work_lister.count(); current_row++){
        //qDebug() << current_row << " item: " << _work_lister.itemAt(current_row).internalID();
        row = _work_lister.getTableRow(_work_lister.itemAt(current_row));
        for(int i = 0; i < row.count(); i++){
            ui->tableWidget->setItem(current_row, i, row.at(i));
        };
    };
    ui->tableWidget->resizeColumnsToContents();    
}

void wWorkList::print(QString title = "")
{
    printObject::instance()->printTable(ui->tableWidget, title.isEmpty() ? _title : title);
}

void wWorkList::print()
{
     printObject::instance()->printTable(ui->tableWidget, _title);
}

void wWorkList::hideFilter()
{
    ui->filterGroupBox->setVisible(false);

}

void wWorkList::showFilter()
{
    ui->filterGroupBox->setVisible(true);
}
