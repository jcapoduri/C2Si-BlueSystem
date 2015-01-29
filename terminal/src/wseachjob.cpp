#include <QDateTime>
#include "db.h"
#include "queryresult.h"
#include "wseachjob.h"
#include "ui_wseachjob.h"
#include "wjob.h"

wSeachJob::wSeachJob(user *usr, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wSeachJob),
    t_spacer(new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding))
{
    ui->setupUi(this);
    t_user = usr;
    t_timer.setSingleShot(true);
    t_timer.setInterval(1*500);

    connect(&t_timer, SIGNAL(timeout()), this, SLOT(doSearch()));
    connect(ui->searchLineEdit, SIGNAL(textChanged(QString)), &t_timer, SLOT(start()));

}

wSeachJob::~wSeachJob()
{
    delete ui;
}


/**
d: busca por dia d21 d2108 d21/08 c21-08
c: busca por cliente ccarla cjorge
l: busca por libro ltenerbaum (do not use)
*/
void wSeachJob::doSearch()
{
    qDebug() << "doSearch";
    QString text = ui->searchLineEdit->text();
    QStringList where;

    //job* j;
    workorder *w;
    wListWorkorder *ww;

    //clear
    while(!t_ww.isEmpty()){
        ww = t_ww.takeFirst();
        ui->scrollArea->widget()->layout()->removeWidget(ww);
        delete ww;
    };

    ui->scrollArea->widget()->layout()->removeItem(t_spacer);


    where << "(entregado = 0)";
    if(text.length() == 0){

    }else{
        QStringList params = text.split(" ");
        QString param;
        QChar c;
        foreach (param, params){
            c = param.at(0);
            param = param.mid(1);
            if(c.digitValue() == '-'){
                c = param.at(1);
                param = param.mid(2);
                switch(c.digitValue()){
                    case 'c':
                        where << QString("(costumername LIKE '%%1%')").arg(param);
                        break;
                    case 'd':
                        QDateTime time;
                        if(param.contains("/" or param.contains("-"))){
                            time = QDateTime::fromString(param, "dd-MM");
                        }else{
                            time = QDateTime::fromString(param, "dd");
                        };
                        where << QString("(deadline LIKE '%1%')").arg(time.toString("yyyy-MM-dd"));
                        break;
                };
            }else{
                where << QString("(description LIKE '%%1%')").arg(param);
            };
        }
    };
    nd::db::queryResult<workorder> query = nd::db::select<workorder>(QString("id IN (SELECT id FROM workorders_view WHERE %1)").arg(where.join(" AND ")));
    while(query.next()){
        wListWorkorder *l = new wListWorkorder(query.one());
        t_ww << l;        
    };

    //load
    for(int i = 0; i < t_ww.count(); i++){
        ww = t_ww.at(i);        
        connect(ww, SIGNAL(dblClicked()), this, SLOT(openWork()));
        ui->scrollArea->widget()->layout()->addWidget(ww);
    };
    ui->scrollArea->widget()->layout()->addItem(t_spacer);
}

void wSeachJob::openWork()
{
    qDebug() << "dblClicked";
    wListWorkorder* ww = dynamic_cast<wListWorkorder*>(sender());
    job* j = job::fromWorkorder(ww->getWorkorder());
    if(j != 0){
        wJob *form = new wJob(t_user, j);
        form->setWindowModality(Qt::ApplicationModal);
        form->setAttribute(Qt::WA_DeleteOnClose);
        form->showMaximized();
    };
}
