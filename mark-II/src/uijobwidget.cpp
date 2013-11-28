#include "uijobwidget.h"
#include "ui_wjob.h"
#include "global_scope.h"
#include "uiworkordertab.h"
#include <QDebug>

uiJobWidget::uiJobWidget(QJsonObject job, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uiJob)
{
    ui->setupUi(this);    

    ui->ownWidget->setCurrentBusiness(blueBusiness);

    if (job.isEmpty()) {
        setWindowTitle("Agregar Trabajo");
        job = app->createObject("job");
        QJsonValueRef ref = job["workorders"];
        QJsonObject   obj = app->createObject("workorder");
        QJsonArray    arr = ref.toArray();
        arr.append(obj);
        QJsonValue a(arr);
        ref = a;
        qDebug() << job;
    } else {
        setWindowTitle("Modificar Trabajo");
    };
    this->job = job;
    refreshWorkorders();
}

uiJobWidget::~uiJobWidget()
{
    delete ui;
}

void uiJobWidget::toJson()
{
}

void uiJobWidget::fromJson()
{
}

void uiJobWidget::refreshWorkorders()
{
    QJsonArray arr = job.value("workorders").toArray();
    int i, len = arr.count();    
    uiWorkorderTab *ww;

    //remuevo los tabs viejos
    while(ui->tabWidget->count() != 0) ui->tabWidget->removeTab(0);
    //while(t_tabs.count() != 0){ ww = t_tabs.takeFirst(); delete ww; }
    for (i = 0; i < len; i++) {
        QJsonValue   ref = arr[i];
        //ww = new uiWorkorderTab(*(ref.toObject()));
       // ui->tabWidget->addTab(ww, QIcon(), QString("Orden Nro. %1").arg(i+1));
    };
}
