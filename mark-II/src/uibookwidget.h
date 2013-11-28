#ifndef UIBOOKWIDGET_H
#define UIBOOKWIDGET_H

#include <QWidget>
#include <QJsonObject>
#include <QJsonArray>
#include <QComboBox>
#include "global_scope.h"

namespace Ui {
    class uiBookWidget;
}

class uiBookWidget : public QWidget
{
    Q_OBJECT
public:
    explicit uiBookWidget(QWidget *parent = 0);
    ~uiBookWidget();
    

    QJsonObject     getChosedBook();
    void            setChosedBook(QJsonObject bk);
public slots:
    void            comboChanged(int index);
    void            setCurrentBusiness(QJsonObject bus);

signals:
    void            currentBookChanged(QJsonObject bk);

private:
    void                    comboChanged(QComboBox *index);
    QList<QComboBox*>       createComboBoxes(QJsonObject books);
    QJsonObject             retrieveBookById(quint16 id, QJsonArray arr);
    QList<QJsonObject>      treeByBook(QJsonObject book, QJsonArray tree = blueBusiness.value("books").toArray());

    Ui::uiBookWidget *ui;
    QList<QComboBox*> comboboxes;
    QJsonObject       business;
};

#endif // UIBOOKWIDGET_H
