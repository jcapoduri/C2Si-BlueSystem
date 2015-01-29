#ifndef WUSER_H
#define WUSER_H

#include <QWidget>
#include "user.h"

namespace Ui {
class wUser;
}

class wUser : public QWidget
{
    Q_OBJECT
    
public:
    explicit wUser(user* usr = 0, QWidget *parent = 0);
    ~wUser();

public slots:
    void    saved();
    void    closed();
signals:
    void    updated(user* u);
private:
    Ui::wUser *ui;
    user      *t_user;
    bool        toAdd;
};

#endif // WUSER_H
