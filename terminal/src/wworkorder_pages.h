#ifndef WWORKORDER_PAGES_H
#define WWORKORDER_PAGES_H

#include <QDialog>
#include "workorder.h"

namespace Ui {
class wworkorder_pages;
}

class wworkorder_pages : public QDialog
{
    Q_OBJECT
    
public:
    explicit wworkorder_pages(QWidget *parent = 0);
    ~wworkorder_pages();
public slots:
    void    save();
    void    cancel();
signals:
    void    pagesSaved(workorder_pages* page);

private:
    Ui::wworkorder_pages *ui;
    workorder_pages      *t_pages;
};

#endif // WWORKORDER_PAGES_H
