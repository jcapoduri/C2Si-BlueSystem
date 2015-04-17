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
    void    openWorkorder(QModelIndex &index);
    void    openWorkorder(int row, int column);
    void    hideFilter();
    void    showFilter();
    void    setTitle(QString title){ _title = title; }
private:
    void    openWorkorder(quint64 id);
    Ui::wWorkList *ui;
    workorderList _work_lister;
    QString       _title;
};

#endif // WWORKLIST_H
