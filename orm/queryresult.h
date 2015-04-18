#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include "connection.h"
#include "utils.h"

namespace nd{
    namespace db{
        template <class T>
        class queryResult{
            public:
                enum compare{lt, lte, gt, gte, eq, neq, like, nlike};

                queryResult(bool fromFallback = false){
                    t_query = QSqlQuery(fromFallback ? nd::connection::fallbackdb() : nd::connection::maindb());
                    //qDebug() << (fromFallback ? nd::connection::fallbackdb() : nd::connection::maindb());
                    t_table = "";
                    t_order = "";
                    t_filter = "1 = 1";
                }
                void        exec(){
                    T* obj = new T();
                    QString _query;

                    if(t_table == "") t_table = obj->tablename();
                    _query = QString("SELECT %1 FROM %2 WHERE %3").arg(obj->allFieldNames()).arg(t_table).arg("(" + t_filter + ") AND deleted = 0");

                    if(!t_order.isEmpty()) _query.append(QString(" ORDER BY %1").arg(t_order));

                    t_query.exec(_query);
                    qDebug() << "queryResult: "<< t_query.lastQuery()<< t_query.lastError();
                    delete obj;
                }

                QList<T>    all(bool fromFallback = false){
                    t_query.first();
                    QList<T> toReturn;
                    //while(t_query.next()){
//                    qDebug() << "all: " << t_query.isValid();
//                    qDebug() << "all: " << t_query.record();
                    //int i = 0;
                    while(t_query.isValid()){
                        //qDebug() << t_query.isValid();
                        /*qDebug() << "all: " << t_query.isValid();
                        qDebug() << "all: " << t_query.record();*/
                        T obj;
                       /* qDebug() << "before t";
                        qDebug() << obj.tablename();
                        qDebug() << "before t";*/
                        obj.onFallback(fromFallback);
                        if(obj.update(t_query.record())){
                            //qDebug() << "no fallo";
                            toReturn << obj;
                        }else{
                            //qDebug() << "fallo";
                        };
                        t_query.next();
                        //qDebug() << "after next nro: " << ++i;
                    }
                    //qDebug() << "remain: "<< toReturn.count() << t_query.lastQuery();
                    return toReturn;
                }

                QList<T*>    allPtr(bool fromFallback = false){
                    t_query.first();
                    QList<T*> toReturn;
                    while(t_query.isValid()){
                        T* obj = new T();
                        obj->onFallback(fromFallback);
                        if(obj->update(t_query.record())){
                            toReturn << obj;
                        }else{
                            //qDebug() << "fallo";
                        };
                        t_query.next();
                    }
                    return toReturn;
                }

                QList<T>    remain(){
                    //T obj;
                    QList<T> toReturn;
                    while(t_query.next()){
                    //while(t_query.isValid()){
                        T obj;
                        if(obj.update(t_query.record())){
                            toReturn << obj;
                            qDebug() << "no fallo";
                        }else{
                            qDebug() << "fallo";
                        };
                        //t_query.next();
                    }
                    //qDebug() << "remain: "<< toReturn.count();
                    return toReturn;
                }

                T*          one(){
                    T* obj = new T();
                    if(t_query.isValid()) obj->update(t_query.record());
                    return obj;
                    /*T obj;
                    QList<T> toReturn;
                    while(t_query.next()){
                        T obj;
                        if(obj.update(t_query.record())) toReturn << obj;
                    }
                    return toReturn;*/
                }

                bool        first(){
                    return t_query.first();
                }
                bool        last(){
                    return t_query.last();
                }
                bool        next(){
                    return t_query.next();
                }

                QSqlRecord  currentRecord(){
                    return t_query.record();
                }
                void        setTablename(QString table){ t_table = table; }
                void        setFilter(int at, QVariant val, compare cp = eq){
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
                void        setFilter(QString filter){
                    if(filter != "") t_filter = filter;
                }

                void        setOrder(QString order){
                    t_order = order;
                }
            protected:
                QString     t_table;
                QString     t_filter;
                QString     t_order;
                QSqlQuery   t_query;
        };
    }
 }
#endif // QUERYRESULT_H
