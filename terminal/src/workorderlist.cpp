#include "workorderlist.h"

workorderList::workorderList(business *b, QObject *parent) :
    QObject(parent),
    _fromDate(QDateTime::currentDateTime().addDays(-1)),
    _toDate(QDateTime::currentDateTime().addDays(1)),
    _business(b),
    _client_name(""),
    _description_name(""),
    _show_ignored(false),
    _show_by_lista(false)
{
}

QList<wListWorkorder*> workorderList::asListWorkorder()
{
    QList<wListWorkorder*> lst;
    wListWorkorder* lw = 0;
    for(int i = 0; i < _currentStrip.length(); i++){
        lw = new wListWorkorder(&(_currentStrip[i]));
        lst.append(lw);
    };
    return lst;
}

QList<QTableWidgetItem *> workorderList::getTableRow(workorder w)
{
    QList<QTableWidgetItem*> lst;
    lst.append(new QTableWidgetItem(QString::number(w.internalID())));
    for(int i = 0; i < w.fieldsCount(); i++){
        lst.append(new QTableWidgetItem(w.fields(i, true).toString()));
    };
    return lst;
}

QStringList workorderList::getShortTableRowHeaders()
{
    QStringList headers;
    headers << "Numero" << "Cliente" << "Descripcion" << "Fec. Entrega";
    return headers;
}

QList<QTableWidgetItem *> workorderList::getShortTableRow(workorder w)
{
    QList<QTableWidgetItem*> lst;
    lst.append(new QTableWidgetItem(QString::number(w.internalID())));
    lst.append(new QTableWidgetItem(w.costumerName()));
    lst.append(new QTableWidgetItem(w.descripcion()));
    lst.append(new QTableWidgetItem(w.deadLine().toString()));
    return lst;
}

bool workorderList::query()
{
    QStringList whereClosures;
    QString     where = '\0';
    int         i;

    for(i = 0; i < _currentState.length(); i++)
        whereClosures.append(QString("(estado = %1)").arg(_currentState[i]));
    //where = QString("(deadline > '%1' AND deadline < '%2') AND () AND (%)");
    where = QString("(deadline > '%1' AND deadline < '%2') ")
            .arg(_fromDate.toString("yyyy-MM-dd hh:mm:ss"))
            .arg(_toDate.toString("yyyy-MM-dd hh:mm:ss"));
    where += QString(" AND business = %1 ").arg(_business->internalID());
    if(!_show_ignored)        
        where += QString(" AND `ignore` = 0");
    if(_show_by_lista){
        if(_lista)
            where += QString(" AND lista = 1");
        else
            where += QString(" AND lista = 0");
    };
    if (!_description_name.isEmpty() && !_client_name.isEmpty()){
        where += QString(" AND (description LIKE '%%1%' OR costumername LIKE '%%2%')").arg(_description_name).arg(_client_name);
    } else {
        if(!_description_name.isEmpty())
            where += QString(" AND description LIKE '%%1%' ").arg(_description_name);
        if(!_client_name.isEmpty())
            where += QString(" AND costumername LIKE '%%1%' ").arg(_client_name);
    };
    where += QString(" AND (%1)").arg(whereClosures.join(" OR "));
    //qDebug() << "q";
    _currentStrip = nd::db::select<workorder>(where).all();
    //qDebug() << "q";
    first();
    emit queryDone();
}
