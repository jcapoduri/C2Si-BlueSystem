#ifndef PRINTOBJECT_H
#define PRINTOBJECT_H

#include <QObject>
#include <QtSql>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QtPrintSupport/QPrinter>
#include <QStandardItemModel>
#include "job.h"
#include "workorder.h"
#include "wlistworkorder.h"
#include "ui_piworkorder.h"
#include "ui_pworkorder.h"
#include "ui_plist.h"
#include "ui_pmodellist.h"

class printObject : public QObject
{
    Q_OBJECT
public:
    static printObject*    instance();
    QString                toCode128(QString value);
signals:
    
public slots:
    void    printJob(job* j);
    void    printList(QList<wListWorkorder *> &list, QString title);    
    void    printWorkorder(workorder* w);
    void    printSQLModel(QSqlQueryModel* model, QString title);
    bool    printModel(QAbstractItemModel* model, QString title);
    bool    printTable(QTableWidget *model, QString title);
    bool    printOutOfOrder(int from, int howMany, business* bus);
    void    paintRequest(QPrinter* printer);
    void    paintJobRequest(QPrinter* printer);
    void    paintListRequest(QPrinter* printer);
    void    paintSqlModelRequest(QPrinter* printer);
    void    paintModelRequest(QPrinter* printer);
    void    paintOutOfOrderRequest(QPrinter* printer);
    void    paintTableRequest(QPrinter* printer);

    QWidget*    getInternalWorkOrders(workorder* w);
    QWidget*    getWorkOrders(workorder* w);

protected:
    explicit printObject(QObject *parent = 0);
    static printObject* t_instance;

    job*                    t_job;
    QList<wListWorkorder*>* t_ww;
    QString                 t_title;
    QSqlQueryModel*         t_model;
    QAbstractItemModel*     t_abs_model;
    QTableWidget*           t_table;
    int                     t_from;
    int                     t_many;
    business*               t_buss;
};

#endif // PRINTOBJECT_H
