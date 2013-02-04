#include "client.h"

client::client(quint64 id) : nd::interface(id)
{
}

bool client::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_name = value.toString();
            break;
        case 1:
            t_email = value.toString();
            break;
        default:
            ok = false;
    }
    return ok;
}

QVariant client::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_name;
            break;
        case 1:
            return t_email;
            break;
        default:
            return QVariant();
    }
}
