#include "dockedwidget.h"

dockedWidget::dockedWidget(QWidget *parent) :
    QAppBar()
{
    mainWidget *w = mainWidget::instance();
    w->connectToDB();
    this->getContentArea()->addWidget(w, 0);
}
