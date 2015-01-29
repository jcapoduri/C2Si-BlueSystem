#ifndef WOPTIONDIALOG_H
#define WOPTIONDIALOG_H

#include <QDialog>
#include <QSettings>
#include "business.h"

namespace Ui {
class wOptionDialog;
}

class wOptionDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit wOptionDialog(QWidget *parent = 0);
    ~wOptionDialog();
protected slots:
    void    save();
    void    cancel();

private:
    Ui::wOptionDialog   *ui;
    QSettings           *sets;
    QList<business>     t_business;
};

#endif // WOPTIONDIALOG_H
