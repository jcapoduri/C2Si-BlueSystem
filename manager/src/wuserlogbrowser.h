#ifndef WUSERLOGBROWSER_H
#define WUSERLOGBROWSER_H

#include <QWidget>
#include "business.h"

namespace Ui {
class wUserLogBrowser;
}

class wUserLogBrowser : public QWidget
{
    Q_OBJECT
    
public:
    explicit wUserLogBrowser(QWidget *parent = 0);
    ~wUserLogBrowser();

public slots:
    void    comboChanged();
    void    refreshEmployee();
    void    refreshEmployeeLog();
    void    print();
    void    printDetail();
private:
    Ui::wUserLogBrowser *ui;
    QList<business>     t_business;
    business*           t_current;
};

#endif // WUSERLOGBROWSER_H
