#ifndef UIWORKORDERTAB_H
#define UIWORKORDERTAB_H

#include <QWidget>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>

namespace Ui {
    class wworkorder;
}

class uiWorkorderTab : public QWidget
{
    Q_OBJECT

    enum State{Waiting, Fotocopiando, Anillando, Finished, Delivered, Recycled};
    enum HowTo{TwoinOneDF, TwoinOneSF, toDF, toSF, HHDF, HHSF, likeThat};
    enum Anillado{Superior = 0, Lateral = 1, Inferior = 2};

public:
    explicit uiWorkorderTab(QJsonObject * obj = new QJsonObject(), QWidget *parent = 0);
    ~uiWorkorderTab();
    
signals:
    
public slots:
    void    toJson();
    void    fromJson();

    void    refreshPages();
    void    updateCost();
    void    deleteMe();

private:
    Ui::wworkorder* ui;

    QJsonObject*    order;
};

#endif // UIWORKORDERTAB_H
