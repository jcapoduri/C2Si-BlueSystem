#ifndef IDBOBJECT_H
#define IDBOBJECT_H
#include "nd_global.h"
#include "connection.h"
#include <QString>
#include <QVariant>
#include <QDateTime>
#include <QList>
#include <QtSql>

namespace nd{
    class object;
    class NDSHARED_EXPORT interface
    {
    public:
        interface(quint64 id = 0){ id_db = id; t_valid = false; t_onFallback = false; }
        ~interface();
        virtual int         fieldsCount(){ return t_fieldList.count(); }
        virtual int         fieldAt(QString name){ return t_fieldList.indexOf(name); }
        virtual QVariant    fields(int at, bool toShow = false) = 0;
        virtual QString     fieldName(int at) { return t_fieldList.at(at); }
        virtual bool        setFieldValue(int at, QVariant value) = 0;

        virtual bool    commit(quint64 usrid = 0);
        virtual bool    update();
        virtual bool    update(nd::object & obj);
        virtual bool    update(QSqlRecord record);
        virtual bool    erase(quint64 usrid = 0);
        virtual bool    unerase(quint64 usrid = 0);
        virtual bool    rise();
        virtual void    touch(quint64 usrid = 0);
        virtual QString tablename() = 0;
        /*static QString tablename(){ return t_tablename; }
        static  void    retrieveList(int at, QVariant value, QString compare = "="){}
        static  void    retrieveList(QString filter){}*/
        QString     allFieldNames(){
            QStringList names;
            names << "`id`";
            names << "`ctime`";
            names << "`mtime`";
            names << "`dtime`";
            names << "`user_id`";
            names << "`deleted`";
            names << "`last_instance`";
            for(int i = 0; i < fieldsCount(); i++)
                names << QString("`%1`").arg(fieldName(i));
            return names.join(", ");
        }
        QDateTime   ctime() const{ return t_ctime; }
        QDateTime   mtime() const{ return t_mtime; }
        QDateTime   dtime() const{ return t_dtime; }
        bool        isDeleted() const{ return t_deleted; }
        bool        isValid() const{ return t_valid; }
        bool        isOnFallback() const{ return t_onFallback; }
        quint64     userID() const{ return t_user; }
        quint64     internalID() const{ return id_db; }
        bool operator==(const interface &other) const { return internalID() == other.internalID(); }
        void        onFallback(bool value){ t_onFallback = value; }

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

        bool            t_valid;
        bool            t_onFallback;
    };
}

#endif // IDBOBJECT_H
