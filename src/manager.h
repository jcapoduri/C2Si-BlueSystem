#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QJsonDocument>
#include "solution.h"
#include "app.h"
#include "model.h"
#include "protoobject.h"
#include "bluebar.h"

class manager : public QObject
{
    Q_OBJECT
public:
    explicit manager(QJsonValue init_data, QObject *parent = 0);
    nd::model*  requireUser(QString user = "", QString pass = "");


signals:
    
public slots:
    void    setBar();


protected:
    nd::solution*   solution;
    nd::app*        app;
    bluebar*        bar;
    QList<nd::model*>   userCache;
};

#endif // MANAGER_H
