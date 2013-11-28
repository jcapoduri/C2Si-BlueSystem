#ifndef CLIENTS_H
#define CLIENTS_H

#include "object.h"

class client : public nd::object
{
    Q_OBJECT
public:
    client(QJsonValue initdata, QObject* parent = 0);
    client();

    //setters
    void    setName(QString value);
    void    setEmail(QString value);

    //getters
    QString name();
    QString email();
};

Q_DECLARE_METATYPE(client)
Q_DECLARE_METATYPE(client*)
Q_DECLARE_METATYPE(QList<client*>)
Q_DECLARE_METATYPE(QList<client*>*)

#endif // CLIENTS_H
