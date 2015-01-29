#ifndef USERSTAMP_H
#define USERSTAMP_H
#include <QDateTime>
#include "user.h"
#include "business.h"

class userstamp : public nd::interface
{
public:
    userstamp(quint64 id = 0);
    QString     tablename(){ return t_tablename; }
    QVariant    fields(int at, bool toShow);
    bool        setFieldValue(int at, QVariant value);

    //setters
    void    setInitstamp(QDateTime value){ t_initstamp = value; }
    void    setEndstamp(QDateTime value){ t_endstamp = value; }
    static void setBusiness(business * b);

    //getters
    QDateTime initstamp(){ return t_initstamp; }
    QDateTime endstamp(){ return t_endstamp; }
    static business * getBusiness();

    static void closeAllSession();
    static void checkSession();
    static void closeSession(user & u);
    static void openSession(user & u);

private:
    QDateTime   t_initstamp;
    QDateTime   t_endstamp;
    static business    *t_business;
};

#endif // USERSTAMP_H
