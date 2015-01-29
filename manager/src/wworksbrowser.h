#ifndef WWORKSBROWSER_H
#define WWORKSBROWSER_H

#include <QWidget>
#include <QtSql>
#include "connection.h"
#include "db.h"
#include "relation.h"
#include "business.h"
#include "workorder.h"
#include "wworkorder.h"

namespace Ui {
class wWorksBrowser;
}

class wWorksBrowser : public QWidget
{
    Q_OBJECT
    
public:
    explicit wWorksBrowser(QWidget *parent = 0);
    ~wWorksBrowser();

public slots:
    void    filter();
    void    print();
    void    businessSelected();

private:
    Ui::wWorksBrowser *ui;
    QList<business> t_business;
    business*       t_current;
    QSqlTableModel* t_model;
};

#endif // WWORKSBROWSER_H
