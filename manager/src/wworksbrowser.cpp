#include "wworksbrowser.h"
#include "ui_wworksbrowser.h"
#include "printobject.h"
#include "printobject.h"

wWorksBrowser::wWorksBrowser(QWidget *parent) :
    QWidget(parent),
    t_model(new QSqlTableModel(this, nd::connection::maindb())),
    ui(new Ui::wWorksBrowser)  
{
    ui->setupUi(this);
    ui->hastaDateEdit->setDateTime(QDateTime::currentDateTime());
    ui->desdeTimeEdit->setDateTime(QDateTime::currentDateTime().addDays(-7));

    connect(ui->searchLineEdit, SIGNAL(editingFinished()), this, SLOT(filter()));
    connect(ui->doneCheckBox, SIGNAL(toggled(bool)), this, SLOT(filter()));
    connect(ui->deletedCheckBox, SIGNAL(toggled(bool)), this, SLOT(filter()));
    connect(ui->hastaDateEdit, SIGNAL(editingFinished()), this, SLOT(filter()));
    connect(ui->desdeTimeEdit, SIGNAL(editingFinished()), this, SLOT(filter()));
    connect(ui->printButton, SIGNAL(clicked()), this, SLOT(print()));

    setWindowTitle("Chequear trabajos");

    t_business = nd::db::select<business>().all();

    t_model->setTable("workorders");
    t_model->select();

    for(int i = 0; i < t_business.count(); i++){
        ui->businessComboBox->addItem(t_business[i].name());
    };

    connect(ui->businessComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(businessSelected()));

    ui->tableView->setModel(t_model);
    ui->tableView->hideColumn(0);
    ui->tableView->hideColumn(1);
    ui->tableView->hideColumn(2);
    ui->tableView->hideColumn(3);
    ui->tableView->hideColumn(4);
    ui->tableView->hideColumn(5);
    ui->tableView->hideColumn(6);
    ui->tableView->hideColumn(7);
    businessSelected();
    filter();

}

wWorksBrowser::~wWorksBrowser()
{
    delete ui;
}

void wWorksBrowser::filter()
{
    QStringList _where;
    if(!ui->searchLineEdit->text().isEmpty()) _where << QString("(costumername LIKE '%%1%' AND description LIKE '%%2%')").arg(ui->searchLineEdit->text()).arg(ui->searchLineEdit->text());
    _where << QString("(business = %1)").arg(t_current->internalID());
    if(!ui->doneCheckBox->isChecked()) _where << "(estado != 3)"; else _where << "(estado = 3)";
    if(!ui->deletedCheckBox->isChecked()) _where << "(deleted = 0)";
    _where << QString("(deadline >= '%1')").arg(ui->desdeTimeEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss"));
    _where << QString("(deadline <= '%1')").arg(ui->hastaDateEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss"));
    t_model->setFilter(_where.join(" AND "));
    t_model->select();
    ui->tableView->resizeColumnsToContents();
    qDebug() << t_model->query().lastQuery() << t_model->lastError();
}

void wWorksBrowser::print()
{
    /*QSqlTableModel *t_model = new QSqlTableModel(this, nd::connection::maindb());
    t_model->setTable("userstamp");
    t_model->select();
    qDebug() << t_model->lastError() << t_model->query().lastQuery();*/
    printObject::instance()->printSQLModel(t_model, "listadito");
}

void wWorksBrowser::businessSelected()
{
    t_current = &(t_business[ui->businessComboBox->currentIndex()]);
    filter();
}
