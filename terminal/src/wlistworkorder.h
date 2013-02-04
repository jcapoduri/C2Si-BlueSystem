#ifndef WLISTWORKORDER_H
#define WLISTWORKORDER_H

#include <QWidget>
#include "job.h"
#include "workorder.h"

namespace Ui {
class wListWorkorder;
}

class wListWorkorder : public QWidget
{
    Q_OBJECT
    
public:
    explicit wListWorkorder(workorder* ww, QWidget *parent = 0);
    ~wListWorkorder();
    workorder*  getWorkorder(){ return t_workorder; }
public slots:
    void    update();
    void    mouseDoubleClickEvent(QMouseEvent *event);
signals:
    void    dblClicked();
private:
    Ui::wListWorkorder *ui;
    workorder*          t_workorder;
};

#endif // WLISTWORKORDER_H
