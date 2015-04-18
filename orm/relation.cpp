#include "relation.h"

using namespace nd;

/*template <class Father, class Son>
relation<Father, Son>::relation(quint64 id) : interface(id)
{
    t_father  =  new Father();
    t_son  =     new Son();

    t_tablename = QString("%1_%2").arg(t_father->tablename()).arg(t_son->tablename());
    t_fieldList << t_father->tablename() << t_son->tablename();
    t_instanced = false;
}

template <class Father, class Son>
relation<Father, Son>::relation(Father &father, Son &son) : interface(0)
{
    t_father = &father;
    t_son = &son;
    t_tablename = QString("%1_%2").arg(t_father->tablename()).arg(t_son->tablename());
    t_fieldList << t_father->tablename() << t_son->tablename();
    t_instanced = false;
    nd::db::queryResult<relation<Father, Son> > q = nd::db::select<relation<Father, Son> >(filter());
    if(q.next()){
        t_valid = update(q.one());
        //nd::interface();
    };
}*/

/*template <class Father, class Son>
relation<Father, Son>::~relation(){
    delete father;
    delete son;
}

template <class Father, class Son>
QVariant relation<Father, Son>::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_father->internalID();
            break;
        case 0:
            return t_son->internalID();
            break;
        default:
            return QVariant();
    };
}

template <class Father, class Son>
bool relation<Father, Son>::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            delete t_father;
            t_father = new Father(value.toInt(&ok));
            break;
        case 0:
            delete t_son;
            t_son = new Son(value.toInt(&ok));
            break;
        default:
            ok = false;
    };
    return ok;
}*/




/* relationship
template <class Father, class Son>
relationship<Father, Son>::relationship(const QList<relation<Father, Son> > &other) : QList<relation<Father, Son>*>(other)*/
//{h
    //for(int i = 0; i < other.count(); i++) this << other.at(i);
//}

/*template <class Father, class Son>
relationship<Father, Son> relationship<Father, Son>::fromFather(Father &obj)
{
    //relationship<Father, Son> rel;
    return nd::db::select<relation<Father, Son> >(obj.tablename() + " = " + obj.internalID()).all();
    //return rel;
}

template <class Father, class Son>
bool relationship<Father, Son>::commit(quint64 usrid)
{
    bool ok = true;
    for(int i = 0; i < this->count(); i++) ok = ok && this->at(i).commit(usrid);
    return ok;
}*/

/*template <class Father, class Son>
bool relationship<Father, Son>::update()


template <class Father, class Son>
void relationship<Father, Son>::updateRelation(Father & father, QList<Son> children)
{
    if(this->count() == 0){
        for(int i = 0; i < children.count(); i++){
            this << relation<Father, Son>(father, children.at(i));
        };
    }else{
        bool find;
        int j=0;
        //relationship<Father, Son> toAdd;
        while(j < this->count()) this->at(j).erase();

        for(int i = 0; i < children.count(); i++){
            find = false; j = 0;
            while(!find && j < this->count()){
                if(this->at(j).son().internalID() == children.at(i).internalID()){
                    find = true;
                    this->at(j).unerase();
                }else{
                    j++;
                };
            };
            if(!find){ //hijo nuevo
                this << relation<Father, Son>(father, children.at(i));
            };
        };
    };
}*/
