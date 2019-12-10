#include "wuserlogbrowser.h"
#include "ui_wuserlogbrowser.h"
#include "db.h"
#include "printobject.h"

wUserLogBrowser::wUserLogBrowser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wUserLogBrowser)
{
    ui->setupUi(this);

    t_business = nd::db::select<business>().all();
    ui->dateEdit->setDate(QDate::currentDate());
    ui->businessComboBox->addItem("[Todos]");
    for(int i = 0; i < t_business.count(); i++){
        ui->businessComboBox->addItem(t_business[i].name());
    };

    connect(ui->businessComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(comboChanged()));
    connect(ui->dateEdit, SIGNAL(dateChanged(QDate)), this, SLOT(comboChanged()));
    connect(ui->employeeTableWidget, SIGNAL(clicked(QModelIndex)), this, SLOT(refreshEmployeeLog()));
    connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->printButton, SIGNAL(clicked()), this, SLOT(print()));
    connect(ui->printDetailButton, SIGNAL(clicked()), this, SLOT(printDetail()));
}

wUserLogBrowser::~wUserLogBrowser()
{
    delete ui;
}

void wUserLogBrowser::comboChanged()
{
    int _item = ui->businessComboBox->currentIndex();
    if(_item == 0){
        t_current = 0;
    }else{
        t_current = &(t_business[_item - 1]);
    };
    refreshEmployee();
}

void wUserLogBrowser::refreshEmployee()
{
    //clear table
    ui->employeeTableWidget->clear();
    ui->employeeTableWidget->setColumnCount(0);
    ui->employeeTableWidget->setRowCount(0);
    ui->employeeTableWidget->setColumnCount(3);
    ui->employeeTableWidget->setHorizontalHeaderLabels(QStringList() << "id" << "Empleado" << "Horas Trabajadas");    

    //search for user info
    QString _where, _query;
    _where = QString("(initstamp >= '%1' AND endstamp <= '%2')").arg(ui->dateEdit->date().toString("yyyy-MM")).arg(ui->dateEdit->date().addMonths(1).toString("yyyy-MM"));
    if(t_current != 0){
        _where += QString(" AND (userstamp.business = %1)").arg(t_current->internalID());
    };
    _query = QString("SELECT users.id, CONCAT(name, ', ', lastname, '(', username , ')') as name, SUM(TIMEstampDIFF(MINUTE, initstamp, endstamp)) as q FROM userstamp JOIN users ON userstamp.user_id = users.id WHERE %1 GROUP BY userstamp.user_id;").arg(_where);
    QSqlQuery q = nd::connection::instance()->select(_query);

    //ui->employeeTableWidget->clear();
    int i = 0;
    while(q.next()){
        ui->employeeTableWidget->setRowCount(i + 1);
        ui->employeeTableWidget->setItem(i, 0, new QTableWidgetItem(q.record().field("id").value().toString()));
        ui->employeeTableWidget->setItem(i, 1, new QTableWidgetItem(q.record().field("name").value().toString()));
        //ui->employeeTableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(q.record().field("q").value().toInt() / 60.0)));
        ui->employeeTableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(q.record().field("q").value().toInt() / 60) + ":" + QString::number(q.record().field("q").value().toInt() % 60)));
        i++;
    };
    //ui->employeeTableWidget->hideColumn(0);
    ui->employeeTableWidget->resizeColumnsToContents();
    refreshEmployeeLog();
}

void wUserLogBrowser::refreshEmployeeLog()
{
    ui->detailTableWidget->clear();
    ui->detailTableWidget->setColumnCount(0);
    ui->detailTableWidget->setRowCount(0);
    ui->detailTableWidget->setColumnCount(4);
    ui->detailTableWidget->setHorizontalHeaderLabels(QStringList() << "Dia" << "Hora Inicio" << "Hora Fin" << "Horas Trabajadas");


    QModelIndexList _list = ui->employeeTableWidget->selectionModel()->selectedRows(0);
    if(_list.isEmpty()) return;
    qDebug() << _list.at(0).data();
    quint64 _id = _list.at(0).data().toInt();

    QString _where, _query;
    _where = QString("(initstamp >= '%1' AND endstamp <= '%2')").arg(ui->dateEdit->date().toString("yyyy-MM")).arg(ui->dateEdit->date().addMonths(1).toString("yyyy-MM"));
    _where += QString(" AND (user_id = %1)").arg(_id);
    if(t_current != 0){
        _where += QString(" AND (userstamp.business = %1)").arg(t_current->internalID());
    };

    _query = QString("SELECT DATE_FORMAT(initstamp, '%d-%m') as dia, DATE_FORMAT(initstamp, '%H:%i:%s') as i, DATE_FORMAT(endstamp, '%H:%i:%s') as e, TIMEstampDIFF(MINUTE, initstamp, endstamp) as f FROM userstamp WHERE %1").arg(_where);
    QSqlQuery q = nd::connection::instance()->select(_query);

   /*ui->detailTableWidget->clear();
    ui->detailTableWidget->setColumnCount(0);
    ui->detailTableWidget->setRowCount(0);
    ui->detailTableWidget->setHorizontalHeaderLabels(QStringList() << "Dia" << "Hora Inicio" << "Hora Fin");
    ui->detailTableWidget->setColumnCount(3);*/

    int i = 0;
    while(q.next()){
        ui->detailTableWidget->setRowCount(i+1);
        ui->detailTableWidget->setItem(i, 0, new QTableWidgetItem(q.record().field("dia").value().toString()));
        ui->detailTableWidget->setItem(i, 1, new QTableWidgetItem(q.record().field("i").value().toString()));
        ui->detailTableWidget->setItem(i, 2, new QTableWidgetItem(q.record().field("e").value().toString()));
        ui->detailTableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(q.record().field("f").value().toInt() / 60) + ":" + QString::number(q.record().field("f").value().toInt() % 60)));
        i++;
    };
    ui->detailTableWidget->resizeColumnsToContents();
}

void wUserLogBrowser::print()
{
    qDebug() << ui->employeeTableWidget->model();
    printObject::instance()->printModel(ui->employeeTableWidget->model(), QString("Detalle de Empleados al %1").arg(ui->dateEdit->date().toString("MMMM-aa")));
}

void wUserLogBrowser::printDetail()
{
    QModelIndexList _list = ui->employeeTableWidget->selectionModel()->selectedRows(1);
    if(_list.isEmpty()) return;
    QString _name = _list.at(0).data().toString();
    printObject::instance()->printModel(ui->detailTableWidget->model(), QString("Detalle del Empleado %1 al %2").arg(_name).arg(ui->dateEdit->date().toString("MMMM-aa")));
}
