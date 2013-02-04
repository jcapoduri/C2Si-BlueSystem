#include "VERSION.h"
#include "widget.h"
#include "ui_widget.h"
#include <QVariantMap>
#include <QDir>
#include <QFile>
#include <QNetworkReply>
#include <QProcess>
#include <QMessageBox>
#include <QDebug>


QString Widget::updateFolder = "./";
QString Widget::updateTmpFolder = "tmp/";
QString Widget::page = "http://api.fotocasitaazul.com.ar/";
QString Widget::pageRoot = "update/";
QString Widget::pageFolder = "./";

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    downloadAll(false)
{
    ui->setupUi(this);
    setWindowTitle(QString("BlueSystem::Updater       (ver: %1)").arg(VERSION));

    if(QDir().exists("./" + Widget::updateFolder)){
        QDir().mkdir("./" + Widget::updateFolder);
    };
    if(QDir().exists("./" + Widget::updateTmpFolder)){
        QDir().mkdir("./" + Widget::updateTmpFolder);
    };

    connect(&manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinish(QNetworkReply*)));
    connect(qApp, SIGNAL(lastWindowClosed()), qApp, SLOT(quit()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::getFiles()
{
    /*if(!checkInet()){
        QMessageBox::warning(0, tr("Advertencia!"), tr("No hay coneccion a internet, checkee la coneccion e intente nuevamente"), QMessageBox::Ok);
        close();
    };*/
    log("Calculando meta-datos del servidor");
    QNetworkReply* rp = manager.get(QNetworkRequest(QUrl(Widget::page + Widget::pageRoot + "?op=check&program=" + Widget::pageFolder)));
    connect(rp, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(setRange(qint64,qint64)));
}




void Widget::restoreFromScrath()
{
    /*if(!checkInet()){
        QMessageBox::warning(0, tr("Advertencia!"), tr("No hay coneccion a internet, checkee la coneccion e intente nuevamente"), QMessageBox::Ok);
        close();
        return;
    };*/
    log("Descargando todo el sistema desde 0");
    downloadAll = true;
    getFiles();
}

void Widget::performeUpdate()
{
    /*if(!checkInet()){
        QMessageBox::warning(0, tr("Advertencia!"), tr("No hay coneccion a internet, checkee la coneccion e intente nuevamente"), QMessageBox::Ok);
        close();
        return;
    };*/
    log("Descargando archivos nuevos");
    getFiles();
}


bool Widget::checkInet()
{
    QNetworkReply* rp = manager.get(QNetworkRequest(QUrl(Widget::page + Widget::pageRoot)));
    bool ok = rp->waitForReadyRead(-1);
    qDebug() << ok << rp->errorString() << rp->isFinished();
    return ok;
}

void Widget::log(QString txt)
{
    ui->textEdit->append(txt + '\r\n');
}

void Widget::doing(QString value)
{
    ui->actualProcessLabel->setText(value);
}

void Widget::replyFinish(QNetworkReply *reply)
{
    ui->overalProgressBar->setValue(1);
    qDebug() << reply->url();
    if(reply->url().path().startsWith("/" + Widget::pageRoot) && reply->isFinished()){
        ui->overalProgressBar->setValue(1);
        disconnect(reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(setRange(qint64,qint64)));
        disconnect(&manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinish(QNetworkReply*)));
        connect(&manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyZipFinish(QNetworkReply*)));

        QByteArray ba = reply->readAll();        
        QVariantMap json = JSONParser.parse(ba).toMap();

        QVariantList        _list;
        log("calculando hash de archivos locales");
        doing("calculando hash de archivos locales");
        QStringList         _strlist =     filesToList(json);
        QString             _listitem;

        //pasar de QStringList a QVariantList
        foreach(_listitem, _strlist) _list << _listitem;

        QJson::Serializer   _serializer;
        QByteArray          _ba =       _serializer.serialize(_list);
        //manager.post(QNetworkRequest(QUrl(Widget::page + Widget::pageRoot)), _ba);


        QUrl _params;
        _params.addEncodedQueryItem("files", _ba);
        //_params.addQueryItem("files", _ba);
        QByteArray _paramBytes(_params.toString().mid(1).toAscii());

        qDebug() << _params.toString().mid(1);

        //QNetworkRequest _request(QUrl("http://api.fotocasitaazul.com.ar/testing/post-ping.php"));
        QNetworkRequest _request(QUrl("http://api.fotocasitaazul.com.ar/update/?op=zipthis&program=" + Widget::pageFolder));
        qDebug() << "http://api.fotocasitaazul.com.ar/update/?op=zipthis&program=" + Widget::pageFolder;
        _request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=UTF-8");
        QNetworkReply* _reply = manager.post(_request, _paramBytes);
        log("Descargando archivos a actualizar");
        doing("Descargando archivos a actualizar");
        connect(_reply, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(setRange(qint64,qint64)));
    };
    reply->deleteLater();
}

void Widget::replyZipFinish(QNetworkReply *reply)
{
    QByteArray _data = reply->readAll();
    QFile* _file = new QFile(Widget::updateTmpFolder + "patch.zip");
    ui->overalProgressBar->setValue(2);
    if(_data.isEmpty()){
        ui->overalProgressBar->setValue(3);
        QMessageBox::warning(this, tr("Actualizacion Terminada"), tr("La version actual del programa es la mas reciente."), QMessageBox::Ok);
        close();
        return;
    };
    if(_file->open(QIODevice::WriteOnly)){
        doing("aplicando actualizacion");
        _file->write(_data);
        _file->close();
        QStringList arguis;
        arguis << "x" << "-y" << QString("-o%1").arg(Widget::updateFolder) << QString("%1patch.zip").arg(Widget::updateTmpFolder);
        QProcess *unpack = new QProcess();
        unpack->start("7za.exe", arguis);
        log("Resultado unpack: " + unpack->waitForFinished());
        unpack->waitForFinished();
        log(unpack->readAllStandardOutput());
        ui->overalProgressBar->setValue(3);
        QMessageBox::warning(this, tr("Actualizacion Terminada"), tr("Se ha actualizador correctamente el programa"), QMessageBox::Ok);
    }else{
        QMessageBox::warning(this, tr("Advertencia"), tr("No se pudo aplicar el parche al sistema, asegurese que el mismo este cerrado e intentelo nuevamente"), QMessageBox::Ok);
    };
    _file->close();
    _file->deleteLater();
    //qDebug() << reply->readAll();
    close();
}

void Widget::setRange(qint64 value, qint64 total)
{
    ui->currentProgressBar->setMaximum(total);
    ui->currentProgressBar->setValue(value);
}

QList<QString> Widget::filesToList(QVariantMap map, QString basepath)
{
    QList<QString> _ret;
    QMap<QString, QVariant>::iterator i = map.begin();
    while(i != map.end()){
        if(i.value().canConvert(QVariant::String)){
            if(checkFile(i.key(), i.value().toString(), basepath)){
               _ret << basepath + i.key();
            };
        }else{
            QString _path = "";
            if(!basepath.isEmpty()) _path = basepath + "\\";
            _path += i.key() + "\\";
            _ret << filesToList(i.value().toMap(), _path);
        };
        ++i;
    };
    return _ret;
}

bool Widget::rmTree(QString path)
{
    bool result = true;
    QDir dir(path);

    if (dir.exists(path)){
        Q_FOREACH(QFileInfo info, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst)){
            if(info.isDir()){
                result = rmTree(info.absoluteFilePath());
            }
            else {
                result = QFile::remove(info.absoluteFilePath());
            }

            if (!result) {
                return result;
            }
        }
        result = dir.rmdir(path);
    }

    return result;
}

void Widget::setText(QString value)
{
    ui->actualProcessLabel->setText(value);
}

bool Widget::checkFile(QString filename, QString md5, QString basepath)
{
    QFile* _file = new QFile(Widget::updateFolder + basepath + filename);
    if(_file->exists()){
        if(_file->open(QIODevice::ReadOnly)){
            QString _hash = QCryptographicHash::hash(_file->readAll(), QCryptographicHash::Md5).toHex();            
            //return true;
            _file->close();
            _file->deleteLater();
            return !(md5 == _hash);
        };
    }else{
        //qDebug() << Widget::updateFolder + basepath + filename << "Dont exists!";
        return true;
    };
}
