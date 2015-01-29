#ifndef WBOOKSBROWSER_H
#define WBOOKSBROWSER_H

#include <QWidget>
#include <QTreeWidgetItem>
#include "connection.h"
#include "db.h"
#include "relation.h"
#include "business.h"
#include "books.h"

namespace Ui {
class wBooksBrowser;
}

class wBooksBrowser : public QWidget
{
    Q_OBJECT
    
public:
    explicit wBooksBrowser(QWidget *parent = 0);
    ~wBooksBrowser();
public slots:
    void    businessSelected();

    void    add();
    void    addSon();
    void    mod();
    void    del();
    void    bookAdded(books* bk);
    void    sonBookAdded(books* bk);
    void    refresh();
    
private:
    QTreeWidgetItem*  createItem(books* bk);
    Ui::wBooksBrowser *ui;
    QList<business> t_business;
    business*       t_current;
};

#endif // WBOOKSBROWSER_H
