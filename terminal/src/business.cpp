#include "business.h"
#include "relation.h"
#include "connection.h"
#include "db.h"

using namespace nd;

business::business(quint64 id) : interface(id)
{
    t_tablename = "business";
    t_fieldList << "name" << "address" << "owner" << "email" << "telephone";
    t_fieldList << "sfvalue" << "dfvalue" << "isfvalue" << "idfvalue" << "csfvalue" << "cdfvalue";
    t_fieldList << "icsfvalue" << "icdfvalue";
    t_instanced = false;

    t_name = "";
    t_address = "";
    t_owner = "";
    t_email = "";
    t_telephone = "";

    t_sfvalue = 0;
    t_dfvalue = 0;
    t_imp_sfvalue = 0;
    t_imp_dfvalue = 0;
    t_col_sfvalue = 0;
    t_col_dfvalue = 0;
    t_imp_col_sfvalue = 0;
    t_imp_col_dfvalue = 0;
}

business::business(const business &other) : interface(0)
{
    t_tablename = "business";
    t_fieldList << "name" << "address" << "owner" << "email" << "telephone";
    t_fieldList << "sfvalue" << "dfvalue" << "isfvalue" << "idfvalue" << "csfvalue" << "cdfvalue";
    t_fieldList << "icsfvalue" << "icdfvalue";
    t_instanced = false;
    id_db = other.id_db;

    t_name = other.t_name;
    t_address = other.t_address;
    //t_owner = 0;
    /*if(other.t_owner)*/ t_owner = other.t_owner;
    t_email = other.t_email;
    t_telephone = other.t_telephone;

    t_sfvalue = other.t_sfvalue;
    t_dfvalue = other.t_dfvalue;
    t_imp_sfvalue = other.t_sfvalue;
    t_imp_dfvalue = other.t_dfvalue;
    t_col_sfvalue = other.t_col_sfvalue;
    t_col_dfvalue = other.t_col_dfvalue;
    t_imp_col_sfvalue = other.t_imp_col_sfvalue;
    t_imp_col_dfvalue = other.t_imp_col_dfvalue;

    books       *bk;
    anillado    *an;
    user        *usr;
    //foreach(bk, other.t_books) t_books << new books(*bk);
    for(int i = 0; i < other.t_books.size(); i++){
        bk = other.t_books.at(i);
        t_books << new books(*bk);
    };
    foreach(an, other.t_anillados) t_anillados << new anillado(*an);
    foreach(usr, other.t_validUsers) t_validUsers << new user(*usr);
}

business &business::operator =(const business &other)
{
    id_db = other.id_db;

    t_name = other.t_name;
    t_address = other.t_address;
    //t_owner = 0;
    /*if(other.t_owner)*/ t_owner = other.t_owner;
    t_email = other.t_email;
    t_telephone = other.t_telephone;

    t_sfvalue = other.t_sfvalue;
    t_dfvalue = other.t_dfvalue;
    t_imp_sfvalue = other.t_sfvalue;
    t_imp_dfvalue = other.t_dfvalue;
    t_col_sfvalue = other.t_col_sfvalue;
    t_col_dfvalue = other.t_col_dfvalue;
    t_imp_col_sfvalue = other.t_imp_col_sfvalue;
    t_imp_col_dfvalue = other.t_imp_col_dfvalue;

    books       *bk;
    anillado    *an;
    user        *usr;
    //foreach(bk, other.t_books) t_books << new books(*bk);
    for(int i = 0; i < other.t_books.size(); i++){
        bk = other.t_books.at(i);
        t_books << new books(*bk);
    };
    foreach(an, other.t_anillados) t_anillados << new anillado(*an);
    foreach(usr, other.t_validUsers) t_validUsers << new user(*usr);
    return *this;
}

business::~business()
{
    //nd::~interface();
    //qDebug() << "borrar business";
    if(!t_validUsers.isEmpty()) qDeleteAll(t_validUsers.begin(), t_validUsers.end());
    //qDebug() << "after users";
    if(!t_books.isEmpty())qDeleteAll(t_books.begin(), t_books.end());
    //qDebug() << "after books";
    if(!t_anillados.isEmpty()) qDeleteAll(t_anillados.begin(), t_anillados.end());
    //qDebug() << "end borrar business";
}

QVariant business::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_name;
            break;
        case 1:
            return t_address;
            break;
        case 2:
            return t_owner;
            break;
        case 3:
            return t_email;
            break;
        case 4:
            return t_telephone;
            break;
        case 5:
            return t_sfvalue;
            break;
        case 6:
            return t_dfvalue;
            break;
        case 7:
            return t_imp_sfvalue;
            break;
        case 8:
            return t_imp_dfvalue;
            break;
        case 9:
            return t_col_sfvalue;
            break;
        case 10:
            return t_col_dfvalue;
            break;
        case 11:
            return t_imp_col_sfvalue;
            break;
        case 12:
            return t_imp_col_dfvalue;
            break;
        default:
            return QVariant();
    };
}

bool business::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_name = value.toString();
            break;
        case 1:
            t_address = value.toString();
            break;
        case 2:
            t_owner = value.toString();
            break;
        case 3:
            t_email = value.toString();
            break;
        case 4:
            t_telephone = value.toString();
            break;
        case 5:
            t_sfvalue = value.toDouble(&ok);
            break;
        case 6:
            t_dfvalue = value.toDouble(&ok);
            break;
        case 7:
            t_imp_sfvalue = value.toDouble(&ok);
            break;
        case 8:
            t_imp_dfvalue = value.toDouble(&ok);
            break;
        case 9:
            t_col_sfvalue = value.toDouble(&ok);
            break;
        case 10:
            t_col_dfvalue = value.toDouble(&ok);
            break;
        case 11:
            t_imp_col_sfvalue = value.toDouble(&ok);
            break;
        case 12:
            t_imp_col_dfvalue = value.toDouble(&ok);
            break;
        default:
            ok = false;
    };
    return ok;
}

bool business::commit(quint64 usrid)
{
    bool ok = nd::interface::commit(usrid);
    if(ok){
        relationship<business, user> rel = relationship<business, user>::fromFather(this);
        rel.updateRelation(this, t_validUsers);
        ok = rel.commit(usrid);
        if(ok){
            relationship<business, books> rel2 = relationship<business, books>::fromFather(this);
            rel2.updateRelation(this, t_books);
            ok = rel2.commit(usrid);
            if(ok){
                relationship<business, anillado> rel3 = relationship<business, anillado>::fromFather(this);
                rel3.updateRelation(this, t_anillados);
                ok = rel3.commit(usrid);
            }
        };
    };
    return ok;
}

bool business::erase(quint64 usrid)
{
    bool ok = nd::interface::erase(usrid);
    t_validUsers.clear();
    if(ok){
        relationship<business, user> rel = relationship<business, user>::fromFather(this);
        //ok = rel.erase(usrid);
        //t_validUsers = rel.toSonList();
    };
    return ok;
}

bool business::update()
{
    bool ok = nd::interface::update();
    t_validUsers.clear();
    if(ok){
        relationship<business, user> rel = relationship<business, user>::fromFather(this);
        t_validUsers = rel.toSonPtrList();
        relationship<business, books> rel2 = relationship<business, books>::fromFather(this);
        t_books = rel2.toSonPtrList();
        relationship<business, anillado> rel3 = relationship<business, anillado>::fromFather(this);
        //qDebug() << "business anillado: " << rel3.count();
        t_anillados = rel3.toSonPtrList();

        /*load books*/
        /*books b(0);
        books* _bk;
        books* _bk2;
        QList<books*> _lst_bk;
        QSqlQuery q = nd::connection::instance()->select(QString("SELECT %1 FROM books WHERE id in (SELECT books FROM business_books WHERE business = %2) ORDER BY id_parent").arg(b.allFieldNames()).arg(this->internalID()));
        while(q.next()){
            _bk = new books();
            _bk->updateFromRecord(q.record());
            t_books << _bk;
            _lst_bk << _bk;
        };

        q = nd::connection::instance()->select(QString("SELECT * FROM books WHERE id_parent IN ( SELECT books FROM business_books WHERE business = %1)").arg(this->internalID()));
        while(!_lst_bk.isEmpty()){
            _bk = _lst_bk.takeFirst();
            if(q.first()){
                do{
                    if(q.record().field("id_parent").value().toInt() == _bk->internalID()){
                        _bk2 = new books();
                        _bk2->updateFromRecord(q.record());
                        _bk->addBook(_bk2);
                        _lst_bk << _bk2;
                    };
                }while(q.next());
            };
        };*/

    };
    return ok;
}

bool business::updateUsers()
{
    t_validUsers.clear();
    relationship<business, user> rel = relationship<business, user>::fromFather(this);
    t_validUsers = rel.toSonPtrList();
    return true;
}

bool business::update(QSqlRecord record)
{
    bool ok = nd::interface::update(record);
    t_validUsers.clear();
    if(ok){
        relationship<business, user> rel = relationship<business, user>::fromFather(this);
        t_validUsers = rel.toSonPtrList();
        relationship<business, books> rel2 = relationship<business, books>::fromFather(this);
        t_books = rel2.toSonPtrList();
        relationship<business, anillado> rel3 = relationship<business, anillado>::fromFather(this);
        t_anillados = rel3.toSonPtrList();
        // load with one select
        /*QList<books*> all;
        QSqlQuery q = nd::connection::select(QString("SELECT books.* FROM books JOIN business_books ON books.id = business_books.books WHERE business = %1 ORDER BY id_parent").arg(id_db));*/
        /*books b(0);
        books* _bk;
        books* _bk2;
        QList<books*> _lst_bk;
        QSqlQuery q = nd::connection::instance()->select(QString("SELECT %1 FROM books WHERE id in (SELECT books FROM business_books WHERE business = %2) ORDER BY id_parent").arg(b.allFieldNames()).arg(this->internalID()));
        while(q.next()){
            _bk = new books();
            _bk->updateFromRecord(q.record());
            t_books << _bk;
            _lst_bk << _bk;
        };

        q = nd::connection::instance()->select(QString("SELECT * FROM books WHERE id_parent IN ( SELECT books FROM business_books WHERE business = %1)").arg(this->internalID()));
        while(!_lst_bk.isEmpty()){
            _bk = _lst_bk.takeFirst();
            if(q.first()){
                do{
                    if(q.record().field("id_parent").value().toInt() == _bk->internalID()){
                        _bk2 = new books();
                        _bk2->updateFromRecord(q.record());
                        _bk->addBook(_bk2);
                        _lst_bk << _bk2;
                    };
                }while(q.next());
            };
        };*/
    };
    return ok;
}

bool business::removeBooks(books *bks)
{
    if(!t_books.contains(bks)) return false; else {t_books.removeOne(bks); return true; }
}

bool business::removeAnillado(anillado *bks)
{
    if(!t_anillados.contains(bks)) return false; else {t_anillados.removeOne(bks); return true; }
}

QList<books *> business::retrieveBooks()
{
    return t_books;
}

books *business::retrieveBookById(quint64 id)
{
    books* toRes = 0;
    int i = 0;
    while(i < t_books.count() && toRes == 0){
        toRes = retrieveBookById(t_books.at(i), id);
        i++;
    };
    return toRes;
}

books *business::retrieveBookById(books *parent, quint64 id)
{
    if(parent->internalID() == id){
        return parent;
    }else{
        books* toRes = 0;
        int i = 0;
        while(i < parent->filesCount() && toRes == 0){
            if(parent->fileAt(i)->internalID() == id){
                toRes = parent->fileAt(i);
            }else{
                toRes = retrieveBookById(parent->fileAt(i), id);
                i++;
            };
        };
        return toRes;
    };
}
