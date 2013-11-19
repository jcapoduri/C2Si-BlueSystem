#ifndef BLUEBAR_H
#define BLUEBAR_H

#include <QWidget>

namespace Ui {
class blueBar;
}

class blueBar : public QWidget
{
    Q_OBJECT

public:
    explicit blueBar(QWidget *parent = 0);
    ~blueBar();

private:
    Ui::blueBar *ui;
};

#endif // BLUEBAR_H
