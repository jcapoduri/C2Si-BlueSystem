#include "wworklist.h"
#include "ui_wworklist.h"
#include "printobject.h"
#include "wjob.h"
#include "logindialog.h"

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
    connect(ui->tableWidget, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(openWorkorder(QModelIndex)));
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)), this, SLOT(openWorkorder(int, int)));
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

    if(ui->descriptionCheckBox->isChecked()) {
        _work_lister.setDescriptionName(ui->searchLineEdit->text());
    } else {
        _work_lister.setDescriptionName("");
    };

    _work_lister.setShowByLista(true);
    _work_lister.setShowLista(ui->listaCheckBox->isChecked());

    _work_lister.setFromDate(ui->desdeDateTimeEdit->dateTime());
    _work_lister.setToDate(ui->hastaDateTimeEdit->dateTime());
    qDebug() << "query begin";
    _work_lister.query();
    qDebug() << "query end";
    ui->tableWidget->clear();

    QStringList headers = _work_lister.getShortTableRowHeaders();
    ui->tableWidget->setRowCount(_work_lister.count());
    ui->tableWidget->setColumnCount(headers.count());

    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QList<QTableWidgetItem*> row;
    int current_row = 0;
    for(current_row = 0; current_row < _work_lister.count(); current_row++){
        row = _work_lister.getShortTableRow(_work_lister.itemAt(current_row));
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

void wWorkList::openWorkorder(QModelIndex &index)
{
    //wListWorkorder* ww = dynamic_cast<wListWorkorder*>(sender());
    QModelIndex number = index.sibling(index.row(), 0);
    openWorkorder(number.data().toLongLong());
}

void wWorkList::openWorkorder(int row, int column)
{
    quint16 workOrderId = this->ui->tableWidget->item(row, 0)->data(Qt::DisplayRole).toLongLong();
    openWorkorder(workOrderId);
}

void wWorkList::hideFilter()
{
    ui->filterGroupBox->setVisible(false);

}

void wWorkList::showFilter()
{
    ui->filterGroupBox->setVisible(true);
}

void wWorkList::openWorkorder(quint64 id)
{
    workorder* selectedWorkOrder = new workorder(id);
    job* currentJob = job::fromWorkorder(selectedWorkOrder);
    user* usr;

    if(currentJob != 0){
        usr = loginDialog::askUserSignature();
        if (usr == 0) return;
        wJob *form = new wJob(usr, currentJob);
        form->setWindowModality(Qt::ApplicationModal);
        form->setAttribute(Qt::WA_DeleteOnClose);
        form->showMaximized();
    };
}
