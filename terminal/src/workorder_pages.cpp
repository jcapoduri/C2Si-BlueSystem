#include "workorder_pages.h"
#include "workorder.h"

workorder_pages::workorder_pages(quint64 id) : nd::interface(id)
{
    t_tablename = "workorders_pages";
    t_fieldList << "workorder" << "pagefrom" << "pageto" << "business";
    t_instanced = false;
    t_work = 0;
}

workorder_pages::workorder_pages(const workorder_pages &other)
{
    t_tablename = "workorders_pages";
    t_fieldList << "workorder" << "pagefrom" << "pageto" << "business";
    t_instanced = false;
    t_work = other.t_work;
    t_pagefrom = other.t_pagefrom;
    t_pageto = other.t_pageto;
}

bool workorder_pages::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            if(t_work != 0) delete t_work;
            t_work = new workorder(value.toInt(&ok));
            break;
        case 1:
            t_pagefrom = value.toInt(&ok);
            break;
        case 2:
            t_pageto = value.toInt(&ok);
            break;
        case 3:
            //return t_work.bussiness().internalID();
            break;
        default:
            ok = false;
    };
    return ok;
}

QVariant workorder_pages::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            if(toShow) return t_work->internalID();
            return t_work->internalID();
            break;
        case 1:
            return t_pagefrom;
            break;
        case 2:
            return t_pageto;
            break;
        case 3:
            return t_work->bussiness()->internalID();
            break;
        default:
            return QVariant();
    };
}
