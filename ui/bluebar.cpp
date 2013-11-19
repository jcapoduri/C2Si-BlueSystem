#include "bluebar.h"
#include "ui_bluebar.h"

blueBar::blueBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::blueBar)
{
    ui->setupUi(this);
}

blueBar::~blueBar()
{
    delete ui;
}
