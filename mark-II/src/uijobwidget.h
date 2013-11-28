#ifndef UIJOBWIDGET_H
#define UIJOBWIDGET_H

#include <QWidget>
#include <QJsonObject>
#include <QJsonArray>

namespace Ui {
    class uiJob;
}

class uiJobWidget : public QWidget
{
    Q_OBJECT
public:
    explicit uiJobWidget(QJsonObject job = QJsonObject(), QWidget *parent = 0);
    ~uiJobWidget();
    
signals:
    
public slots:
    void    toJson();
    void    fromJson();
    void    refreshWorkorders();

private:
    QJsonObject job;
    Ui::uiJob* ui;
};

#endif // UIJOBWIDGET_H
