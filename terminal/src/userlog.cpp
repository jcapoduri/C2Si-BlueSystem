#include "userlog.h"

business * userlog::t_business = 0;

userlog::userlog(quint64 id) : nd::interface(id)
{
    t_tablename = "userlog";
    t_fieldList  << "desc" << "table" << "obj_id" << "business";
    t_instanced = false;
}

QVariant userlog::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_desc;
            break;
        case 1:
            return t_table;
            break;
        case 2:
            return t_obj;
            break;
        case 3:
            return userlog::t_business->internalID();
        default:
            return QVariant();
    };
}

bool userlog::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_desc = value.toString();
            break;
        case 1:
            t_table = value.toString();
            break;
        case 2:
            t_obj = value.toInt(&ok);
            break;
        case 3:
            break;
        default:
            ok = false;
    };
    return ok;
}

business *userlog::getBusiness()
{
    return userlog::t_business;
}

void userlog::setBusiness(business *b)
{
    userlog::t_business = b;
}

void userlog::logThis(user * u, interface *obj, QString desc)
{
    userlog log;
    log.setDesc(desc);
    log.setObj(obj->internalID());
    log.setTable(obj->tablename());
    log.commit(u->internalID());
}
