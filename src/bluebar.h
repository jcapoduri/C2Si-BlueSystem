#ifndef BLUEBAR_H
#define BLUEBAR_H

#include <QWidget>
#include "ui_bluebar.h"

namespace Ui {
    class blueBar;
}

class bluebar : public QWidget
{
    Q_OBJECT
public:
    explicit bluebar(QWidget *parent = 0);
    
signals:
    
public slots:
protected:
    Ui::blueBar *ui;
};

#endif // BLUEBAR_H
