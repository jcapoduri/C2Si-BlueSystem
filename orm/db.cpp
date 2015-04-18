#include "db.h"
#include "logger.h"

using namespace nd;

bool db::exec(QString querystring)
{
    return connection::instance()->exec(querystring);
}

QSqlQuery db::query(QString querystring, bool onFallBack)
{
    QSqlQuery q(onFallBack ? connection::fallbackdb() : connection::maindb());
    q.exec(querystring);
    return q;
    /*QSqlQuery *q;
    if(onFallBack)
        q = new QSqlQuery(connection::fallbackdb());
    else
        q = new QSqlQuery(connection::maindb());
    q->exec(querystring);*/
    //qDebug() << q.lastQuery()<< q.lastError();
    /*nd::logger::log(q->lastQuery());
    nd::logger::log(q->lastError().text());*/
    //return *q;
}

QSqlQuery db::prepare(QString querystring, bool onFallBack)
{
    QSqlQuery q(onFallBack ? connection::fallbackdb() : connection::maindb());
    q.prepare(querystring);
    return q;
    /*QSqlQuery *q;
    if(onFallBack)
        q = new QSqlQuery(connection::fallbackdb());
    else
        q = new QSqlQuery(connection::maindb());
    q->prepare(querystring);*/
    /*nd::logger::log(q->lastQuery());
    nd::logger::log(q->lastError().text());
    qDebug() << q->lastQuery()<< q->lastError();*/
    //return *q;
}
