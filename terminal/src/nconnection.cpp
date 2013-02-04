#include "nconnection.h"
#include "ndbobject.h"
#include "nlog.h"

nd::connection* nd::connection::t_conn = 0;

nd::connection::connection(QObject *parent) :
    QObject(parent)
{
    connect(&t_checkconn, SIGNAL(timeout()), this, SLOT(checkConnection()));
    t_checkconn.setInterval(5*1000);
    t_checkconn.start();
}

nd::connection* nd::connection::instance(){
    if(t_conn == 0){
        t_conn = new connection();
    };
    return t_conn;
}

void nd::connection::deleteLater()
{
    if(t_conn != 0){
        if(t_conn->maindb.isValid()) t_conn->maindb.close();
        if(t_conn->fallbackdb.isValid()) t_conn->fallbackdb.close();
        t_conn->t_checkconn.stop();
        delete t_conn;
        t_conn = 0;
    };
}

QSqlDatabase nd::connection::addSQLite(QString name, QString file)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", name);
    db.setDatabaseName(file);
    nd::logger::log(QString("%1").arg(db.open()));
    return db;
}

QSqlDatabase nd::connection::addMySQL(QString name, QString host, QString user, QString pass, QString dbname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", name);
    db.setHostName(host);
    db.setUserName(user);
    db.setPassword(pass);
    db.setDatabaseName(dbname);
    nd::logger::log(QString("%1").arg(db.open()));
    return db;
}

void nd::connection::sync(bool backwards)
{
}

void nd::connection::check()
{
    exec("CREATE TABLE IF NOT EXISTS `baseobject` ("
         "`id` int(10) unsigned NOT NULL AUTO_INCREMENT,"
         "`deleted` tinyint(1) NOT NULL DEFAULT '0',"
         "`last_instance` int(10) unsigned NOT NULL,"
         "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
         "`dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',"
         "PRIMARY KEY (`id`),"
         "KEY `last_instance` (`last_instance`)"
       ") ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;",
        "CREATE TABLE IF NOT EXISTS `baseobject` ("
          "`id` int(10),"
          "`deleted` tinyint(1) NOT NULL DEFAULT '0',"
          "`last_instance` int(10) NOT NULL,"
          "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
          "`dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',"
          "PRIMARY KEY (`id`)"
        ");");
    exec("CREATE TABLE IF NOT EXISTS `baseobject_instance` ("
         "`id` int(10) unsigned NOT NULL AUTO_INCREMENT,"
         "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
         "PRIMARY KEY (`id`)"
       ") ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;",
         "CREATE TABLE IF NOT EXISTS `baseobject_instance` ("
          "`id` int(10),"
          "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
          "PRIMARY KEY (`id`)"
        ");");
    exec("CREATE TABLE IF NOT EXISTS `baseinfo` ("
         "`id` int(10) unsigned NOT NULL AUTO_INCREMENT,"
         "PRIMARY KEY (`id`)"
       ") ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;",
        "CREATE TABLE IF NOT EXISTS `baseinfo` ("
          "`id` int(10),"
          "PRIMARY KEY (`id`)"
         ");");
}

void nd::connection::checkConnection()
{
    /*qDebug() << "db open:" << maindb.isOpen();
    if(maindb.open()) qDebug() << "open error: " << maindb.isOpenError();
    QSqlQuery query(this->maindb);

    bool ok;
    ok = query.exec("SELECT 1");
    qDebug() << "ok:" << ok;
    //qDebug() << "QSqlError" << query.lastError().ErrorType;
    qDebug() << "QSqlError" << query.lastError();*/
    bool open, ok = true;
    open = maindb.isOpen();
    if(!open) ok = maindb.open();//ok = maindb.isOpenError()
    if(!ok){
        QSqlQuery query(this->maindb);
        ok = query.exec("SELECT 1");
    };
    if(!open && ok) emit connectionRestored();
    if(!ok) emit connectionLost();
}

/*void nd::connection::check(nd::object *obj)
{
    exec(QString("CREATE TABLE IF NOT EXISTS `%1` ("
         "`id` int(10) unsigned NOT NULL AUTO_INCREMENT,"
         "`deleted` tinyint(1) NOT NULL DEFAULT '0',"
         "`last_instance` int(10) unsigned NOT NULL,"
         "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
         "`dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',"
         "PRIMARY KEY (`id`),"
         "KEY `last_instance` (`last_instance`)"
       ") ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;").arg(obj->getTablename()),
        QString("CREATE TABLE IF NOT EXISTS `%1` ("
          "`id` int(10),"
          "`deleted` tinyint(1) NOT NULL DEFAULT '0',"
          "`last_instance` int(10) NOT NULL,"
          "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
          "`dtime` timestamp NOT NULL DEFAULT '0000-00-00 00:00:00',"
          "PRIMARY KEY (`id`)"
        ");").arg(obj->getTablename()));
    exec(QString("CREATE TABLE IF NOT EXISTS `%1_instance` ("
         "`id` int(10) unsigned NOT NULL AUTO_INCREMENT,"
         "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
         "PRIMARY KEY (`id`)"
       ") ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_spanish_ci;").arg(obj->getTablename()),
         QString("CREATE TABLE IF NOT EXISTS `%1_instance` ("
          "`id` int(10),"
          "`ctime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,"
          "PRIMARY KEY (`id`)"
        ");").arg(obj->getTablename()));

    *exec(QString("CREATE TABLE IF NOT EXISTS `%1`").arg(obj->getTablename()));
    exec(QString("CREATE TABLE IF NOT EXISTS `%1`").arg(obj->getTablename() + "_instance"));*

    //check format

}
*/
bool nd::connection::exec(QString str, QString fallbackstr)
{
    /*bool result = true;
    QSqlDatabase db;
    if(this->maindb.isValid()) db = this->maindb; else db = QSqlDatabase::database();
    QSqlQuery query(db);
    result = (result & query.exec(str));
    nd::logger::log(query.lastQuery());
    nd::logger::log(query.lastError().text());
    if(query.lastInsertId().isValid()) t_lastId = query.lastInsertId().toInt();
    if(this->fallbackdb.isValid()){
        QSqlQuery query2(this->fallbackdb);
        if(fallbackstr != "") result = (result & query2.exec(fallbackstr)); else result = (result & query2.exec(query.lastQuery()));
        nd::logger::log(query2.lastQuery());
        nd::logger::log(query2.lastError().text());
    };
    return result;*/

    bool result = true;
    QSqlDatabase db;

    if(this->maindb.isValid()) db = this->maindb; else db = QSqlDatabase::database();

    QSqlQuery query(db);
    result = query.exec(str);
    if(!result){
        checkConnection();
        result = query.exec(str);
    };

    nd::logger::log(query.lastQuery());
    nd::logger::log(query.lastError().text());

    if(query.lastInsertId().isValid()) t_lastId = query.lastInsertId().toInt();

    if(result && this->fallbackdb.isValid()){
        QSqlQuery query2(this->fallbackdb);
        if(fallbackstr != "") query2.exec(fallbackstr); else query2.exec(query.lastQuery());
        nd::logger::log(query2.lastQuery());
        nd::logger::log(query2.lastError().text());
    };
    return result;
}

QSqlQuery nd::connection::select(QString str)
{
    QSqlDatabase db;
    if(this->maindb.isValid()) db = this->maindb; else db = QSqlDatabase::database();
    QSqlQuery query(db);
    query.exec(str);
    nd::logger::log(query.lastQuery());
    nd::logger::log(query.lastError().text());
    return query;
}

template<class T>
QList<T> nd::connection::selectObj(QString filter){
    T obj;
    QSqlQuery query = select(QString("SELECT * FROM %1 WHERE %2").arg(obj.tablename()).arg(filter.isEmpty() ? "1 = 1" : filter));
    QList<T> toReturn;
    while(query.next()){
        T obj;
        obj.update(query.record());
        toReturn << obj;
    }
    return toReturn;
}

quint64 nd::connection::lastId()
{
    return t_lastId;
}

void nd::connection::setMainDb(QSqlDatabase db)
{
    maindb = db;
}

void nd::connection::setFallbackDb(QSqlDatabase db)
{
    fallbackdb = db;
}

void nd::connection::checkStatus()
{
}
