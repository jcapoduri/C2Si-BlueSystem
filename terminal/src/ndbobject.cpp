#include "ndbobject.h"

using namespace nd;

dbObject::dbObject(quint64 id) : dbInterface(id)
{
    t_tablename = "baseobject";
}

dbObject::dbObject(QSqlRecord rec)
{    
    for(int i = 0; i < rec.count(); i++){
        addField(rec.fieldName(i), rec.field(i).value());
    };
}

QVariant dbObject::fields(int at, bool toShow)
{
    return t_fieldValues.at(at);
}

bool dbObject::setFieldValue(int at, QVariant value)
{
    if(t_fieldValues.size() >= at || at < 0) return false;
    t_fieldValues.replace(at, value);
}

bool dbObject::addField(QString name, QVariant value)
{
    if(t_fieldList.contains(name)) return false;
    t_fieldValues << value;
    t_fieldList << name;
}

QString dbObject::tablename()
{
    return t_tablename;
}
