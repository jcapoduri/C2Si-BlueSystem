#ifndef WBOOKS_H
#define WBOOKS_H

#include <QWidget>
#include "books.h"
#include "business.h"

namespace Ui {
class wBooks;
}

class wBooks : public QWidget
{
    Q_OBJECT
    
public:
    explicit wBooks(business* bs, books* bk = 0, QWidget *parent = 0);
    ~wBooks();

public slots:
    void    closed();
    void    saved();
signals:
    void    updated(books* u);
private:
    Ui::wBooks *ui;
    books       *t_book;
    bool        toAdd;
};

#endif // WBOOKS_H
