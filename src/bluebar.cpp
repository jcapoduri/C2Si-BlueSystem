#include "bluebar.h"

bluebar::bluebar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::blueBar)
{
    ui->setupUi(this);
}
