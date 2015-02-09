#ifndef WBOOKSBROWSE_H
#define WBOOKSBROWSE_H

#include <QWidget>
#include <QComboBox>
#include "books.h"
#include "business.h"

namespace Ui {
class wBooksWidget;
}

class wBooksWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit    wBooksWidget(business* current, QWidget *parent = 0);
    explicit    wBooksWidget(QWidget *parent = 0);
                ~wBooksWidget();
    books*      getChosedBook();
    void        setChosedBook(books* bk);
public slots:
    void        comboChanged(int index);
    void        setCurrentBusiness(business* current);
signals:
    void        currentBookChanged(books *bk);
private:
    void        setComboBook(QComboBox *cmb, books* bk);
    void        setComboBook(QComboBox *cmb, QList<books*> bk);
    void        comboChanged(QComboBox *index);
    void        clearCombos();
    QComboBox*  createComboBox(books* b);


    Ui::wBooksWidget    *ui;
    QList<QComboBox*>   t_comboboxes;
    business*           t_business;
    books*              t_chosed;
};

#endif // WBOOKSBROWSE_H
