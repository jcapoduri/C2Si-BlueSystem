#ifndef BUSINESS_H
#define BUSINESS_H

#include "interface.h"
#include "client.h"
#include "user.h"
#include "books.h"
#include "anillado.h"

class workorder;
class business : public nd::interface
{
public:
    business(quint64 id = 0);
    business(const business & other);
    business & operator =(const business & other);
    ~business();

    //db interface
    QVariant    fields(int at, bool toShow);
    bool        setFieldValue(int at, QVariant value);
    QString     tablename(){ return t_tablename; }

    bool        commit(quint64 usrid);
    bool        erase(quint64 usrid);
    bool        update();
    bool        updateUsers();
    bool        update(QSqlRecord record);


    //setters
    void    setName(QString value){ t_name = value; }
    void    setAddress(QString value){ t_address = value; }
    void    setOwner(QString value){ t_owner = value; }
    void    setEmail(QString value){ t_email = value; }
    void    setTelephone(QString value){ t_telephone = value; }
    void    setSfvalue(double value){ t_sfvalue =  value; }
    void    setDfvalue(double value){ t_dfvalue =  value; }
    void    setImpsfvalue(double value){ t_imp_sfvalue =  value; }
    void    setImpdfvalue(double value){ t_imp_dfvalue =  value; }
    void    setColoursfvalue(double value){ t_col_sfvalue =  value; }
    void    setColourdfvalue(double value){ t_col_dfvalue =  value; }
    void    impcolorsfvalue(double value){ t_imp_col_sfvalue =  value; }
    void    impcolordfvalue(double value){ t_imp_col_dfvalue =  value; }

    //getters
    QString name(){ return t_name; }
    QString address(){ return t_address; }
    QString owner(){ return t_owner; }
    QString email(){ return t_email; }
    QString telephone(){ return t_telephone; }
    double  sfvalue(){ return t_sfvalue; }
    double  dfvalue(){ return t_dfvalue; }
    double  impsfvalue(){ return t_imp_sfvalue; }
    double  impdfvalue(){ return t_imp_dfvalue; }
    double  coloursfvalue(){ return t_col_sfvalue; }
    double  colourdfvalue(){ return t_col_dfvalue; }
    double  impcolorsfvalue(){ return t_imp_col_sfvalue; }
    double  impcolordfvalue(){ return t_imp_col_dfvalue; }

    //users
    int     usersCount(){ return t_validUsers.count(); }
    bool    addUser(user *usr){ if(t_validUsers.contains(usr)) return false; else t_validUsers.append(usr);}
    bool    modUser(user *usr){ if(!t_validUsers.contains(usr)) return false; else {t_validUsers.removeOne(usr);t_validUsers.append(usr);}; }
    bool    delUser(user *usr){ if(!t_validUsers.contains(usr)) return false; else t_validUsers.removeOne(usr);}
    bool    containsUser(user* usr){ qDebug() << "containsUser: " << t_validUsers.contains(usr); return t_validUsers.contains(usr); }
    user*   userAt(int i){ return t_validUsers.at(i); }

    //books
    int     booksCount(){ return t_books.count(); }
    bool    addbooks(books *bks){ if(t_books.contains(bks)) return false; else t_books.append(bks);}
    bool    modbooks(books *bks){ if(!t_books.contains(bks)) return false; else {t_books.removeOne(bks);t_books.append(bks);}; }
    bool    delbooks(books *bks){ if(!t_books.contains(bks)) return false; else t_books.removeOne(bks);}
    bool    removeBooks(books *bks);
    books*  booksAt(int i){ return t_books.at(i); }

    //anillado
    int     anilladoCount(){ return t_anillados.count(); }
    bool    addanillado(anillado *bks){ if(t_anillados.contains(bks)) return false; else {t_anillados.append(bks); return true; };}
    bool    modanillado(anillado *bks){ if(!t_anillados.contains(bks)) return false; else {t_anillados.removeOne(bks);t_anillados.append(bks);}; }
    bool    delanillado(anillado *bks){ if(!t_anillados.contains(bks)) return false; else t_anillados.removeOne(bks);}
    bool    removeAnillado(anillado *bks);
    anillado*  anilladoAt(int i){ return t_anillados.at(i); }

    //books*  retrieveBookById(books *parent, quint64 id);
    //specials
//    static QList<workorder> retrieveJobs(QDateTime from, QDateTime to);
//    static QList<workorder> retrieveJobs(QString clientName);
//    static QList<workorder> retrieveJobs(client & cli);
    //static QList<workorder> retrieveJobs(QString filter);
    //services
    QList<books*>   retrieveBooks();
    books*          retrieveBookById(quint64 id);

protected:
    books*          retrieveBookById(books* parent, quint64 id);
    bool            removeBooks(books* parent, books *bks);
    QString t_name;
    QString t_address;
    QString t_owner;
    QString t_email;
    QString t_telephone;
    QList<user*> t_validUsers;
    QList<books*> t_books;
    //QList<folder>   t_folders;
    QList<anillado*> t_anillados;

    double t_sfvalue;
    double t_dfvalue;
    double t_imp_sfvalue;
    double t_imp_dfvalue;
    double t_col_sfvalue;
    double t_col_dfvalue;
    double t_imp_col_sfvalue;
    double t_imp_col_dfvalue;
};

#endif // BUSINESS_H
