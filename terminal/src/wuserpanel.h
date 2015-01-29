#ifndef WUSERPANEL_H
#define WUSERPANEL_H

#include <QWidget>
#include "wseachjob.h"
#include "user.h"

namespace Ui {
class wUserPanel;
}

class wUserPanel : public QWidget
{
    Q_OBJECT
    
public:
    explicit wUserPanel(user* usr, QWidget *parent = 0);
    ~wUserPanel();
public slots:
    void    logout();
    void    addJob();
    void    checkJob();
    void    searchJob();
    void    options();

    void    manageUsers();
private:
    Ui::wUserPanel *ui;
    user           *t_user;
};

#endif // WUSERPANEL_H
