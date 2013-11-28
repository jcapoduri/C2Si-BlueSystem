#ifndef JSONMODELVIEW_H
#define JSONMODELVIEW_H

#include <QAbstractItemModel>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonDocument>

class JSONModelView : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit JSONModelView(QObject *parent = 0);
    JSONModelView(QJsonValue & val, QObject *parent = 0);
    JSONModelView(QJsonDocument & doc, QObject *parent = 0);
    ~JSONModelView();
    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;


    void setJSON(QJsonValue & val);
    void setJSON(QJsonDocument & doc);

signals:
    
public slots:
    
private:
    QJsonArray root_item;
    QList<QVariant> header;

};

#endif // JSONMODELVIEW_H
