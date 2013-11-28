#ifndef RINGING_H
#define RINGING_H

#include "object.h"

class ringing : public nd::object
{
    Q_OBJECT
public:
    explicit ringing(QJsonValue & initdata, QObject * parent = 0);
    
    void    setCost(double value);
    void    setName(QString value);

    double  cost();
    QString name();
signals:
    
public slots:
        
};

#endif // RINGING_H
