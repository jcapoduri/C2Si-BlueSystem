#ifndef OBJECT_H
#define OBJECT_H
#include "interface.h"

namespace nd{
    class NDSHARED_EXPORT object : public interface
    {
    public:
        object(QString tablename = "", quint64 id = 0);
        QString     tablename(){ return t_tablename; }
        QVariant    fields(int at, bool toShow = false);
        bool        setFieldValue(int at, QVariant value);
        void        setTablename(QString value){ t_tablename = value; }

        bool        commit(quint64 usrid = 0);
        bool        insert(quint64 usrid = 0);
        bool        update();
        bool        update(QSqlRecord record);
        void        touch(quint64 usrid = 0);

    protected:
        QList<QVariant> t_fieldData;
    };
}
#endif // OBJECT_H
