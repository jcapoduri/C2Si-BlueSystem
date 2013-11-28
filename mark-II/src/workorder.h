#ifndef WORKORDER_H
#define WORKORDER_H

#include "object.h"
#include "workorder_page.h"

class business;
class user;

class workorder : public nd::object
{
    Q_OBJECT
public:
    explicit workorder(QJsonValue initdata, QObject *parent = 0);
    workorder();
    
    //setters
    void    setDescription(QString value);
    void    setCostumerName(QString value);
    void    setObservation(QString value);
    void    setCopies(int value);
    void    setConAnillado(bool value);
    void    setDoComplete(bool value);
    void    setLista(bool value);
    void    setEntregado(bool value);
    void    setDeadline(QDateTime value);
    void    setSimpleFaz(double value);
    void    setDobleFaz(double value);
    void    setISimpleFaz(double value);
    void    setIDobleFaz(double value);
    void    setCSimpleFaz(double value);
    void    setCDobleFaz(double value);
    void    setSimpleFazTotal(double value);
    void    setDobleFazTotal(double value);
    void    setISimpleFazTotal(double value);
    void    setIDobleFazTotal(double value);
    void    setCSimpleFazTotal(double value);
    void    setCDobleFazTotal(double value);
    void    setSenna(double value);
    void    setTotal(double value);
    void    setEstado(QString value);
    void    setAnillado(double value);
    void    setHowTo(QString value);
    void    setBusiness(business *value);
    void    setAnilladoHowTo(QString value);
    void    setIgnore(bool value);
    void    setUserowner(user* value);
    void    setOutOfOrder(int value);

    //getters
    QString     descripcion();
    QString     costumerName();
    QString     observations();
    int         copies();
    bool        conAnillado();
    bool        doComplete();
    bool        lista();
    bool        entregado();
    QDateTime   deadLine();
    double      simpleFaz();
    double      doubleFaz();
    double      isimpleFaz();
    double      idoubleFaz();
    double      csimpleFaz();
    double      cdoubleFaz();

    double      simpleFazTotal();
    double      doubleFazTotal();
    double      isimpleFazTotal();
    double      idoubleFazTotal();
    double      csimpleFazTotal();
    double      cdoubleFazTotal();
    double      senna();
    double      anillado();
    double      total();
    double      totalFotocopias();
    user*       userOwner();
    QString     estado();
    QString     howto();
    QString     anilladoHowTo();
    int         outOfOrder();
    QList<workorderPage*>*  pages();
    business*   bussiness();
    bool        ignore();

signals:
    
public slots:
    
};

Q_DECLARE_METATYPE(workorder)
Q_DECLARE_METATYPE(workorder*)
Q_DECLARE_METATYPE(QList<workorder*>)
Q_DECLARE_METATYPE(QList<workorder*>*)

#endif // WORKORDER_H
