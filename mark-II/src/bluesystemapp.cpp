#include <QDebug>
#include <QJsonDocument>
#include <QDateTime>
#include "bluesystemapp.h"

bluesystemApp::bluesystemApp(QJsonValue & initdata, QObject *parent) : QObject(parent)
{
    QJsonObject tmp_obj;
    _raw_data = initdata;
    if (initdata.isObject()){
        tmp_obj = initdata.toObject();
        if (tmp_obj.contains("config")) _config = tmp_obj.value("config");
        if (tmp_obj.contains("meta")) _meta = tmp_obj.value("meta");
        if (tmp_obj.contains("objects")) _objects = tmp_obj.value("objects");
        if (tmp_obj.contains("relations")) _relations = tmp_obj.value("relations");
        if (tmp_obj.contains("storages")) _storages = tmp_obj.value("storages");
        if (tmp_obj.contains("apps")) _apps = tmp_obj.value("apps");
    };
}

void bluesystemApp::setApp(QString appname)
{
    QJsonArray      tmp_arr;
    QJsonValue      tmp_val;
    QJsonObject     tmp_obj;
    uint            len, i;

    this->appname = appname;
    _app = _apps.toObject().value(appname);

    //check each object and add a objects into the map
    tmp_arr = _objects.toArray();
    len = tmp_arr.count();
    for (i = 0; i < len; i++) {
        tmp_obj = tmp_arr.at(i).toObject();
        _objectsMap.insert(tmp_obj.value("name").toString(), tmp_obj);
    };

    //check each object and add a relation into the map
    tmp_arr = _relations.toArray();
    len = tmp_arr.count();
    for (i = 0; i < len; i++) {
        tmp_obj = tmp_arr.at(i).toObject();
        _relationsMap.insert(tmp_obj.value("name").toString(), tmp_obj);
    };

    tmp_arr = _storages.toArray();
    //qDebug() << QJsonDocument(tmp_arr).toJson();
    len = tmp_arr.count();
    for (i = 0; i < len; i++) {
        tmp_obj = tmp_arr.at(i).toObject();
        //qDebug() << QJsonDocument(tmp_obj).toJson();
        _storageMap.insert(tmp_obj.value("name").toString(), tmp_obj);
    };

    //check for storage and start it
    //qDebug() << QJsonDocument(_app.toObject().value("storage").toArray()).toJson();
    tmp_val = _app.toObject().value("storage").toArray().at(0);
    tmp_val = _storageMap.value(tmp_val.toString());
    _storage = new ajax(tmp_val, this);

    _map = _app.toObject().value("map");
}

ajax *bluesystemApp::jqXHR()
{
    return this->_storage;
}

QJsonObject bluesystemApp::get(QString obj_name, quint16 id)
{
    QJsonValue tmp_obj;
    tmp_obj = this->_storage->get(_map.toObject().value(obj_name).toString(), id);
    return tmp_obj.toObject();
}

quint16 bluesystemApp::post(QString obj_name, QJsonObject &obj)
{
    return this->_storage->post(_map.toObject().value(obj_name).toString(), obj);
}

bool bluesystemApp::put(QString obj_name, QJsonObject &obj, quint16 id)
{
    return this->_storage->put(_map.toObject().value(obj_name).toString(), id, obj);
}

bool bluesystemApp::deleteResource(QString obj_name, quint16 id)
{
    return this->_storage->deleteObj(_map.toObject().value(obj_name).toString(), id);
}

QJsonObject bluesystemApp::createObject(QString name)
{
    QJsonObject ret, tmp_obj;
    QJsonArray  tmp_arr;
    QJsonValue  tmp_val;
    int i, len;

    tmp_obj = this->_objectsMap.value(name);
    tmp_arr = tmp_obj.value("fields").toArray();
    qDebug() << tmp_arr;

    len = tmp_arr.count();

    for (i = 0; i < len; i++) {
        tmp_obj = tmp_arr.at(i).toObject();
        tmp_val = tmp_obj.value("value");
        qDebug() << "i: " << i << " -> " << tmp_obj;
        if (tmp_val.isUndefined()) {
            QString type = tmp_obj.value("type").toString();
            if (type == "string") ret.insert(tmp_obj.value("name").toString(), QJsonValue(QString()));
            if (type == "object") ret.insert(tmp_obj.value("name").toString(), QJsonValue());
            if (type == "date") ret.insert(tmp_obj.value("name").toString(), QJsonValue(QDate::currentDate().toString("yyyy-MM-dd")));
            if (type == "time") ret.insert(tmp_obj.value("name").toString(), QJsonValue(QTime::currentTime().toString("hh:mm:ss")));
            if (type == "number") ret.insert(tmp_obj.value("name").toString(), QJsonValue(0));
            if (type == "timestamp") ret.insert(tmp_obj.value("name").toString(), QJsonValue(QDateTime::currentDateTime().toString()));
            if (type == "bool") ret.insert(tmp_obj.value("name").toString(), QJsonValue(true));
            if (type == "enum") ret.insert(tmp_obj.value("name").toString(), QJsonValue(0));
            if (type == "array") ret.insert(tmp_obj.value("name").toString(), QJsonArray());
        } else {
            ret.insert(tmp_obj.value("name").toString(), tmp_val);
        };

    };
    qDebug() << ret;
    return ret;
}

