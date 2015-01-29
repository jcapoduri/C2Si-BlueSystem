#include "folder.h"

folder::folder(quint64 id) : nd::interface(id)
{
    t_tablename = "";
    t_fieldList << "name" << "id_parent";
    t_instanced = false;
}

bool folder::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_name = value.toString();
            break;
        default:
            ok = false;
            break;
    };
    return ok;
}

QVariant folder::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_name;
            break;
        default:
            return QVariant();
            break;
    };
}
