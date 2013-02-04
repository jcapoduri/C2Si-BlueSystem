#ifndef WBUSINESS_H
#define WBUSINESS_H

#include <QWidget>
#include "business.h"

namespace Ui {
class wBusiness;
}

class wBusiness : public QWidget
{
    Q_OBJECT
    
public:
    explicit wBusiness(business *bus = 0, QWidget *parent = 0);
    ~wBusiness();
public slots:
    void    addUser();
    void    delUser();
    void    userAdded(user *u);

    void    addAnillado();
    void    delAnillado();
    void    anilladoAdded(anillado* an);

    void    saved();
    void    closed();
    void    refresh();
signals:
    void    updated(business* u);
    
private:
    Ui::wBusiness   *ui;
    business        *t_business;
    bool            toAdd;
};

#endif // WBUSINESS_H
