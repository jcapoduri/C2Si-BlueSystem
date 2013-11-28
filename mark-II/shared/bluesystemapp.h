#ifndef BLUESYSTEMAPP_H
#define BLUESYSTEMAPP_H

#include <QJsonValue>
#include "app.h"

class bluesystemApp : public nd::app {
    Q_OBJECT
public:
    explicit bluesystemApp(QJsonValue & initdata, QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // BLUESYSTEMAPP_H
