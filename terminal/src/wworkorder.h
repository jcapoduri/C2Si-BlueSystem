#ifndef WWORKORDER_H
#define WWORKORDER_H

#include <QWidget>
#include <QtSql>
#include "workorder.h"

namespace Ui {
class wworkorder;
}

class wJob;
class wworkorder : public QWidget
{
    Q_OBJECT
    
public:
    explicit wworkorder(wJob* wjob, workorder* work = 0, QWidget *parent = 0);
    ~wworkorder();
    workorder*      getWorkorder(){ return t_workorder; }

public slots:
    void    save();
    void    addPages();
    void    delPages();
    void    pagesAdded(workorder_pages* pages);

    void    deleteMe();

    void    updateCost();
    void    setBookInfo(books *bk);

private:
    void    refreshPages();
    int     retrieveHowTo();
    workorder::HowTo retrieveBestHowToState();
    void    setHowTo(int value);

    Ui::wworkorder *ui;
    workorder*      t_workorder;
    wJob*           t_wjob;
};

#endif // WWORKORDER_H
