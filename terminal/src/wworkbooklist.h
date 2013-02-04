#ifndef WWORKBOOKLIST_H
#define WWORKBOOKLIST_H

#include <QWidget>
#include "mainwidget.h"
#include "bookslist.h"

namespace Ui {
class wWorkBookList;
}

class wWorkBookList : public QWidget
{
    Q_OBJECT
    
public:
    explicit wWorkBookList(QWidget *parent = 0);
    ~wWorkBookList();
protected slots:
    void        search();
private:
    Ui::wWorkBookList *ui;
    booksList         _book_lister;
};

#endif // WWORKBOOKLIST_H
