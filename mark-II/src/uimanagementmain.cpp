#include "uimanagementmain.h"
#include "ui_manager.h"

uiManagementMain::uiManagementMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::managerWidget)
{
    ui->setupUi(this);
}

uiManagementMain::~uiManagementMain()
{
    delete ui;
}
