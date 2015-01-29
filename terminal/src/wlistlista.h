#ifndef WLISTLISTA_H
#define WLISTLISTA_H
#include "wlist.h"

class wListLista : public wList
{
    Q_OBJECT
public:
    explicit wListLista(QWidget *parent = 0);
    
signals:
    
public slots:
   // void    print();
};

#endif // WLISTLISTA_H
