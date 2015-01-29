#include "ui_wlist.h"
#include "relation.h"
#include "db.h"
#include "job.h"
#include "workorder.h"
#include "printobject.h"
#include "mainwidget.h"
#include "wlist.h"

wList::wList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wList),
    t_spacer(new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding))
{
    ui->setupUi(this);
    connect(ui->printButton,  SIGNAL(clicked()), this, SLOT(print()));
    connect(ui->updateButton, SIGNAL(clicked()), this, SLOT(update()));
    //update();
}

wList::~wList()
{
    delete ui;
}

void wList::update()
{
    job* j;
    workorder *w;
    wListWorkorder *ww;

    //clear
    while(!t_ww.isEmpty()){
        ww = t_ww.takeFirst();
        ui->listScrollArea->widget()->layout()->removeWidget(ww);
        delete ww;
    };

    ui->listScrollArea->widget()->layout()->removeItem(t_spacer);


    QList<job*> list = db::select<job>(filter).allPtr();
    foreach(j, list){
        for(int i = 0; i < j->workCount(); i++){
            w = j->workAt(i);
            //qDebug() << "job:" << j->internalID() << "i: "<< i << "w" << w << "id:" << w->internalID();
            ww = new wListWorkorder(w);
            t_ww << ww;
        };
    };
    //load
    //ui->listScrollArea->widget()->layout()->addItem(t_spacer);
    for(int i = 0; i < t_ww.count(); i++){
        ww = t_ww.at(i);
        ui->listScrollArea->widget()->layout()->addWidget(ww);
    };
    //ui->listScrollArea->widget()->insadd(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));
    ui->listScrollArea->widget()->layout()->addItem(t_spacer);
    qDebug() << ui->listScrollArea->widget()->layout()->objectName();
    //clean


    emit updated();
}

void wList::print()
{
    /* FÜR DEBUGG ONLY
    workorder *w;
    wListWorkorder *ww;
    for(int i = 0; i < 50; i++){
        w = new workorder();
        w->setDescription(QString::number(i));
        ww = new wListWorkorder(w);
        t_ww << ww;//ui->scrollArea->widget()->layout()->addWidget(ww);
    };
     END DEBUGG ONLY*/
    printObject::instance()->printList(t_ww, t_title);
}
