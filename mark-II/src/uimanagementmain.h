#ifndef UIMANAGEMENTMAIN_H
#define UIMANAGEMENTMAIN_H

#include <QMainWindow>

namespace Ui {
    class managerWidget;
}

class uiManagementMain : public QMainWindow
{
    Q_OBJECT
public:
    explicit uiManagementMain(QWidget *parent = 0);
    ~uiManagementMain();
signals:
    
public slots:
    
private:
    Ui::managerWidget *ui;
};

#endif // UIMANAGEMENTMAIN_H
