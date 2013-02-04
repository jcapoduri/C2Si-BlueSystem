#ifndef WORKORDER_H
#define WORKORDER_H
#include "interface.h"
#include "business.h"
#include "workorder_pages.h"
//class workorder_pages;
class workorder : public nd::interface
{
public:
    //         0        1             2          3         4          5
    enum State{Waiting, Fotocopiando, Anillando, Finished, Delivered, Recycled};
    enum HowTo{TwoinOneDF, TwoinOneSF, toDF, toSF, HHDF, HHSF, likeThat};
    enum Anillado{Superior = 0, Lateral = 1, Inferior = 2};

    workorder(quint64 id = 0);
    workorder(const workorder & other);
    workorder & operator=(const workorder & other);
    ~workorder();

    //dbInterface
    bool        setFieldValue(int at, QVariant value);
    QVariant    fields(int at, bool toShow);
    QString     tablename(){ return t_tablename; }
    bool        commit(quint64 usrid = 0);
    bool        update();    
    bool        update(QSqlRecord record);
    bool        erase(quint64 usrid = 0);
    void        clearId(){ id_db = 0; }

    //setters
    void    setDescription(QString value){ t_descripcion = value; }
    void    setCostumerName(QString value){ t_costumerName = value; }
    void    setObservation(QString value){ t_observations = value; }
    void    setCopies(int value){ t_copies = value; }
    void    setConAnillado(bool value){ t_conAnillado = value; }
    void    setDoComplete(bool value){ t_doComplete = value; }
    void    setLista(bool value){ t_lista = value; }
    void    setEntregado(bool value){ t_entregado = value; }
    void    setDeadline(QDateTime value){ t_deadLine = value; }
    void    setSimpleFaz(double value){ t_simpleFaz = value; }
    void    setDobleFaz(double value){ t_doubleFaz = value; }
    void    setISimpleFaz(double value){ t_isimpleFaz = value; }
    void    setIDobleFaz(double value){ t_idoubleFaz = value; }
    void    setCSimpleFaz(double value){ t_csimpleFaz = value; }
    void    setCDobleFaz(double value){ t_cdoubleFaz = value; }
    void    setSimpleFazTotal(double value){ t_simpleFazTotal = value; }
    void    setDobleFazTotal(double value){ t_doubleFazTotal = value; }
    void    setISimpleFazTotal(double value){ t_isimpleFazTotal = value; }
    void    setIDobleFazTotal(double value){ t_idoubleFazTotal = value; }
    void    setCSimpleFazTotal(double value){ t_csimpleFazTotal = value; }
    void    setCDobleFazTotal(double value){ t_cdoubleFazTotal = value; }
    void    setSenna(double value){ t_senna = value; }
    void    setTotal(double value){ t_total = value; }
    void    setEstado(State value){ t_estado = value; }
    void    setAnillado(double value){ t_anillado = value; }
    void    setHowTo(HowTo value){ t_howto = value; }
    void    setBusiness(business *value){ if(t_business) delete t_business; t_business = value; }
    void    setAnilladoHowTo(Anillado value){ t_howtoAnillado = value; }
    void    setIgnore(bool value){ t_ignore = value; }
    void    setUserowner(user* value){ t_userowner = value; }
    void    setOutOfOrder(int value){ t_outoforder = value; }
    void    addWorkorderPages(workorder_pages* pages){ t_pages << pages; }
    void    modWorkorderPages(workorder_pages* pages){ t_pages.removeAll(pages); t_pages << pages; }
    void    delWorkorderPages(workorder_pages* pages){ t_pages.removeAll(pages); }
    int     workorderPages(){ return t_pages.count(); }
    workorder_pages* workorderPagesAt(int at){ return t_pages.at(at); }

    /*void    addWorkorder(workorder & work){ t_works << work; }
    void    modWorkorder(workorder & work){ t_works.removeAll(work); t_works << work; }
    void    delWorkorder(workorder & work){ t_works.removeAll(work); }*/
    //getters
    QString     descripcion(){ return t_descripcion ;}
    QString     costumerName(){ return t_costumerName ;}
    QString     observations(){ return t_observations ;}
    int         copies(){ return t_copies ;}
    bool        conAnillado(){ return t_conAnillado ;}
    bool        doComplete(){ return t_doComplete ;}
    bool        lista(){ return t_lista ;}
    bool        entregado(){ return t_entregado ;}
    QDateTime   deadLine(){ return t_deadLine ;}
    double      simpleFaz(){ return t_simpleFaz ;}
    double      doubleFaz(){ return t_doubleFaz ;}
    double      isimpleFaz(){ return t_isimpleFaz ;}
    double      idoubleFaz(){ return t_idoubleFaz ;}
    double      csimpleFaz(){ return t_csimpleFaz ;}
    double      cdoubleFaz(){ return t_cdoubleFaz ;}

    double      simpleFazTotal(){ return t_simpleFazTotal ;}
    double      doubleFazTotal(){ return t_doubleFazTotal ;}
    double      isimpleFazTotal(){ return t_isimpleFazTotal ;}
    double      idoubleFazTotal(){ return t_idoubleFazTotal ;}
    double      csimpleFazTotal(){ return t_csimpleFazTotal ;}
    double      cdoubleFazTotal(){ return t_cdoubleFazTotal ;}
    double      senna(){ return t_senna ;}
    double      anillado(){ return t_anillado ;}
    double      total(){ return t_total ;}
    double      totalFotocopias(){ return t_simpleFazTotal + t_doubleFazTotal + t_isimpleFazTotal + t_idoubleFazTotal + t_csimpleFazTotal + t_cdoubleFazTotal;}
    user*       userOwner(){ return t_userowner; }
    State       estado(){ return t_estado ;}
    HowTo       howto(){ return t_howto ;}
    Anillado    anilladoHowTo(){ return t_howtoAnillado; }
    int         outOfOrder(){ return t_outoforder; }
    QList<workorder_pages*>  pages(){ return t_pages ;}
    //QList<workorder>        works(){ return t_works ;}
    business*   bussiness(){ return t_business; }
    bool        ignore(){ return t_ignore; }

private:
    QString     t_descripcion;
    QString     t_costumerName;
    QString     t_observations;
    int         t_copies;
    bool        t_conAnillado;
    bool        t_doComplete;
    bool        t_lista;
    bool        t_entregado;
    QDateTime   t_deadLine;
    double      t_simpleFaz;
    double      t_doubleFaz;
    double      t_isimpleFaz;
    double      t_idoubleFaz;
    double      t_csimpleFaz;
    double      t_cdoubleFaz;
    double      t_simpleFazTotal;
    double      t_doubleFazTotal;
    double      t_isimpleFazTotal;
    double      t_idoubleFazTotal;
    double      t_csimpleFazTotal;
    double      t_cdoubleFazTotal;
    double      t_senna;
    double      t_anillado;
    double      t_total;
    user*       t_userowner;
    State       t_estado;
    HowTo       t_howto;
    int         t_outoforder;
    QList<workorder_pages*>  t_pages;
   // QList<workorder>        t_works;
    business    *t_business;
    Anillado    t_howtoAnillado;
    bool        t_ignore;

    bool        t_flag;
};

#endif // WORKORDER_H
