#include "anillado.h"


anillado::anillado(quint64 id) : nd::interface(id)
{
    t_tablename = "anillados";
    t_fieldList << "name" << "cost";
    t_instanced = false;
    t_name = "";
    t_cost = 0;
}

anillado::anillado(const anillado &other) : nd::interface(0)
{
    t_tablename = "anillados";
    t_fieldList << "name" << "cost";
    t_instanced = false;
    id_db = other.id_db;
    t_name = other.t_name;
    t_cost = other.t_cost;
}

anillado &anillado::operator =(const anillado &other)
{
    //if(this != &other){
        id_db = other.id_db;
        t_name = QString(other.t_name);
        t_cost = other.t_cost;
    //};
    return *this;
}

QVariant anillado::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_name;
            break;
        case 1:
            return t_cost;
            break;
        default:
            return QVariant();
            break;
    };
}

bool anillado::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_name = value.toString();
            break;
        case 1:
            t_cost = value.toDouble(&ok);
            break;
        default:
            ok = false;
    }
    return ok;
}
