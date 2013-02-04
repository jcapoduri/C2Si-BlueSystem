#ifndef WLISTCLIENT_H
#define WLISTCLIENT_H
#include "wlist.h"

class wListClient : public wList
{
    Q_OBJECT
public:
    explicit wListClient(QWidget *parent = 0);
    
signals:
    
public slots:
    //void    print();
};

#endif // WLISTCLIENT_H
