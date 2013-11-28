#ifndef BLUESYSTEMAPP_H
#define BLUESYSTEMAPP_H

#include <QObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QMap>
#include <QString>
#include "ajax.h"

class bluesystemApp : public QObject
{
    Q_OBJECT
public:
    explicit bluesystemApp(QJsonValue & initdata, QObject *parent = 0);

    void    setApp(QString appname);
    ajax*   jqXHR();

    QJsonObject get(QString obj_name, quint16 id);
    quint16     post(QString obj_name, QJsonObject & obj);
    bool        put(QString obj_name, QJsonObject & obj, quint16 id);
    bool        deleteResource(QString obj_name, quint16 id);

    QJsonObject createObject(QString name);
    
signals:
    
public slots:

protected:
    QString                     appname;
    QJsonValue                  _raw_data;
    ajax*                       _storage;
    QMap<QString, QJsonObject>  _objectsMap;
    QMap<QString, QJsonObject>  _relationsMap;
    QMap<QString, QJsonObject>  _storageMap;
    QJsonValue                  _meta;
    QJsonValue                  _config;
    QJsonValue                  _objects;
    QJsonValue                  _relations;
    QJsonValue                  _storages;
    QJsonValue                  _app;
    QJsonValue                  _apps;
    QJsonValue                  _map;
};

#endif // BLUESYSTEMAPP_H
