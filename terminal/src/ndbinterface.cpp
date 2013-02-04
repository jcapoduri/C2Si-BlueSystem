#include "ndbinterface.h"
#include "ndbobject.h"

using namespace nd;

/*QString dbInterface::t_tablename = "baseobject";
bool    dbInterface::t_instanced = false;*/
void dbInterface::update(nd::dbObject & obj){
    for(int i  = 0; i < this->fieldsCount(); i++){
        int q = obj.fieldAt(t_fieldList.at(i));
        setFieldValue(q, obj.fields(q));
        //setFieldValue(i, obj.fields(obj.fieldAt(t_fieldList.at(i))));
        //this->setFieldValue(obj.fields(obj.fieldAt(t_fieldList.at(i))), obj.fields(i));
    };
}

void  dbInterface::commit(quint64 usrid){
    QString query;
    if(id_db == 0){
        QStringList names, values;
        query = "INSERT INTO %1 (%2) VALUES (%3)";
        bool ok;
        QVariant v;
        for(int i = 0; i < fieldsCount(); i++){
            names << "`" + fieldName(i) + "`";
            v = fields(i);
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
            };
        };
        query = query.arg(/*t_tablename*/tablename()).arg(names.join(", ")).arg(values.join(", "));
    }else{
        QStringList names;
        query = "UPDATE %1 SET %2 WHERE id = %3";
        bool ok;
        QVariant v;
        for(int i = 0; i < fieldsCount(); i++){
            v = fields(i);
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
            };
        };
        query = query.arg(/*t_tablename*/tablename()).arg(names.join(", ")).arg(id_db);
    };
    nd::connection::instance()->exec(query);
    if(id_db == 0) id_db = nd::connection::instance()->lastId();
    else touch(usrid);
}
void dbInterface::update(){
    /*QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE id = %2")
                         .arg(t_tablename).arg(id_db));
    if(query.next()) update(query.record());*/
    if(id_db == 0) return;
    //qDebug() << this->getTablename();
    //qDebug() << t_tablename;
    qDebug() << tablename();
    qDebug() << QString("SELECT * FROM %1 WHERE id = %2").arg(this->tablename()).arg(id_db);
    QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE id = %2").arg(this->tablename()).arg(id_db));
    if(query.next()){
        for(int i = 0; i < fieldsCount(); i++){
            setFieldValue(i, query.record().field(fieldName(i)).value().toString());
        };
        nd::dbInterface::update(query.record());
    };
}

void dbInterface::update(QSqlRecord record){
    id_db = record.field("id").value().toInt();
    t_ctime = record.field("ctime").value().toDateTime();
    t_mtime = record.field("mtime").value().toDateTime();
    t_dtime = record.field("dtime").value().toDateTime();
    t_deleted = record.field("deleted").value().toBool();
    t_instanced = record.field("instanced").value().toBool();
    t_user = record.field("user_id").value().toInt();
    for(int i = 0; i < fieldsCount(); i++){
        setFieldValue(i, record.field(fieldName(i)).value());
    };
}
void dbInterface::erase(quint64 usrid){
    nd::connection::instance()->exec(QString("UPDATE %1 SET deleted = TRUE, dtime = CURRENT_TIMESTAMP, user_id = %2 WHERE id = %3")
                                     .arg(this->tablename()).arg(usrid).arg(id_db));
}
void dbInterface::touch(quint64 usrid){
    nd::connection::instance()->exec(QString("UPDATE %1 SET mtime = CURRENT_TIMESTAMP, user_id = %2 WHERE id = %3")
                                     .arg(this->tablename()).arg(usrid).arg(id_db));
}
