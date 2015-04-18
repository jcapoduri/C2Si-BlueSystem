#ifndef RELATION_H
#define RELATION_H
#include "nd_global.h"
#include "interface.h"
#include "db.h"

namespace nd{
    template <class Father, class Son>
    class /*NDSHARED_EXPORT*/ relation : public interface
    {
    public:
        relation(quint64 id = 0) : interface(id){
            t_father  =  new Father();
            t_son  =     new Son();

            t_tablename = QString("%1_%2").arg(t_father->tablename()).arg(t_son->tablename());
            t_fieldList << t_father->tablename() << t_son->tablename();
            t_instanced = false;
            delete t_father;
            delete t_son;
        }
        relation(Father & father, Son & son) : interface(0){
            t_father = &father;
            t_son = &son;
            t_tablename = QString("%1_%2").arg(t_father->tablename()).arg(t_son->tablename());
            t_fieldList << t_father->tablename() << t_son->tablename();
            t_instanced = false;
            nd::db::queryResult<relation<Father, Son> > q = nd::db::select<relation<Father, Son> >(filter());
            if(q.next()){
                qDebug() << "relation updated!";
                t_valid = this->update(q.currentRecord());
            };
        }

        QVariant    fields(int at, bool toShow){
            switch(at){
                case 0:
                    //qDebug() << "fields: " << t_father->internalID();
                    return t_father->internalID();
                    break;
                case 1:
                    //qDebug() << "fields: " << t_son->internalID();
                    return t_son->internalID();
                    break;
                default:
                    return QVariant();
            };
        }
        bool        setFieldValue(int at, QVariant value){
            bool ok = true;
            switch(at){
                case 0:
                    //delete t_father;
                    //qDebug() << value;
                    t_father = new Father(value.toInt(&ok));
                    break;
                case 1:
                    //delete t_son;
                    //qDebug() << value;
                    t_son = new Son(value.toInt(&ok));
                    break;
                default:
                    ok = false;
            };
            return ok;
        }
        QString     tablename(){ return t_tablename; }
        QString     filter(){ return QString("%1 = %2 AND %3 = %4").arg(t_father->tablename()).arg(t_father->internalID()).arg(t_son->tablename()).arg(t_son->internalID()); }

        Father*     father(){ return t_father; }
        Son*        son(){ return t_son; }

        void        setFather(Father f){ t_father = &f;}
        void        setSon(Son s){ t_son = &son; }
    protected:
        Father* t_father;
        Son*    t_son;
    };

    template <class Father, class Son>
    class NDSHARED_EXPORT relationship : public QList<relation<Father, Son> >{
        //Q_OBJECT
        public:
            relationship(){ //: QList<relation<Father, Son> >(){
            }
            relationship(const QList<relation<Father, Son> > & other) : QList<relation<Father, Son> >(other){}
            ~relationship(){}
            static  relationship<Father, Son> fromFather(Father& obj, bool fromFallback = false){
                relationship<Father, Son> ret;
                QList<relation<Father, Son> > l = nd::db::select<relation<Father, Son> >(QString("%1 = %2").arg(obj.tablename()).arg(obj.internalID()), fromFallback).all(fromFallback);
                for(int i = 0; i < l.count(); i++){
                    ret << l[i];
                };
                return ret;
                //return QList<relation<Father, Son>* >();
            }
            static  relationship<Father, Son> fromFather(Father * obj, bool fromFallback = false){
                relationship<Father, Son> ret;
                //qDebug() << "fromFather: " << obj->tablename() + " = " + obj->internalID();
                QList<relation<Father, Son> > l = nd::db::select<relation<Father, Son> >(QString("%1 = %2").arg(obj->tablename()).arg(obj->internalID()), fromFallback).all(fromFallback);
                //qDebug() << "fromFather count " << l.count();
                for(int i = 0; i < l.count(); i++){
                    ret << l[i];
                };
                return ret;
                //return QList<relation<Father, Son>* >();
            }
            bool    commit(quint64 usrid){
                bool ok = true;
                qDebug() << "commit count: " << this->count();
                for(int i = 0; i < this->count(); i++){
                    ok = ok && this->value(i).commit(usrid);
                    qDebug() << this->value(i).internalID() << this->value(i).filter();
                };
                return ok;
            }
            bool    update(){
                bool ok = true;
                for(int i = 0; i < this->count(); i++) ok = ok && this->at(i).update();
                return ok;
            }
            bool    erase(quint64 usrid);
            void    updateRelation(Father * father, QList<Son> & children){
                if(this->count() == 0){
                    //qDebug() << "append de relations";
                    for(int i = 0; i < children.count(); i++){
                        this->append(relation<Father, Son>(*father, children[i]));
                    };
                }else{
                    bool find;
                    int j=0;
                    //relationship<Father, Son> toAdd;
                    for(j = 0; j < this->count(); j++)
                        this->value(j).erase(0);

                    for(int i = 0; i < children.count(); i++){
                        find = false; j = 0;
                        while(!find && j < this->count()){
                            if(this->value(j).son()->internalID() == children.at(i).internalID()){
                                find = true;
                                this->value(j).unerase();
                            }else{
                                j++;
                            };
                        };
                        if(!find){ //hijo nuevo
//                            relation<Father, Son> q(*father, children[i]);
                            qDebug() << "add new relation!";
                            qDebug() << "father" << father->internalID() << children[i].internalID();
                            this->append(relation<Father, Son>(*father, children[i]));
                        };
                    };
                };
            }


            void    updateRelation(Father * father, QList<Son*> & children){
                if(this->count() == 0){
                    //qDebug() << "append de relations";
                    for(int i = 0; i < children.count(); i++){
                        this->append(relation<Father, Son>(*father, *(children[i])));
                    };
                }else{
                    bool find;
                    int j=0;
                    //relationship<Father, Son> toAdd;
                    for(j = 0; j < this->count(); j++)
                        this->value(j).erase(0);

                    for(int i = 0; i < children.count(); i++){
                        find = false; j = 0;
                        while(!find && j < this->count()){
                            if(this->value(j).son()->internalID() == children.at(i)->internalID()){
                                find = true;
                                this->value(j).unerase();
                            }else{
                                j++;
                            };
                        };
                        if(!find){ //hijo nuevo
//                            relation<Father, Son> q(*father, children[i]);
                            /*qDebug() << "add new relation!";
                            qDebug() << "father" << father->internalID() << children[i].internalID();*/
                            this->append(relation<Father, Son>(*father, *(children[i])));
                        };
                    };
                };
            }


            void    updateRelation(Father &father, QList<Son> children){
                if(this->count() == 0){
                    //qDebug() << "append de relations";
                    for(int i = 0; i < children.count(); i++){
                        this->append(relation<Father, Son>(father, children[i]));
                    };
                }else{
                    bool find;
                    int j = 0;
                    //relationship<Father, Son> toAdd;
                    for(j = 0; j < this->count(); j++)
                        this->value(j).erase(0);

                    for(int i = 0; i < children.count(); i++){
                        find = false; j = 0;
                        while(!find && j < this->count()){
                            if(this->value(j).son()->internalID() == children.at(i).internalID()){
                                find = true;
                                this->value(j).unerase();
                            }else{
                                j++;
                            };
                        };
                        if(!find){ //hijo nuevo
                            relation<Father, Son> q(father, children[i]);
                            this->append(q);
                        };
                    };
                };
            }

            QList<Son>    toSonList(){
                QList<Son> list;
                for(int i = 0; i < this->count(); i++){
                    Son s = *(this->value(i).son());
                    if(s.update()) list << s;
                };
                return list;
            }

            QList<Son*>    toSonPtrList(){
                QList<Son*> list;
                for(int i = 0; i < this->count(); i++){
                    Son* s = this->value(i).son();
                    if(s->update()) list << s;
                };
                return list;
            }
    };

}
#endif // RELATION_H
