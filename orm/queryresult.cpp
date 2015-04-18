#include "queryresult.h"

using namespace nd;

/*template <class T>
db::queryResult<T>::queryResult()
{
    t_query = QSqlQuery(nd::connection::maindb());
    t_table = "";
    t_filter = "1 = 1";
}*/
/*
template <class T>
void db::queryResult<T>::exec()
{
    T* obj = new T();
    if(t_table == "") t_table = obj->tablename();
    t_query.exec(QString("SELECT * FROM %1 WHERE %2").arg(t_table).arg(t_filter));
    delete obj;
}

template <class T>
QList<T> db::queryResult<T>::all()
{
    t_query.first();
    return remain();
}

template <class T>
QList<T> db::queryResult<T>::remain()
{
    T obj;
    QList<T> toReturn;
    while(t_query.next()){
        T obj;
        if(obj.update(t_query.record())) toReturn << obj;
    }
    return toReturn;
}

template<class T>
T &db::queryResult<T>::one()
{
    T obj;
    QList<T> toReturn;
    while(t_query.next()){
        T obj;
        if(obj.update(t_query.record())) toReturn << obj;
    }
    return toReturn;
}

template<class T>
bool db::queryResult<T>::first()
{
    return t_query.first();
}

template<class T>
bool db::queryResult<T>::last()
{
    return t_query.last();
}

template<class T>
bool db::queryResult<T>::next()
{
    return t_query.next();
}

template <class T>
void db::queryResult<T>::setTablename(QString table)
{
    t_table = table;
}

template <class T>
void db::queryResult<T>::setFilter(int at, QVariant val, db::queryResult<T>::compare cp)
{
    QString filter;
    T* obj = new T();
    filter = nd::utils::toSqlValue(val);
    switch(cp){
        case lt:
            filter = obj->fieldName(at) + " < " + filter;
            break;
        case lte:
            filter = obj->fieldName(at) + " <= " + filter;
            break;
        case gt:
            filter = obj->fieldName(at) + " > " + filter;
            break;
        case gte:
            filter = obj->fieldName(at) + " >= " + filter;
            break;
        case eq:
            filter = obj->fieldName(at) + " = " + filter;
            break;
        case neq:
            filter = obj->fieldName(at) + " != " + filter;
            break;
        case like:
            filter = obj->fieldName(at) + " LIKE " + filter;
            break;
        case nlike:
            filter = obj->fieldName(at) + " NOT LIKE " + filter;
            break;
    };
    setFilter(filter);
    delete obj;
}
*/
