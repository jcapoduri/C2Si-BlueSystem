#ifndef WIDGET_H
#define WIDGET_H
#define SCRATCH_STEPS 4

#include <QWidget>
#include <QSettings>
#include <QCryptographicHash>
#include <QNetworkAccessManager>
#include <QFile>
#include "../../libs/qjson-qjson/src/parser.h"
#include "../../libs/qjson-qjson/src/serializer.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //funcion basica, inicia la descarga de archivos
    void    getFiles();
    //get all the files
    void    doUpdate();
    bool    checkInet();

    static void     setUpdateFolder(QString value){ Widget::updateFolder = value; }
    static void     setPageFolder(QString value){ Widget::pageFolder = value; }

public slots:
    void    restoreFromScrath();
    void    performeUpdate();
    void    log(QString txt);
    void    doing(QString value);

private slots:
    void    replyFinish(QNetworkReply* reply);
    void    replyZipFinish(QNetworkReply* reply);
    void    setRange(qint64 value = 0, qint64 total = 0);

private:
    Ui::Widget              *ui;
    QNetworkAccessManager   manager;
    bool                    downloadAll;
    QJson::Parser           JSONParser;
    QList<QString>          filesToList(QVariantMap map, QString basepath = "");

    bool    rmTree(QString path);
    void    setText(QString value);
    int     unpad(QString value){ return value.toInt(); }
    QString pad(int value){ return QString::number(value).rightJustified(4, '0'); }
    QString hash(QString value){ return QCryptographicHash::hash((value).toAscii(), QCryptographicHash::Md5); }
    QString hash(int value){ return hash(pad(value)); }
    bool    checkFile(QString filename, QString md5, QString basepath = "");

    static QString updateFolder;
    static QString page;
    static QString pageRoot;
    static QString updateTmpFolder;
    static QString pageFolder;
};

#endif // WIDGET_H
