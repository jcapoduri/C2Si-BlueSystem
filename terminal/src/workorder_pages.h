#ifndef WORKODER_PAGES_H
#define WORKODER_PAGES_H
#include "interface.h"

class workorder;
class workorder_pages : public nd::interface
{
public:
    workorder_pages(quint64 id = 0);
    workorder_pages(const workorder_pages & other);
    //db interace
    bool        setFieldValue(int at, QVariant value);
    QVariant    fields(int at, bool toShow);
    QString     tablename(){ return t_tablename; }
    //getters
    workorder*  work(){ return t_work; }
    qint32      pagefrom(){ return t_pagefrom; }
    qint32      pageto(){ return t_pageto; }
    //setters
    void        setWork(workorder* value){ t_work = value; }
    void        setPagefrom(qint32 value){ t_pagefrom = value; }
    void        setPageto(qint32 value){ t_pageto = value; }

protected:
    workorder*  t_work;
    qint32      t_pagefrom;
    qint32      t_pageto;
};

#endif // WORKODER_PAGES_H
