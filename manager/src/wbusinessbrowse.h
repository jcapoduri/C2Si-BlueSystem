#ifndef WBUSINESSBROWSE_H
#define WBUSINESSBROWSE_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>
#include "wbusiness.h"


namespace Ui {
class wBusinessBrowse;
}

class wBusinessBrowse : public QWidget
{
    Q_OBJECT
    
public:
    explicit wBusinessBrowse(bool toSel = false, QWidget *parent = 0);
    ~wBusinessBrowse();
public slots:
    void    selected();
    void    add();
    void    mod();
    void    del();

    void    refresh();

signals:
    void    businessSelected(business *b);
private:
    Ui::wBusinessBrowse *ui;
    QSqlTableModel *businessModel;
};

#endif // WBUSINESSBROWSE_H
