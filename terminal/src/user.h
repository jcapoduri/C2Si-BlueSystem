#ifndef USER_H
#define USER_H
#include "interface.h"

class user : public nd::interface
{
public:
    user(quint64 id = 0);
    user(const user & other);
    ~user(){}
    //db interface
    QVariant    fields(int at, bool toShow);
    bool        setFieldValue(int at, QVariant value);
    QString     tablename(){ return t_tablename; }
    bool        commit(quint64 usrid = 0);
    bool        update();
    bool        update(QSqlRecord record);

    //setters
    void        setUsername(QString value){ t_username = value; }
    void        setName(QString value){ t_name = value; }
    void        setLastname(QString value){ t_lastname = value; }
    void        setPassword(QString value){ t_password = value; }
    void        setShortpassword(QString value){ t_shortpassword = value; }
    void        setBirthdate(QDate value){ t_birthdate = value; }
    void        setEmail(QString value){ t_email = value; }
    void        setTelephone(QString value){ t_telephone = value; }
    void        setActive(bool value){ t_active = value; }
    void        setAdmin(bool value){ t_admin = value; }
    //getters
    QString     username(){ return t_username; }
    QString     name(){ return t_name; }
    QString     lastname(){ return t_lastname; }
    QString     password(){ return t_password; }
    QString     shortpassword(){ return t_shortpassword; }
    QDate       birthdate(){ return t_birthdate; }
    QString     email(){ return t_email; }
    QString     telephone(){ return t_telephone; }
    bool        isAdmin(){ return t_admin; }
    bool        isActive(){ return t_active; }
    //statics
    static user*    login(QString username, QString password);
    static bool     shortLogin(user* usr, QString password);
    static QString  getUserName(quint16 usrid);
    bool operator==(const user &other) const { return internalID() == other.internalID(); }
protected:
    QString     t_username;
    QString     t_name;
    QString     t_lastname;
    QString     t_password;
    QString     t_shortpassword;
    QDate       t_birthdate;
    QString     t_email;
    QString     t_telephone;
    bool        t_active;
    bool        t_admin;
};
Q_DECLARE_METATYPE(user*);

#endif // USER_H
