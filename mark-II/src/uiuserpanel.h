#ifndef UIUSERPANEL_H
#define UIUSERPANEL_H

#include <QWidget>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

namespace Ui {
    class uiUserPanel;
}

class uiUserPanel : public QWidget
{
    Q_OBJECT
public:
    explicit uiUserPanel(QJsonObject & bus, QJsonObject & usr, QWidget *parent = 0);
    ~uiUserPanel();
    
signals:
    void    userLoggout(QJsonObject obj);

public slots:
    void    newJob();
    void    openJob();
    void    searchJob();
    void    logout();
    void    config();
    
private:
    Ui::uiUserPanel *ui;

    QJsonObject     business;
    QJsonObject     user;
};

#endif // UIUSERPANEL_H
