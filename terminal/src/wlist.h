#ifndef WLIST_H
#define WLIST_H

#include <QWidget>
#include <QSpacerItem>
#include "wlistworkorder.h"

namespace Ui {
class wList;
}

class wList : public QWidget
{
    Q_OBJECT
    
public:
    explicit wList(QWidget *parent = 0);
    ~wList();

public slots:
    void    update();
    void    print();

signals:
    void    updated();

protected:
    Ui::wList*              ui;
    QString                 filter;
    QString                 t_title;
    QList<wListWorkorder*>  t_ww;
    QSpacerItem*            t_spacer;
};

#endif // WLIST_H
