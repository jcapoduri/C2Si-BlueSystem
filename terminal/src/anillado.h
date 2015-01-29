#ifndef ANILLADO_SIMPLE_H
#define ANILLADO_SIMPLE_H
#include "interface.h"

class anillado : public nd::interface
{
public:

    anillado(quint64 id = 0);
    anillado(const anillado &other);
    anillado & operator =(const anillado & other);

    ~anillado(){
        qDebug() << "borrando anillado: " << id_db;
    }
    QVariant        fields(int at, bool toShow);
    bool            setFieldValue(int at, QVariant value);
    QString         tablename(){ return t_tablename; }

    void            setName(QString value){ t_name = value; }
    void            setCost(double value){ t_cost = value; }

    QString         name(){ return t_name; }
    double          cost(){ return t_cost; }

protected:
    QString     t_name;
    double      t_cost;
};

#endif // ANILLADO_SIMPLE_H
