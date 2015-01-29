#include "wlistworkorder.h"
#include "ui_wlistworkorder.h"
#include <QMouseEvent>

wListWorkorder::wListWorkorder(workorder *ww, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wListWorkorder)
{
    ui->setupUi(this);
    t_workorder = ww;
    update();
}

wListWorkorder::~wListWorkorder()
{
    delete ui;
}

void wListWorkorder::update()
{
    ui->descriptionLabel->setText(t_workorder->descripcion());
    ui->fechaLabel->setText(t_workorder->deadLine().toString("dddd dd/MM hh:mm"));
    ui->copiesLabel->setText(QString::number(t_workorder->copies()));
    ui->forLabel->setText(t_workorder->costumerName());
}

void wListWorkorder::mouseDoubleClickEvent(QMouseEvent *event)
{
    event->accept();
    emit dblClicked();
}


