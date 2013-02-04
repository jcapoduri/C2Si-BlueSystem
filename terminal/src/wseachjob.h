#ifndef WSEACHJOB_H
#define WSEACHJOB_H

#include "wlistworkorder.h"
#include <job.h>
#include <QWidget>
#include <QTimer>
#include <QSpacerItem>

namespace Ui {
class wSeachJob;
}

class wSeachJob : public QWidget
{
    Q_OBJECT
    
public:
    explicit wSeachJob(user* usr, QWidget *parent = 0);
    ~wSeachJob();

public slots:
    void    doSearch();
    void    openWork();

private:
    Ui::wSeachJob *ui;
    QTimer        t_timer;
    QList<wListWorkorder*>  t_ww;
    QSpacerItem*            t_spacer;
    user*                   t_user;
};

#endif // WSEACHJOB_H
