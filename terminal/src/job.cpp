#include "job.h"
#include "db.h"
#include "relation.h"

job::job(quint64 id) : nd::interface(id)
{
    t_tablename = "jobs";
    t_fieldList << "date" << "hour" << "filetitle" << "book" << "kind" << "done" << "ignore" << "userowner" << "business";
    t_instanced = false;
    t_works << new workorder();
    t_fileTitle = "";
    t_books = 0;
    t_userowner = 0;
    t_business = 0;
}

job::job(const job &other) : nd::interface(0)
{
    t_tablename = "jobs";
    t_fieldList << "date" << "hour" << "filetitle" << "book" << "kind" << "done" << "ignore" << "userowner" << "business";
    t_instanced = false;
    t_fileTitle = "";
    t_userowner = 0;
    if(other.t_userowner) {
        t_userowner = new user(other.t_userowner->internalID());
    };
    t_business = other.t_business;

    t_date = other.t_date;
    t_hour = other.t_hour;
    t_fileTitle = other.t_fileTitle;
    t_books = 0;
    if(other.t_books) t_books = new books(*(other.t_books));
    t_kind = other.t_kind;
    t_done = other.t_done;
    t_ignore = other.t_ignore;
    qDebug() << "to clone workorder";
    workorder *w;
    foreach(w, other.t_works){
        qDebug() << "to clone workorder";
        t_works << new workorder(*w);
        qDebug() << "to clone workorder";
    };
}

job::~job()
{
    workorder *w;
    while(!t_works.isEmpty()){
        w = t_works.takeFirst();
        delete w;
    };
    if(t_userowner != 0){ delete t_userowner; };
    if(t_books != 0){ delete t_books; };
}

bool job::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_date = value.toDate();
            ok = t_date.isValid();
            break;
        case 1:
            t_hour = value.toTime();
            ok = t_hour.isValid();
            break;
        case 2:
            t_fileTitle = value.toString();
            break;
        case 3:
            if(t_books != 0) delete t_books;
            t_books = new books(value.toInt(&ok));
            if(ok) t_books->update();
            break;
        case 4:
            t_kind = (kindOfJob)value.toInt(&ok);
            break;
        case 5:
            t_done = value.toBool();
            break;
        case 6:
            t_ignore = value.toBool();
            break;
        case 7:
            if(t_userowner) delete t_userowner;
            t_userowner = new user(value.toInt(&ok));
            if(ok) t_userowner->update();
            break;
        case 8:
            if(t_business) delete t_business;
            t_business = new business(value.toInt(&ok));
            break;
            //if(ok) t_userowner->update();
        default:
            ok = false;
            break;
    };
    //qDebug() << "job:" << at << ok << value;
    return ok;
}

QVariant job::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_date;
            break;
        case 1:
            return t_hour;
            break;
        case 2:
            return t_fileTitle;
            break;
        case 3:
            if(t_books != 0){
                if(toShow) return t_books->toString();
                return t_books->internalID();
            }else{
                if(toShow) return "";
                return 0;
            };
            break;
        case 4:
            if(toShow){
                if(t_kind == fromClient) return "del cliente";
                if(t_kind == fromFile) return "desde archivo";
                if(t_kind == fromBooks) return "de lista";
            }else{
                return t_kind;
            };
            break;
        case 5:
            return t_done;
            break;
        case 6:
            return t_ignore;
            break;
        case 7:
            if(t_userowner == 0) return 0;
            return t_userowner->internalID();
            break;
        case 8:
            if(t_business == 0) return 0;
            return t_business->internalID();
            break;
        default:
            return QVariant();
            break;
    };
}

bool job::commit(quint64 usrid)
{
    bool ok = nd::interface::commit(usrid);
    if(ok){        
        workorder *w;
        /*for(int i = 0; i < t_works.count(); i++)*/
        foreach(w, t_works){
            //w = t_works.at(i);
            ok = ok and w->commit(usrid);
            qDebug() << w << " workorder: " << w->internalID() << ok;
        };
        if(ok){
            relationship<job, workorder> rel = relationship<job, workorder>::fromFather(this);
            rel.updateRelation(this, t_works);
            ok = rel.commit(usrid);
        };
    };
    return ok;
    //nd::connection::instance()->exec("");
}

bool job::update()
{
    bool ok = nd::interface::update();
    if(!t_works.isEmpty()){
        qDeleteAll(t_works.begin(), t_works.end());
        t_works.clear();
    };
    if(ok){
        relationship<job, workorder> rel = relationship<job, workorder>::fromFather(this);
        t_works = rel.toSonPtrList();
        workorder *w;
        foreach(w, t_works) ok = ok && w->update();
    }else{
        qDebug() << "fallo job update";
    };
    return ok;
}

bool job::update(QSqlRecord record)
{
    bool ok = nd::interface::update(record);
    if(!t_works.isEmpty()){
        qDeleteAll(t_works.begin(), t_works.end());
        t_works.clear();
    };
    if(ok){
        relationship<job, workorder> rel = relationship<job, workorder>::fromFather(this);
        t_works = rel.toSonPtrList();
        workorder *w;
        foreach(w, t_works) ok = ok && w->update();
    };
    return ok;
}

bool job::erase(quint64 usrid)
{
    bool ok = nd::interface::erase(usrid);
    workorder *w;
    for(int i = 0; i < t_works.count(); i++){
        w = t_works.at(i);
        ok = ok && w->erase(usrid);
    };
    t_works.clear();
   /* if(ok){
        relationship<business, user> rel = relationship<business, user>::fromFather(this);
        //ok = rel.erase(usrid);
        //t_validUsers = rel.toSonList();
    };
    return ok;*/
}

job *job::fromWorkorder(workorder *w)
{
    job* _toRet = 0;
    QSqlQuery q = nd::connection::instance()->select(QString("SELECT jobs FROM jobs_workorders WHERE workorders = %1").arg(w->internalID()));
    if(q.next()){
        _toRet = new job(q.record().field("jobs").value().toInt());
        if(!_toRet->update()){
            delete _toRet;
            _toRet = 0;
        };
    };
    return _toRet;
}

