#ifndef USERLOG_H
#define USERLOG_H
#include "interface.h"
#include "business.h"

class userlog : public nd::interface
{
public:
    userlog(quint64 id = 0);
    QString     tablename(){ return t_tablename; }
    QVariant    fields(int at, bool toShow);
    bool        setFieldValue(int at, QVariant value);

    //getters
    QString     desc(){ return t_desc; }
    QString     table(){ return t_table; }
    quint64     obj(){ return t_obj; }
    static business * getBusiness();

    //setters
    void        setDesc(QString value){ t_desc = value; }
    void        setTable(QString value){ t_table = value; }
    void        setObj(quint64 value){ t_obj = value; }
    static void setBusiness(business * b);

    static void logThis(user * u, nd::interface *obj, QString desc);
private:
    QString t_desc;
    QString t_table;
    quint64 t_obj;
    static business    *t_business;

};

#endif // USERLOG_H
