#ifndef WJOB_H
#define WJOB_H

#include <QWidget>
#include "job.h"
#include "wworkorder.h"
#include "user.h"

namespace Ui {
class wJob;
}

class wJob : public QWidget
{
    Q_OBJECT
    
public:
    explicit wJob(user* usr, job *j = 0, QWidget *parent = 0);
    ~wJob();
public slots:
    void    refreshWorkorders();
    void    save();
    void    cancel();
    void    reprint();

    void    cloneWork();
    void    addWorks();
    void    cloneJob();
    void    delWorks(workorder* w);
    void    showWorkorder(quint64 id);

    //void    cloneWork();

private:
    Ui::wJob            *ui;
    job                 *t_job;
    user                *t_user;
    QList<wworkorder*>  t_tabs;
    bool                isAdd;
};

#endif // WJOB_H
