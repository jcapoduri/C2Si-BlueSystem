#ifndef WWORKLIST_H
#define WWORKLIST_H

#include <QWidget>
#include "workorderlist.h"
#include "mainwidget.h"

namespace Ui {
class wWorkList;
}

class wWorkList : public QWidget
{
    Q_OBJECT
    
public:
    explicit wWorkList(QWidget *parent = 0);
    ~wWorkList();
public slots:
    void    search();
    void    print(QString title);
    void    print();
    void    hideFilter();
    void    showFilter();
    void    setTitle(QString title){ _title = title; }
private:
    Ui::wWorkList *ui;
    workorderList _work_lister;
    QString       _title;
};

#endif // WWORKLIST_H
