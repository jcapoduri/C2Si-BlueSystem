#include "workorder.h"
#include "relation.h"

workorder::workorder(quint64 id) : interface(id)
{
    t_tablename = "workorders";
    t_fieldList << "description" << "costumername" << "observations" << "copies" << "conAnillado" << "doComplete";
    t_fieldList << "lista" << "entregado" << "deadline" << "simplefaz" << "doublefaz" << "simplefaztotal" << "doublefaztotal";
    t_fieldList << "senna" << "anillado" << "total" << "estado" << "howto" << "business";
    t_fieldList << "isimplefaz" << "idoublefaz" << "csimplefaz" << "cdoublefaz";
    t_fieldList << "isimplefaztotal" << "idoublefaztotal" << "csimplefaztotal" << "cdoublefaztotal";
    t_fieldList << "anilladoHowTo" << "ignore" << "userowner" << "outoforder";
    t_fieldList << "conAbrochado" << "howtoFlags";
    t_instanced = false;
    t_flag = false;
    t_descripcion = "";

    t_costumerName = "";
    t_observations = "";
    t_copies = 1;
    t_conAnillado = false;
    t_doComplete = true;
    t_lista = false;
    t_entregado = false;
    t_deadLine = QDateTime::currentDateTime();
    t_simpleFaz = 0;
    t_doubleFaz = 0;
    t_isimpleFaz = 0;
    t_idoubleFaz = 0;
    t_csimpleFaz = 0;
    t_cdoubleFaz = 0;
    t_simpleFazTotal = 0;
    t_doubleFazTotal = 0;
    t_isimpleFazTotal = 0;
    t_idoubleFazTotal = 0;
    t_csimpleFazTotal = 0;
    t_cdoubleFazTotal = 0;
    t_senna = 0;
    t_anillado = false;
    t_total = 0;
    t_estado = Waiting;
    t_howto = _likeThat;
    t_business = 0;
    t_howtoAnillado = Superior;
    t_ignore = false;
    t_userowner = 0;
    t_outoforder = 0;
    t_conAbrochado = false;
    t_howtoFlags = 0;
}

workorder::workorder(const workorder &other) : interface(0)
{
    t_tablename = "workorders";
    t_fieldList << "description" << "costumername" << "observations" << "copies" << "conAnillado" << "doComplete";
    t_fieldList << "lista" << "entregado" << "deadline" << "simplefaz" << "doublefaz" << "simplefaztotal" << "doublefaztotal";
    t_fieldList << "senna" << "anillado" << "total" << "estado" << "howto" << "business";
    t_fieldList << "isimplefaz" << "idoublefaz" << "csimplefaz" << "cdoublefaz";
    t_fieldList << "isimplefaztotal" << "idoublefaztotal" << "csimplefaztotal" << "cdoublefaztotal";
    t_fieldList << "anilladoHowTo" << "ignore" << "userowner" << "outoforder";
    t_fieldList << "conAbrochado" << "howtoFlags";
    t_instanced = false;
    t_flag = false;
    t_userowner = 0;
    t_business = 0;

    t_descripcion = other.t_descripcion;
    t_costumerName = other.t_costumerName;
    t_observations = other.t_observations;
    t_copies = other.t_copies;
    t_conAnillado = other.t_conAnillado;
    t_doComplete = other.t_doComplete;
    t_lista = other.t_lista;
    t_entregado = other.t_entregado;
    t_deadLine = other.t_deadLine;
    t_simpleFaz = other.t_simpleFaz;
    t_doubleFaz = other.t_doubleFaz;
    t_isimpleFaz = other.t_isimpleFaz;
    t_idoubleFaz = other.t_idoubleFaz;
    t_csimpleFaz = other.t_csimpleFaz;
    t_cdoubleFaz = other.t_cdoubleFaz;
    t_simpleFazTotal = other.t_simpleFazTotal;
    t_doubleFazTotal = other.t_doubleFazTotal;
    t_isimpleFazTotal = other.t_isimpleFazTotal;
    t_idoubleFazTotal = other.t_idoubleFazTotal;
    t_csimpleFazTotal = other.t_csimpleFazTotal;
    t_cdoubleFazTotal = other.t_cdoubleFazTotal;
    t_senna = other.t_senna;
    t_anillado = other.t_anillado;
    t_total = other.t_total;
    t_estado = other.t_estado;
    t_howto = other.t_howto;
    t_conAbrochado = other.t_conAbrochado;
    t_howtoFlags = other.t_howtoFlags;

    if(other.t_business) t_business = new business(*(other.t_business));
    t_howtoAnillado = other.t_howtoAnillado;
    t_flag = other.t_flag;
    t_ignore = other.t_ignore;
    t_outoforder = other.t_outoforder;
    if(other.t_userowner) t_userowner = new user(other.t_userowner->internalID());
    /*t_userowner->update();*/
    //t_userowner = other.t_userowner;
    id_db = other.id_db;

    workorder_pages *p;
    foreach(p, other.t_pages) {
        t_pages << new workorder_pages(*p);
    };
    //copiar hojas
}

workorder &workorder::operator =(const workorder &other)
{
    if(this != &other){
        t_instanced = false;
        t_flag = false;
        t_descripcion = other.t_descripcion;
        t_costumerName = other.t_costumerName;
        t_observations = other.t_observations;
        t_copies = other.t_copies;
        t_conAnillado = other.t_conAnillado;
        t_doComplete = other.t_doComplete;
        t_lista = other.t_lista;
        t_entregado = other.t_entregado;
        t_deadLine = other.t_deadLine;
        t_simpleFaz = other.t_simpleFaz;
        t_doubleFaz = other.t_doubleFaz;
        t_isimpleFaz = other.t_isimpleFaz;
        t_idoubleFaz = other.t_idoubleFaz;
        t_csimpleFaz = other.t_csimpleFaz;
        t_cdoubleFaz = other.t_cdoubleFaz;
        t_simpleFazTotal = other.t_simpleFazTotal;
        t_doubleFazTotal = other.t_doubleFazTotal;
        t_isimpleFazTotal = other.t_isimpleFazTotal;
        t_idoubleFazTotal = other.t_idoubleFazTotal;
        t_csimpleFazTotal = other.t_csimpleFazTotal;
        t_cdoubleFazTotal = other.t_cdoubleFazTotal;
        t_senna = other.t_senna;
        t_anillado = other.t_anillado;
        t_total = other.t_total;
        t_estado = other.t_estado;
        t_howto = other.t_howto;
        t_conAbrochado = other.t_conAbrochado;
        t_howtoFlags = other.t_howtoFlags;
        if(t_business) delete t_business;
        t_business = new business(*(other.t_business));
        t_howtoAnillado = other.t_howtoAnillado;
        t_flag = other.t_flag;
        t_ignore = other.t_ignore;
        t_outoforder = other.t_outoforder;
        if(t_userowner) delete t_userowner;
        t_userowner = new user(other.t_userowner->internalID());
        /*t_userowner->update();*/
        //t_userowner = other.t_userowner;
        id_db = other.id_db;

        workorder_pages *p;
        foreach(p, other.t_pages) {
            t_pages << new workorder_pages(*p);
        };
    };
    return *this;
}

workorder::~workorder()
{
    qDeleteAll(t_pages.begin(), t_pages.end());
    //qDebug() << t_userowner;
    //qDebug() << t_userowner->internalID();
    //qDebug() << "workorder to delete" << internalID();
    if(t_userowner != 0){
        //qDebug() << "q";
        //qDebug() << "q" << t_userowner->internalID();
        delete t_userowner;
        //qDebug() << "q";
    };
    if(t_business != 0){
        //qDebug() << "q";
        //qDebug() << "q" << t_business->internalID();
        delete t_business;
        //qDebug() << "q";
    };
}

bool workorder::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_descripcion = value.toString();
            break;
        case 1:
            t_costumerName = value.toString();
            break;
        case 2:
            t_observations = value.toString();
            break;
        case 3:
            t_copies = value.toInt(&ok);
            break;
        case 4:
            t_conAnillado = value.toBool();
            break;
        case 5:
            t_doComplete = value.toBool();
            break;
        case 6:
            t_lista = value.toBool();
            break;
        case 7:
            t_entregado = value.toBool();
            break;
        case 8:
            t_deadLine = value.toDateTime();
            break;
        case 9:
            t_simpleFaz = value.toDouble(&ok);
            break;
        case 10:
            t_doubleFaz = value.toDouble(&ok);
            break;
        case 11:
            t_simpleFazTotal = value.toDouble(&ok);
            break;
        case 12:
            t_doubleFazTotal = value.toDouble(&ok);
            break;
        case 13:
            t_senna = value.toDouble(&ok);
            break;
        case 14:
            t_anillado = value.toDouble(&ok);
            break;
        case 15:
            t_total = value.toDouble(&ok);
            break;
        case 16:
            t_estado = (State)value.toInt(&ok);
            break;
        case 17:
            t_howto = (HowTo)value.toInt(&ok);
            break;
        case 18:
            if(t_business != 0) delete t_business;
            t_business = new business(value.toInt(&ok));
            break;
        case 19:
            t_isimpleFaz = value.toInt(&ok);
            break;
        case 20:
            t_idoubleFaz = value.toInt(&ok);
            break;
        case 21:
            t_csimpleFaz = value.toInt(&ok);
            break;
        case 22:
            t_cdoubleFaz = value.toInt(&ok);
            break;
        case 23:
            t_isimpleFazTotal = value.toInt(&ok);
            break;
        case 24:
            t_idoubleFazTotal = value.toInt(&ok);
            break;
        case 25:
            t_csimpleFazTotal = value.toInt(&ok);
            break;
        case 26:
            t_cdoubleFazTotal = value.toInt(&ok);
            break;
        case 27:
            t_howtoAnillado = (Anillado)value.toInt(&ok);
            break;
        case 28:
            t_ignore = value.toBool();
            break;
        case 29:
            if(t_userowner != 0) delete t_userowner;
            t_userowner = new user(value.toInt(&ok));
            t_userowner->onFallback(this->isOnFallback());
            qDebug() << "user id:" << value.toInt(&ok);
            //if(ok) t_userowner->update();
            break;
        case 30:
            t_outoforder = value.toInt(&ok);
            break;
        case 31:
            t_conAbrochado = value.toBool();
            break;
        case 32:
            t_howtoFlags = value.toInt(&ok);
            break;
        default:
            ok = false;
            break;
    };
    //qDebug() << "wo set " << at << ok;
    return ok;
}

QVariant workorder::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_descripcion;
            break;
        case 1:
            return t_costumerName;
            break;
        case 2:
            return t_observations;
            break;
        case 3:
            return t_copies;
            break;
        case 4:
            return t_conAnillado;
            break;
        case 5:
            return t_doComplete;
            break;
        case 6:
            return t_lista;
            break;
        case 7:
            return t_entregado;
            break;
        case 8:
            return t_deadLine;
            break;
        case 9:
            return t_simpleFaz;
            break;
        case 10:
            return t_doubleFaz;
            break;
        case 11:
            return t_simpleFazTotal;
            break;
        case 12:
            return t_doubleFazTotal;
            break;
        case 13:
            return t_senna;
            break;
        case 14:
            return t_anillado;
            break;
        case 15:
            return t_total;
            break;
        case 16:
            return t_estado;
            break;
        case 17:
            return t_howto;
            break;
        case 18:
            if(toShow) t_business->name();
            return t_business->internalID();
            break;

        case 19:
            return t_isimpleFaz;
            break;
        case 20:
            return t_idoubleFaz;
            break;
        case 21:
            return t_csimpleFaz;
            break;
        case 22:
            return t_cdoubleFaz;
            break;

        case 23:
            return t_isimpleFazTotal;
            break;
        case 24:
            return t_idoubleFazTotal;
            break;
        case 25:
            return t_csimpleFazTotal;
            break;
        case 26:
            return t_cdoubleFazTotal;
            break;
        case 27:
            return t_howtoAnillado;
            break;
        case 28:
            return t_ignore;
        case 29:
            if(t_userowner == 0){
                return 0;
            }else{
                return t_userowner->internalID();
            };
        case 30:
            return t_outoforder;
            break;
        case 31:
            return t_conAbrochado;
            break;
        case 32:
            return t_howtoFlags;
            break;
        default:
            return QVariant();
            break;
    };
}

bool workorder::commit(quint64 usrid)
{
    /*if(t_flag) return;
    t_flag = true;*/
    bool ok = interface::commit(usrid);
    int i;
    /*for(i = 0; i < t_works.count(); i++){
        workorder w = t_works.at(i);
        w.commit(usrid);
    };*/
    for(i = 0; i < t_pages.count(); i++){
        workorder_pages* p = t_pages.at(i);
        ok = ok && p->commit(usrid);
    };
    t_flag = false;
    return ok;
}

bool workorder::update()
{
    /*if(t_flag) return;
    t_flag = true;*/
    bool ok = interface::update();
    if(ok){
        t_pages.clear();
        /*relationship<workorder, workorder_pages> rel = relationship<workorder, workorder_pages>::fromFather(this, this->isOnFallback());
        t_pages = rel.toSonPtrList();
        t_pages = nd::db::children<workorder, workorder_pages>(*(this), true);*/
    };
    //qDebug() <<  "workorder update" << this->internalID() << ok;
    //int i;
    QSqlQuery query;
    t_pages.clear();
    query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE workorder = %2").arg("workorders_pages").arg(internalID()), isOnFallback() ? nd::connection::fallbackdb() : nd::connection::maindb());
    while(query.next()){
        workorder_pages* w = new workorder_pages(query.record().field("id").value().toInt());
        w->onFallback(this->isOnFallback());
        w->update();
        w->setWork(this);
        t_pages << w;
    };

    //t_flag = false;
    return ok;
}

bool workorder::update(QSqlRecord record)
{
    bool ok = interface::update(record);
    QSqlQuery query;
    /*if(ok){
        t_pages.clear();
        *relationship<workorder, workorder_pages> rel = relationship<workorder, workorder_pages>::fromFather(this, this->isOnFallback());
        t_pages = rel.toSonPtrList();*
        t_pages = nd::db::children<workorder, workorder_pages>(this, true);
    };*/
    //qDebug() <<  "workorder update" << this->internalID() << ok;
    workorder_pages* w;
    qDeleteAll(t_pages.begin(), t_pages.end());
    t_pages.clear();
    //qDebug() << "q";
    query = nd::connection::instance()->select(QString("SELECT * FROM %1 WHERE workorder = %2").arg("workorders_pages").arg(internalID()), isOnFallback() ? nd::connection::fallbackdb() : nd::connection::maindb());
    //qDebug() << "q";
    //qDebug() << (isOnFallback() ? nd::connection::fallbackdb() : nd::connection::maindb());
    while(query.next()){
        //qDebug() << "q";
        w = new workorder_pages(query.record().field("id").value().toInt());
        //qDebug() << "q";
        w->onFallback(this->isOnFallback());
        w->update();
        //qDebug() << "q";
        t_pages << w;
        //qDebug() << "q";
    };
    //t_flag = false;
    return ok;
}

bool workorder::erase(quint64 usrid)
{
    /*if(t_flag) return;
    t_flag = true;*/
    interface::erase(usrid);
    int i;
    /*for(i = 0; i < t_works.count(); i++){
        workorder w = t_works.at(i);
        w.erase();
    };*/
    for(i = 0; i < t_pages.count(); i++){
        workorder_pages* p = t_pages.at(i);
        p->erase(usrid);
    };
    t_flag = false;
}

void workorder::removeWorkorderPagesAt(int at)
{
    if (t_pages.count() < at) return;
    t_pages.removeAt(at);
}
