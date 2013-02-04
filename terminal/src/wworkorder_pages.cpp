#include "wworkorder_pages.h"
#include "ui_wworkorder_pages.h"

wworkorder_pages::wworkorder_pages(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wworkorder_pages)
{
    ui->setupUi(this);
    t_pages = new workorder_pages();

    connect(this, SIGNAL(accepted()), this, SLOT(save()));
    connect(this, SIGNAL(rejected()), this, SLOT(cancel()));
}

wworkorder_pages::~wworkorder_pages()
{
    delete ui;
}

void wworkorder_pages::save()
{
    t_pages->setPagefrom(ui->desdeSpinBox->value());
    t_pages->setPageto(ui->hastaSpinBox->value());
    emit pagesSaved(t_pages);
    close();
}

void wworkorder_pages::cancel()
{
    delete t_pages;
    close();
}
