#include "object.h"
#include "db.h"
#include "logger.h"

using namespace nd;

object::object(QString tablename, quint64 id) : interface(id)
{
    t_tablename = tablename;
    t_instanced = false;
    t_valid = false;
}

QVariant object::fields(int at, bool toShow)
{
    if(at >= t_fieldData.count()) return QVariant();
    return t_fieldData.at(at);
}

bool object::setFieldValue(int at, QVariant value)
{
    if(at >= t_fieldData.count()) return false;
    t_fieldData.replace(at, value);
}

bool object::commit(quint64 usrid)
{
    QString query;
    if(id_db == 0){
        QStringList names, values;
        query = "INSERT INTO %1 (%2) VALUES (%3)";
        for(int i = 0; i < fieldsCount(); i++){
            names << "`" + fieldName(i) + "`";
            values << "?";
        };
        query = query.arg(tablename()).arg(names.join(", ")).arg(values.join(", "));
    }else{
        QStringList names;
        query = "UPDATE %1 SET %2 WHERE id = %3";
        QVariant v;
        for(int i = 0; i < fieldsCount(); i++){
            names << QString("`%1` = ?").arg(fieldName(i));
        };
        query = query.arg(tablename()).arg(names.join(", ")).arg(id_db);
    };
    QSqlQuery q = nd::db::prepare(query, t_onFallback);

    for(int i = 0; i < fieldsCount(); i++) q.addBindValue(fields(i));

    q.exec();

    nd::logger::log(q.lastQuery());
    nd::logger::log(q.lastError().text());
    if(id_db == 0){
        id_db = q.lastInsertId().toInt();
    };
    t_valid = (id_db != 0);
    return t_valid;
}

bool object::insert(quint64 usrid)
{
    QString query;
    QStringList names, values;
    query = "INSERT INTO %1 (%2) VALUES (%3)";
    names << "id";
    values << "?";
    names << "ctime";
    values << "?";
    names << "mtime";
    values << "?";
    names << "dtime";
    values << "?";
    names << "deleted";
    values << "?";
    names << "user_id";
    values << "?";
    for(int i = 0; i < fieldsCount(); i++){
        names << "`" + fieldName(i) + "`";
        values << "?";
    };
    query = query.arg(/*t_tablename*/tablename()).arg(names.join(", ")).arg(values.join(", "));
    QSqlQuery q = nd::db::prepare(query, t_onFallback);
    q.addBindValue(id_db);
    q.addBindValue(t_ctime);
    q.addBindValue(t_mtime);
    q.addBindValue(t_dtime);
    q.addBindValue(t_deleted);
    q.addBindValue(t_user);
    for(int i = 0; i < fieldsCount(); i++) q.addBindValue(fields(i));

    q.exec();

    nd::logger::log(q.lastQuery());
    nd::logger::log(q.lastError().text());
    /*if(id_db == 0){
        id_db = q.lastInsertId().toInt(); //nd::connection::instance()->lastId();
    }else{
        touch(usrid);
    };*/
    t_valid = (id_db != 0);
    return t_valid;
}

bool object::update()
{
    if(!t_valid) return false;
    if(id_db == 0) return false;
    QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE id = %2  AND deleted = 0").arg(this->tablename()).arg(id_db));
    if(query.next()){
        t_valid = nd::interface::update(query.record());
    }else{
        t_valid = false;
    };
    return t_valid;
}

bool object::update(QSqlRecord record)
{
    id_db = record.field("id").value().toInt();
    t_ctime = record.field("ctime").value().toDateTime();
    t_mtime = record.field("mtime").value().toDateTime();
    t_dtime = record.field("dtime").value().toDateTime();
    t_deleted = record.field("deleted").value().toBool();
    t_instanced = record.field("instanced").value().toBool();
    t_user = record.field("user_id").value().toInt();
    t_valid = true;
    t_fieldData.clear();
    t_fieldList.clear();
    for(int i = 0; i < record.count(); i++){
        if(record.fieldName(i) == "id") continue;
        if(record.fieldName(i) == "ctime") continue;
        if(record.fieldName(i) == "mtime") continue;
        if(record.fieldName(i) == "dtime") continue;
        if(record.fieldName(i) == "deleted") continue;
        if(record.fieldName(i) == "instanced") continue;
        if(record.fieldName(i) == "user_id") continue;
        if(record.fieldName(i) == "last_instance") continue;
        t_fieldList << record.fieldName(i);
        t_fieldData << record.field(i).value();
    };
}

void object::touch(quint64 usrid)
{
    QSqlQuery q = nd::db::prepare(QString("UPDATE %1 SET mtime = CURRENT_TIMESTAMP, user_id = %2 WHERE id = %3")
                                  .arg(this->tablename()).arg(usrid).arg(id_db), t_onFallback);
    q.next();
}
