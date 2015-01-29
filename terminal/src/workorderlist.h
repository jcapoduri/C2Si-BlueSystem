#ifndef WORKORDERLIST_H
#define WORKORDERLIST_H

#include <QObject>
#include <QTableWidgetItem>
#include "business.h"
#include "workorder.h"
#include "wlistworkorder.h"
#include "db.h"

class workorderList : public QObject
{
    Q_OBJECT
public:
    explicit workorderList(business* b, QObject *parent = 0);
    
    bool                first(){ _index = 0; return _currentStrip.length() != 0; }
    bool                next(){ _index++; if(_index >= _currentStrip.length()){ _index--; return false; }else return true; }
    bool                end(){ return (_currentStrip.length() - 1) == _index; }
    int                 count(){ return _currentStrip.length(); }
    int                 columnCount(){ workorder w; return w.fieldsCount(); }
    workorder           itemAt(int i){ return _currentStrip.at(i); }
    workorder           item(){ /*qDebug() << _index << _currentStrip.length();*/ return _currentStrip.at(_index); }
    QList<QTableWidgetItem*>    getTableRow(){ return getTableRow(item()); }
    QList<QTableWidgetItem*>    getTableRow(workorder w);
    QList<wListWorkorder*>      asListWorkorder();

    // setters
    void                addState(workorder::State st){delState(st);  _currentState.append(st);}
    void                delState(workorder::State st){ _currentState.removeOne(st); }
    void                setFromDate(QDateTime t){ _fromDate = t; }
    void                setToDate(QDateTime t){ _toDate = t; }
    void                setClientName(QString value){ _client_name = value; }
    void                setDescriptionName(QString value){ _description_name = value; }
    void                setBusiness(business* value){ _business = value; }
    void                setShowIgnored(bool value){ _show_ignored = value; }
    void                setShowLista(bool value){ _lista = value; }
    void                setShowByLista(bool value){ _show_by_lista = value; }

signals:
    void                queryDone();

public slots:
    bool                query();

protected:
    QList<workorder::State> _currentState;
    QList<workorder>        _currentStrip;
    business*               _business;
    QDateTime               _fromDate, _toDate;
    QString                 _client_name;
    QString                 _description_name;
    int                     _index;
    bool                    _show_ignored;
    bool                    _lista;
    bool                    _show_by_lista;
};

#endif // WORKORDERLIST_H
