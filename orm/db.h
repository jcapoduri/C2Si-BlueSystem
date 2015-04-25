#ifndef DB_H
#define DB_H
#include "nd_global.h"
#include <QtSql>
#include "connection.h"
#include "utils.h"
#include "queryresult.h"

namespace nd{
    namespace db
    {
        NDSHARED_EXPORT bool         exec(QString querystring);
        NDSHARED_EXPORT QSqlQuery    query(QString querystring, bool onFallBack = false);
        NDSHARED_EXPORT QSqlQuery    prepare(QString querystring, bool onFallBack = false);

        template <class T>
        static db::queryResult<T> select(QString filter = "", bool fromFallback = false){
            db::queryResult<T> result(fromFallback);
            result.setFilter(filter);
            result.exec();
            return result;
        }

        template<class R, class U>
        static QList<U>    children(R obj, bool fromFallback = false){
            U data;
            db::queryResult<U> result(fromFallback);
            result.setFilter(QString("%1 = %2").arg(obj.tablename()).arg(obj.internalID()));
            result.setTablename(QString("%1_%2").arg(obj.tablename()).arg(data.tablename()));
            result.exec();
            return result.all(fromFallback);
        }

        template<class R, class U>
        static QList<U>    children(R* obj, bool fromFallback = false){
            U data;
            db::queryResult<U> result(fromFallback);
            result.setFilter(QString("%1 = %2").arg(obj->tablename()).arg(obj->internalID()));
            result.setTablename(QString("%1_%2").arg(obj->tablename()).arg(data.tablename()));
            result.exec();
            return result.all(fromFallback);
        }

        template<class R, class U>
        static bool    setChildren(R obj, QList<U> list){
            U data;
            QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1_%2 WHERE %3 = %4").arg(obj.tablename()).arg(data.tablename()).arg(obj.tablename()).arg(obj.internalID()));
            QList<U> toReturn;
            U* data2;
            while(query.next()){
                //qDebug() << query.record().field(data.tablename()).value();
                data2 = new U(query.record().field(data.tablename()).value().toLongLong());
                //qDebug() << "internal id:" << data.internalID();
                bool ok = data2->update();
                qDebug() << ok;
                if(ok) toReturn << (*data2); else delete data2;
                qDebug() << toReturn.count();
            };
            qDebug() << toReturn.count();
            return toReturn;
        }

        /*template<class T>
        static QSqlQuery    select(QString filter = ""){
            T *obj = new T();
            QSqlQuery query;
            query = connection::instance()->select(QString("SELECT * FROM %1 WHERE %2").arg(obj->tablename()).arg(filter == "" ? "1 = 1" : filter));
            return query;
            delete obj;

        }

        template<class T>
        static QList<T>    select(QString filter){
            T obj;
            QSqlQuery query = select(QString("SELECT * FROM %1 WHERE %2").arg(obj.tablename()).arg(filter.isEmpty() ? "1 = 1" : filter));
            QList<T> toReturn;
            while(query.next()){
                T obj;
                if(obj.update(query.record())) toReturn << obj;
            }
            return toReturn;
        }
        template<class R, class U>
        static QList<U>    children(R obj){
            U data;
            QSqlQuery query = select(QString("SELECT * FROM %1_%2 WHERE %3 = %4").arg(obj.tablename()).arg(data.tablename()).arg(obj.tablename()).arg(obj.internalID()));
            QList<U> toReturn;
            U* data2;
            while(query.next()){
                //qDebug() << query.record().field(data.tablename()).value();
                data2 = new U(query.record().field(data.tablename()).value().toInt());
                //qDebug() << "internal id:" << data.internalID();
                bool ok = data2->update();
                qDebug() << ok;
                if(ok) toReturn << (*data2); else delete data2;
                qDebug() << toReturn.count();
            };
            qDebug() << toReturn.count();
            return toReturn;
        }

        template<class R, class U>
        static bool    setChildren(R obj, QList<U> list){
            U data;
            QSqlQuery query = select(QString("SELECT * FROM %1_%2 WHERE %3 = %4").arg(obj.tablename()).arg(data.tablename()).arg(obj.tablename()).arg(obj.internalID()));
            QList<U> toReturn;
            U* data2;
            while(query.next()){
                //qDebug() << query.record().field(data.tablename()).value();
                data2 = new U(query.record().field(data.tablename()).value().toInt());
                //qDebug() << "internal id:" << data.internalID();
                bool ok = data2->update();
                qDebug() << ok;
                if(ok) toReturn << (*data2); else delete data2;
                qDebug() << toReturn.count();
            };
            qDebug() << toReturn.count();
            return toReturn;
        }*/
    }
}
#endif // DB_H
