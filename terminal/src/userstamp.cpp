#include "userstamp.h"
#include "db.h"

business * userstamp::t_business = 0;

userstamp::userstamp(quint64 id) : nd::interface(id)
{
    t_tablename = "userstamp";
    t_fieldList << "initstamp" << "endstamp" << "business";
    t_instanced = false;
    t_initstamp = QDateTime::currentDateTime();
    t_endstamp = QDateTime::fromString("0000-00-00 00:00:00", "yyyy-MM-dd hh:mm:ss");
}

QVariant userstamp::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_initstamp;
            break;
        case 1:
            if(t_endstamp.isValid()) return t_endstamp; else return "0000-00-00 00:00:00";
            break;
        case 2:
            return userstamp::t_business->internalID();
            break;
        default:
            return QVariant();
            break;
    };
}

bool userstamp::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_initstamp = value.toDateTime();
            break;
        case 1:
            t_endstamp = value.toDateTime();
            break;
        case 2:
            //return userstamp::t_business;
            break;
        default:
            ok = false;
            break;
    };
    return ok;
}

void userstamp::setBusiness(business *b)
{ userstamp::t_business = b; }

business *userstamp::getBusiness()
{ return userstamp::t_business; }

void userstamp::closeAllSession()
{
    nd::connection::instance()->exec(QString("UPDATE %1 SET endstamp = CURRENT_TIMESTAMP WHERE endstamp = '0000-00-00 00:00:00' AND business = %2").arg("userstamp").arg(t_business->internalID()));
}

void userstamp::checkSession()
{
    QSqlQuery q = nd::connection::instance()->select(QString("select * from userstamp WHERE endstamp = '0000-00-00 00:00:00' AND TIMESTAMPDIFF(day, userstamp.initstamp, CURRENT_TIMESTAMP) >= 1"));
    while(q.next()){
        nd::connection::instance()->exec(QString("UPDATE %1 SET endstamp = concat(curdate() - INTERVAL 1 DAY, ' 22:00:00') WHERE endstamp = '0000-00-00 00:00:00' AND business = %2 AND user_id = %3").arg("userstamp").arg(t_business->internalID()).arg(q.record().field("user_id").value().toInt()));
    };
}

void userstamp::closeSession(user &u)
{
    bool ok = nd::connection::instance()->exec(QString("UPDATE %1 SET endstamp = CURRENT_TIMESTAMP WHERE endstamp = '0000-00-00 00:00:00' AND business = %2 AND user_id = %3").arg("userstamp").arg(t_business->internalID()).arg(u.internalID()));
}

void userstamp::openSession(user &u)
{
    //closeSession(u);
    userstamp stamp;    
    QSqlQuery q = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE endstamp = '0000-00-00 00:00:00' AND business = %2 AND user_id = %3").arg("userstamp").arg(t_business->internalID()).arg(u.internalID()));;
    if(!q.next()){
        stamp.commit(u.internalID());
    };
    /*double _query = 0.0;
    while(q.next()){
        qDebug() << q.record().field(0).value().toString() << q.record().field(1).value().toDouble();
        _query += q.record().field(1).value().toDouble();
    };
    qDebug() << "total query: " << _query;*/
}
