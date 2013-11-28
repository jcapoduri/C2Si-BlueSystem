#ifndef AJAX_H
#define AJAX_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>

class ajax : public QObject
{
    Q_OBJECT
public:
    explicit ajax(QJsonValue &initdata, QObject *parent = 0);
    ~ajax();
    
    QJsonValue  get(QString url, quint16 id = 0);
    quint16     post(QString url, QJsonObject &val);
    bool        put(QString url, quint16 id, QJsonObject &val);
    bool        deleteObj(QString url, quint16 id);
    QByteArray  request(QString type, QString uri, QByteArray data = QByteArray());
    QByteArray  request(QString type, QString uri, QJsonObject & data);
    QByteArray  request(QString type, QString uri, QJsonArray & data);
    QByteArray  request(QString type, QString uri, QJsonValue & data);
    QByteArray  lastResponse();

signals:
    void        requestStart(QNetworkReply* reply);
    void        requestEnd(QNetworkReply* reply);
    void        progress(qint64 prg, qint64 tot);

public slots:


private:
    QJsonValue              raw_data;
    QNetworkAccessManager*  accessMgr;
    QString                 url;
    QByteArray              last_request;
    QNetworkReply::NetworkError last_error;
};

#endif // AJAX_H
