#include "books.h"
#include "db.h"

books::books(quint64 id) : nd::interface(id)
{
    t_tablename = "books";
    t_instanced = false;
    t_fieldList << "number" << "name" << "scopies" << "dcopies" << "anillado" << "id_parent";
    //t_fieldList << "number" << "name" << "scopies" << "dcopies" << "anillado" << "id_parent";
    t_anillado = 0;
    t_parent = 0;
    t_number = 0;
    t_simplecopies = 0;
    t_doublecopies = 0;
    t_name = "";
}

books::books(const books &other)
{
    t_tablename = "books";
    t_instanced = false;
    t_fieldList << "number" << "name" << "scopies" << "dcopies" << "anillado" << "id_parent";
    //t_fieldList << "number" << "name" << "scopies" << "dcopies" << "anillado" << "id_parent";
    t_anillado = 0;
    t_parent  = 0;
    if(other.t_anillado) t_anillado = new anillado(*(other.t_anillado));
    if(other.t_parent) t_parent = new books(other.t_parent->internalID());
    id_db = other.id_db;

    t_name = other.t_name;
    t_number = other.t_number;
    t_simplecopies = other.t_simplecopies;
    t_doublecopies = other.t_doublecopies;
    books *bk;
    foreach(bk, other.t_folder){
        books *b = new books(*bk);
        b->setParent(this);
        t_folder << b;
    }
}

books &books::operator =(const books &other)
{
    if(this != &other){
        t_anillado = 0;
        t_parent = 0;
        if(other.t_anillado) t_anillado = new anillado(*(other.t_anillado));
        if(other.t_parent) t_parent = new books(*(other.t_parent));
        id_db = other.id_db;

        t_name = other.t_name;
        t_number = other.t_number;
        t_simplecopies = other.t_simplecopies;
        t_doublecopies = other.t_doublecopies;
        books *bk;
        foreach(bk, other.t_folder){
            t_folder << new books(*bk);
        };
    };
    return *this;
}

books::~books()
{
    //qDebug() << internalID();
    //qDebug() << "delete bk1";
    //books* b;
    //qDebug() << "delete bk2";
    /*while(!t_folder.isEmpty()){
        b = t_folder.takeFirst();
        delete b;
    };*/
    if(!t_folder.isEmpty()) qDeleteAll(t_folder.begin(), t_folder.end());
    //qDebug() << "delete bk3" << (int)t_anillado;
    if(t_anillado != 0){
        delete t_anillado;
        t_anillado = 0;
    };
    /*if(t_parent != 0){
        delete t_parent;
        t_parent = 0;
    };*/
    //qDebug() << "delete bk4";
}

QVariant books::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_number;
            break;
        case 1:
            return t_name;
            break;
        case 2:
            return t_simplecopies;
            break;
        case 3:
            return t_doublecopies;
            break;
        case 4:        
            return t_anillado->internalID();
            break;
        case 5:
            qDebug() << "T_PARENT: " << t_parent;
            if(t_parent != 0){
                if(toShow) return t_parent->name();
                return t_parent->internalID();
                qDebug() << "internal ID: " << t_parent->internalID();
            }else return 0;
            break;
        default:
            return QVariant();
    };
}

bool books::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_number = value.toInt(&ok);
            break;
        case 1:
            t_name = value.toString();
            break;
        case 2:
            t_simplecopies = value.toInt(&ok);
            break;
        case 3:
            t_doublecopies = value.toInt(&ok);
            break;
        case 4:
            if(t_anillado != 0) delete t_anillado;
            t_anillado = new anillado(value.toLongLong(&ok));
            if(ok) ok = t_anillado->update();
            break;
        case 5:
            //if(t_parent != 0) delete t_parent;
            //t_parent = new books(value.toInt(&ok));
            break;
        default:
            ok = false;
    };
    return ok;
}

bool books::commit(quint64 usrid)
{
    bool ok = nd::interface::commit(usrid);
    if(ok){
        books* bk;
        for(int i = 0; i < t_folder.count(); i++){
            bk = t_folder[i];
            bk->setParent(this);
            ok = ok && bk->commit(usrid);
        };
    };
    return ok;
}

bool books::update()
{
    bool ok = nd::interface::update();
    if(ok){
        t_folder = nd::db::select<books>(QString("%1 = %2").arg(fieldName(5)).arg(this->internalID())).allPtr();
        books* bk;
        foreach (bk, t_folder) {
            bk->setParent(this);
        }
    };
    return ok;
}

bool books::update(QSqlRecord record)
{
    bool ok = nd::interface::update(record);
    if(ok){
        t_folder = nd::db::select<books>(QString("%1 = %2").arg(fieldName(5)).arg(this->internalID())).allPtr();
        books* bk;
        foreach (bk, t_folder) {
            bk->setParent(this);
        }
    };
    return ok;
}

bool books::updateFromRecord(QSqlRecord record)
{
    return nd::interface::update(record);
}

bool books::erase(quint64 usrid)
{
    bool ok = nd::interface::erase(usrid);
    return ok;
}

bool books::removeBook(books *bk)
{
    bool erased = false;
    if(t_folder.contains(bk)){
        books* bk = t_folder.at(t_folder.indexOf(bk));
        erased = bk->erase(0);
        if(erased) t_folder.removeAll(bk);
    }else{
        int i = 0;
        while(i < t_folder.count() && !erased){
            erased = removeBook(t_folder.at(i), bk);
            i++;
        };
        return erased;
    };
}

bool books::removeBook(books *parent, books *bk)
{
    int i = 0;
    bool erased = false;
    while(i < parent->filesCount() && !erased){
        if(bk->internalID() == parent->fileAt(i)->internalID()){
            books* bk = parent->fileAt(i);
            erased = bk->erase(0);
            if(erased) parent->delBook(bk);
        }else{
            erased = removeBook(parent->fileAt(i), bk);
        };
        i++;
    };
    return erased;
}
