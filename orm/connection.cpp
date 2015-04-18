#include "connection.h"
#include "object.h"
#include "logger.h"
#include "utils.h"

using namespace nd;

connection* connection::t_conn = 0;

connection::connection(QObject *parent) :
    QObject(parent)
{
    connect(&t_checkconn, SIGNAL(timeout()), this, SLOT(checkConnection()));
    t_checkconn.setInterval(5*1000);
    t_checkconn.start();
}

connection* connection::instance(){
    if(t_conn == 0){
        t_conn = new connection();
    };
    return t_conn;
}

void connection::deleteLater()
{
    if(t_conn != 0){
        if(t_conn->t_maindb.isValid()) t_conn->t_maindb.close();
        if(t_conn->t_fallbackdb.isValid()) t_conn->t_fallbackdb.close();
        t_conn->t_checkconn.stop();
        delete t_conn;
        t_conn = 0;
    };
}

QSqlDatabase connection::addSQLite(QString name, QString file)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", name);
    db.setDatabaseName(file);
    nd::logger::log(QString("%1").arg(db.open()));
    return db;
}

QSqlDatabase connection::addMySQL(QString name, QString host, QString user, QString pass, QString dbname)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", name);
    db.setHostName(host);
    db.setUserName(user);
    db.setPassword(pass);
    db.setDatabaseName(dbname);
    db.setConnectOptions("MYSQL_OPT_RECONNECT=1");
    nd::logger::log(QString("base de datos %1 esta en estado %2").arg(name).arg(db.open()));
    return db;
}

void connection::sync(SyncType sync)
{
    QSqlQuery *q1, *q2;
    QString tb;
    nd::object *obj1, *obj2;

    q1 = new QSqlQuery(maindb());
    q2 = new QSqlQuery(fallbackdb());
    if(sync == SyncToMain){
        QSqlQuery *temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    };

    foreach(tb, t_tables){
        q1->exec(QString("SELECT * FROM %1").arg(tb));
        while(q1->next()){
            obj1 = new nd::object(tb);
            obj2 = new nd::object(tb);
            obj2->onFallback(true);
            obj1->update(q1->record());
            q2->exec(QString("SELECT * FROM %1 WHERE id = %2").arg(tb).arg(obj1->internalID()));            
            if(q2->next()){                
                obj2->update(q2->record());
                if(obj1->mtime() > obj2->mtime()) obj2->commit(obj1->userID());
            }else{
                obj2->update(q1->record());
                obj2->insert(obj1->userID());
            };
            delete obj1;
            delete obj2;
        };
    };
    delete q1;
    delete q2;
}

void connection::check()
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

void connection::checkConnection()
{
    bool open, ok = true;
    open = t_maindb.isOpen();
    if(!open) ok = t_maindb.open();//ok = maindb.isOpenError()
    if(!ok){
        QSqlQuery query(this->t_maindb);
        ok = query.exec("SELECT 1");
    };
    if(!open && ok) emit connectionRestored();
    if(!ok) emit connectionLost();
}

void connection::addTable(QString name)
{
    t_tables << name;
}

bool connection::exec(QString str, QString fallbackstr)
{
    bool result = true;
    QSqlDatabase db;

    if(this->t_maindb.isValid()) db = this->t_maindb; else db = QSqlDatabase::database();

    QSqlQuery query(db);
    result = query.exec(str);
    if(!result){
        checkConnection();
        result = query.exec(str);
    };

    nd::logger::log(query.lastQuery());
    nd::logger::log(query.lastError().text());

    if(query.lastInsertId().isValid()) t_lastId = query.lastInsertId().toInt();

    if(result && this->t_fallbackdb.isValid()){
        QSqlQuery query2(this->t_fallbackdb);
        if(fallbackstr != "") query2.exec(fallbackstr); else query2.exec(query.lastQuery());
        nd::logger::log(query2.lastQuery());
        nd::logger::log(query2.lastError().text());
    };
    return result;
}

QSqlQuery connection::select(QString str, QSqlDatabase db)
{
    //QSqlDatabase db;
    //if(this->t_maindb.isValid()) db = this->t_maindb; else db = QSqlDatabase::database();
    QSqlQuery query(db);
    query.exec(str);
    nd::logger::log(query.lastQuery());
    nd::logger::log(query.lastError().text());
    return query;
}

QSqlQuery connection::select(QString str)
{
    return this->select(str, nd::connection::maindb());
}

quint64 connection::lastId()
{
    return t_lastId;
}

QSqlDatabase connection::maindb()
{
    return instance()->t_maindb;
}

QSqlDatabase connection::fallbackdb()
{
    return instance()->t_fallbackdb;
}

void connection::setMainDb(QSqlDatabase db)
{
    t_maindb = db;
}

void connection::setFallbackDb(QSqlDatabase db)
{
    t_fallbackdb = db;
}

void connection::checkStatus()
{
}

QString connection::exportMainDb()
{
    return exportDb(maindb());
}

QString connection::exportFallbackDb()
{
    return exportDb(fallbackdb());
}


QString connection::exportDb(QSqlDatabase db)
{
    QString exportSql = "";
    QString tb;
    QSqlQuery query(db);
    foreach(tb, t_tables){
        query.exec(QString("SHOW CREATE TABLE `%1`;").arg(tb));
        if(query.next()){
            exportSql += QString("DROP TABLE `%1`;").arg(tb) + '\n\n';
            exportSql += query.record().field(1).value().toString() + ";" + '\n\n';
            query.exec(QString("SELECT * FROM `%1`").arg(tb));
            while(query.next()){
                exportSql += QString("INSERT INTO `%1` VALUES (").arg(tb);
                int field_count = query.record().count();
                for(int i = 0; i < field_count; i++){
                    exportSql += '"' + nd::utils::addslashes(query.record().field(i).value().toString()) + '"';
                    if (i<(field_count-1)) { exportSql += ','; }
                };
                exportSql += ");";
                exportSql += '\n';
            };
        };
    };
    return exportSql;
}
