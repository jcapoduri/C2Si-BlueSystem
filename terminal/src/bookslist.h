#ifndef BOOKSLIST_H
#define BOOKSLIST_H

#include <QObject>
#include "db.h"
#include "books.h"
#include "business.h"
#include "workorderlist.h"

class booksList : public QObject
{
    Q_OBJECT
public:
    typedef QList<workorder> workList;
    typedef QPair<workList, workList> booksWorks;

    explicit booksList(business *b, QObject *parent = 0);
    
    bool                first(){ _index = 0; return _currentStrip.size() != 0; }
    bool                next(){ _index++; if(_index >= _currentStrip.size()){ _index--; return false; }else return true; }
    bool                end(){ return (_currentStrip.size() - 1) == _index; }
    int                 count(){ return _currentStrip.size(); }
    QPair<books, booksWorks>   item();


    /*QList<QTableWidgetItem*>    getTableRow(){ return getTableRow(item()); }
    QList<QTableWidgetItem*>    getTableRow(workorder w);
    QList<wListWorkorder*>      asListWorkorder();*/


signals:
    void                queryDone();

public slots:
    bool                query();

protected:

    QHash<books, booksWorks>   _currentStrip;
    business*                   _business;
    int                         _index;
    workorderList               _workorder_lister;
};

#endif // BOOKSLIST_H
