#include "user.h"

user::user(quint64 id) : nd::interface(id)
{
    t_tablename = "users";
    t_fieldList << "username" << "name" << "lastname" << "password" << "shortpassword" << "birthdate" << "email" << "telephone";
    t_fieldList << "admin" << "active";
    t_instanced = false;
}

user::user(const user &other)
{
    t_tablename = "users";
    t_fieldList << "username" << "name" << "lastname" << "password" << "shortpassword" << "birthdate" << "email" << "telephone";
    t_fieldList << "admin" << "active";
    t_instanced = false;
    id_db = other.id_db;
    t_username = other.t_username;
    t_name = other.t_name;
    t_lastname = other.t_lastname;
    t_password = other.t_password;
    t_shortpassword = other.t_shortpassword;
    t_birthdate = other.t_birthdate;
    t_email = other.t_email;
    t_telephone = other.t_telephone;
    t_active = other.t_active;
    t_admin = other.t_admin;
}

QVariant user::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_username;
            break;
        case 1:
            return t_name;
            break;
        case 2:
            return t_lastname;
            break;
        case 3:
            return (toShow ? "<Secreto>" : t_password);
            break;
        case 4:
            return (toShow ? "<Secreto>" : t_shortpassword);
            break;
        case 5:
            return t_birthdate;
            break;
        case 6:
            return t_email;
            break;
        case 7:
            return t_telephone;
            break;
        case 8:
            if(toShow){
                return (t_admin ? "Si" : "No");
            }else{
                return t_admin;
            };
            break;
        case 9:
            if(toShow){
                return (t_active ? "Si" : "No");
            }else{
                return t_active;
            };
            break;
        default:
            return QVariant();
    };
}

bool user::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_username = value.toString();
            break;
        case 1:
            t_name = value.toString();
            break;
        case 2:
            t_lastname = value.toString();
            break;
        case 3:
            t_password = value.toString();
            break;
        case 4:
            t_shortpassword = value.toString();
            break;
        case 5:
            t_birthdate = value.toDate();
            break;
        case 6:
            t_email = value.toString();
            break;
        case 7:
            t_telephone = value.toString();
            break;
        case 8:
            t_admin = value.toBool();
            break;
        case 9:
            t_active = value.toBool();
            break;
        default:
            ok = false;
    };
    return ok;
}

bool user::commit(quint64 usrid)
{
    bool ok = nd::interface::commit(usrid);
    if(ok){
        ok = nd::connection::instance()->exec(QString("UPDATE users SET `password` = DES_ENCRYPT(`password`, 'lokithor'), `shortpassword` = DES_ENCRYPT(`shortpassword`, 'lokithor') WHERE id = %1").arg(id_db));
    };
    return ok;
}

bool user::update()
{
    bool ok = nd::interface::update();
    if(ok){
        QSqlQuery q = nd::connection::instance()->select(QString("SELECT DES_DECRYPT(`password`, 'lokithor') as p, DES_DECRYPT(`shortpassword`, 'lokithor') as s FROM users WHERE id = %1").arg(id_db));
        if(q.next()){
            t_password = q.record().field("p").value().toString();
            t_shortpassword = q.record().field("s").value().toString();
        }else ok = false;
    };
    return ok;
}


bool user::update(QSqlRecord record)
{
    bool ok = nd::interface::update(record);
    if(ok){
        QSqlQuery q = nd::connection::instance()->select(QString("SELECT DES_DECRYPT(`password`, 'lokithor') as p, DES_DECRYPT(`shortpassword`, 'lokithor') as s FROM users WHERE id = %1").arg(id_db));
        if(q.next()){
            t_password = q.record().field("p").value().toString();
            t_shortpassword = q.record().field("s").value().toString();
        }else ok = false;
    };
    return ok;
}

user *user::login(QString username, QString password)
{
    user *u = new user();
    QSqlQuery query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE deleted = 0 AND username = '%2' AND password = DES_ENCRYPT('%3', 'lokithor')").arg(u->tablename()).arg(username).arg(password));
    if(query.next()){
        u->update(query.record());
    }else{
        delete u;
        u = 0;
    };
    return u;

}

bool user::shortLogin(user *usr, QString password)
{
    return (usr->shortpassword() == password );
}

QString user::getUserName(quint16 usrid)
{
    QString name;
    QSqlQuery query = nd::connection::instance()->select(QString("SELECT name FROM users WHERE deleted = 0 AND id = %1").arg(usrid));
    if(query.next()){
        name = query.record().field("name").value().toString();
    }else{
        name = "";
    };
    return name;
}
