#ifndef USER_H
#define USER_H
#include "object.h"

class user : public nd::object
{
    Q_OBJECT
public:
    explicit user(QJsonValue & initdata, QObject *parent = 0);
    user();

    //setters
    void        setUsername(QString value);
    void        setName(QString value);
    void        setLastname(QString value);
    void        setPassword(QString value);
    void        setShortpassword(QString value);
    void        setBirthdate(QDate value);
    void        setEmail(QString value);
    void        setTelephone(QString value);
    void        setActive(bool value);
    void        setAdmin(bool value);

    //getters
    QString     username();
    QString     name();
    QString     lastname();
    QString     password();
    QString     shortpassword();
    QDate       birthdate();
    QString     email();
    QString     telephone();
    bool        isAdmin();
    bool        isActive();
    
signals:
    
public slots:
    
};
Q_DECLARE_METATYPE(user)
Q_DECLARE_METATYPE(user*)
Q_DECLARE_METATYPE(QList<user*>)
Q_DECLARE_METATYPE(QList<user*>*)

#endif // USER_H
