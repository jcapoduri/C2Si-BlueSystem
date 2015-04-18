#include "interface.h"
#include "object.h"
#include "db.h"
#include "logger.h"

using namespace nd;

/*QString interface::t_tablename = "baseobject";
bool    interface::t_instanced = false;*/
bool interface::update(nd::object & obj){
    int manyoks = t_fieldList.count();
    for(int i  = 0; i < this->fieldsCount(); i++){
        int q = obj.fieldAt(t_fieldList.at(i));
        if(setFieldValue(q, obj.fields(q))){ manyoks--; };
        //setFieldValue(i, obj.fields(obj.fieldAt(t_fieldList.at(i))));
        //this->setFieldValue(obj.fields(obj.fieldAt(t_fieldList.at(i))), obj.fields(i));
    };
    t_valid = (manyoks == 0);
    return t_valid;
}

interface::~interface()
{

}

bool interface::commit(quint64 usrid){
    QString query;
    if(id_db == 0){
        QStringList names, values;
        query = "INSERT INTO %1 (%2) VALUES (%3)";
        //bool ok;
        //QVariant v;
        names << "user_id";
        values << "?";
        for(int i = 0; i < fieldsCount(); i++){
            names << "`" + fieldName(i) + "`";
            /*v = fields(i);
            v.toDouble(&ok);
            if(ok){
                values << QString::number(v.toDouble());
            }else{
                //ok = v.canConvert(QVariant::DateTime);
                QDateTime d = v.toDateTime();
                if(d.isValid()){
                    values << "'" + v.toDateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
                }else{
                    values << "'" + v.toString() + "'";
                };
            };*/
            values << "?";
        };
        query = query.arg(/*t_tablename*/tablename()).arg(names.join(", ")).arg(values.join(", "));
    }else{
        QStringList names;
        query = "UPDATE %1 SET %2 WHERE id = %3";
        //bool ok;
        QVariant v;
        names << QString("`%1` = ?").arg("user_id");
        for(int i = 0; i < fieldsCount(); i++){
            /*v = fields(i);
            v.toDouble(&ok);
            if(ok){
                names <<  QString("`%1` = ").arg(fieldName(i)) + QString::number(v.toDouble());
            }else{
                QDateTime d = v.toDateTime();
                if(d.isValid()){
                    names << QString("`%1` = ").arg(fieldName(i)) + "'" + v.toDateTime().toString("yyyy-MM-dd hh:mm:ss") + "'";
                }else{
                    names << QString("`%1` = ").arg(fieldName(i)) + "'" + v.toString() + "'";
                };
            };*/
            names << QString("`%1` = ?").arg(fieldName(i));
        };
        query = query.arg(/*t_tablename*/tablename()).arg(names.join(", ")).arg(id_db);
    };
    //nd::connection::instance()->exec(query);
    QTime t;
    t.start();
    QSqlQuery q = nd::db::prepare(query, t_onFallback);
    int _prep = t.elapsed();
    q.addBindValue(usrid);
    for(int i = 0; i < fieldsCount(); i++) q.addBindValue(fields(i));
    int _bind = t.elapsed() - _prep;
    //t.restart();
    q.exec();    
    int _total = t.elapsed() - (_bind + _prep);
    nd::logger::log(q.lastQuery() + QString(" error: %1").arg(q.lastError().text()) + QString(" prep time: %1, bind time: %2 exec time: %3, total time: %4").arg(_prep).arg(_bind).arg(_total).arg(t.elapsed()));

    if(id_db == 0){
        id_db = q.lastInsertId().toInt();
    }else{
        touch(usrid);
    };
    t_valid = (id_db != 0);
    return t_valid;
}

bool interface::update(){
    if(id_db == 0) return false;
    QStringList names;
    names << "`id`";
    for(int i = 0; i < fieldsCount(); i++)
        names << QString("`%1`").arg(fieldName(i));

    QSqlQuery query = nd::connection::instance()->select(QString("SELECT %1 FROM %2 WHERE id = %3  AND deleted = 0").arg(names.join(", ")).arg(this->tablename()).arg(id_db), (t_onFallback ? nd::connection::fallbackdb() : nd::connection::maindb()));

    if(query.next()){
        t_valid = true;
        return t_valid && nd::interface::update(query.record());
    }else{
        t_valid = false;
        return t_valid;
    };
}

bool interface::update(QSqlRecord record){
    id_db = record.field("id").value().toInt();
    t_ctime = record.field("ctime").value().toDateTime();
    t_mtime = record.field("mtime").value().toDateTime();
    t_dtime = record.field("dtime").value().toDateTime();
    t_deleted = record.field("deleted").value().toBool();
    t_instanced = record.field("instanced").value().toBool();
    t_user = record.field("user_id").value().toInt();
    t_valid = true;    
    for(int i = 0; i < fieldsCount(); i++){
        t_valid = t_valid && setFieldValue(i, record.field(fieldName(i)).value());
    };
    return t_valid;
}
bool interface::erase(quint64 usrid){
    t_valid = false;
    return nd::connection::instance()->exec(QString("UPDATE %1 SET deleted = TRUE, dtime = CURRENT_TIMESTAMP, user_id = %2 WHERE id = %3")
                                            .arg(this->tablename()).arg(usrid).arg(id_db));
}

bool interface::unerase(quint64 usrid)
{
    //t_valid = false;
    return nd::connection::instance()->exec(QString("UPDATE %1 SET deleted = FALSE, dtime = '0000-00-00 00:00:00', user_id = %2 WHERE id = %3")
                                            .arg(this->tablename()).arg(usrid).arg(id_db));
}

bool interface::rise()
{
    if(id_db == 0) return false;
    QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE id = %2").arg(this->tablename()).arg(id_db), (t_onFallback ? nd::connection::fallbackdb() : nd::connection::maindb()));
    if(query.next()){
        t_valid = true;
        for(int i = 0; i < fieldsCount(); i++){
            t_valid = t_valid && setFieldValue(i, query.record().field(fieldName(i)).value().toString());
        };
        return t_valid && nd::interface::update(query.record());

    }else{
        t_valid = false;
        return t_valid;
    };
}

void interface::touch(quint64 usrid){
    nd::connection::instance()->exec(QString("UPDATE %1 SET mtime = CURRENT_TIMESTAMP, user_id = %2 WHERE id = %3")
                                     .arg(this->tablename()).arg(usrid).arg(id_db));
}
