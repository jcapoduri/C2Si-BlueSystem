#ifndef DBOBJECT_H
#define DBOBJECT_H
#include <QtSql>
#include "ndbinterface.h"

namespace nd{
    //class dbInterface;
    class dbObject : public dbInterface
    {
    public:
        dbObject(quint64 id = 0);
        dbObject(QSqlRecord rec);
        QVariant        fields(int at, bool toShow = false);
        bool            setFieldValue(int at, QVariant value);
        bool            addField(QString name, QVariant value);
        QString         tablename();

    protected:
        QString  t_tablename;
        bool     t_instanced;
        QList<QVariant> t_fieldValues;

    };
}

#endif // DBOBJECT_H
