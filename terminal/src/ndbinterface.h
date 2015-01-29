#ifndef IDBOBJECT_H
#define IDBOBJECT_H
#include "nconnection.h"
#include <QString>
#include <QVariant>
#include <QDateTime>
#include <QList>
#include <QtSql>

namespace nd{
    class dbObject;
    class dbInterface
    {
    public:
        dbInterface(quint64 id = 0){ id_db = id; }        
        virtual int         fieldsCount(){ return t_fieldList.count(); }
        virtual int         fieldAt(QString name){ return t_fieldList.indexOf(name); }
        virtual QVariant    fields(int at, bool toShow = false) = 0;
        virtual QString     fieldName(int at) { return t_fieldList.at(at); }
        virtual bool        setFieldValue(int at, QVariant value) = 0;

        virtual void    commit(quint64 usrid = 0);
        virtual void    update();
        virtual void    update(nd::dbObject & obj);
        virtual void    update(QSqlRecord record);
        virtual void    erase();
        virtual void    touch(quint64 usrid = 0);
        virtual QString tablename() = 0;
        /*static QString tablename(){ return t_tablename; }
        static  void    retrieveList(int at, QVariant value, QString compare = "="){}
        static  void    retrieveList(QString filter){}*/
        QDateTime   ctime() const{ return t_ctime; }
        QDateTime   mtime() const{ return t_mtime; }
        QDateTime   dtime() const{ return t_dtime; }
        bool        isDeleted() const{ return t_deleted;}
        quint64     userID() const{ return t_user; }
        quint64     internalID() const{ return id_db; }
        //operator ==(dbInterface const value){ return this->internalID() == value.internalID(); }
        bool operator==(const dbInterface &other) const { return internalID() == other.internalID(); }

    protected:
        virtual bool    isInstanced() const{ return t_instanced;}
        /*template<class T>
        static QList<T*>    retreieveList(int at, QVariant filter, QString compare = "=")=0;
        template<T>
        static QList<T*>    retreieveList(QString filter){
            QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE %2").arg(t_tablename).arg(filter));
            while(query.next()){

            };
        }*/
        quint64         id_db;
        QStringList     t_fieldList;
        QDateTime       t_ctime, t_mtime, t_dtime;
        bool            t_deleted;
        bool            t_instanced;
        QString         t_tablename;
        quint64         t_user;
    };
}

#endif // IDBOBJECT_H
