#include <QNetworkReply>
#include <QDateTime>
#include <QMessageBox>
#include <QDebug>
#include "wbackupdialog.h"
#include "ui_wbackupdialog.h"

wBackupDialog::wBackupDialog(QFile *fl, QWidget *parent) :
    QDialog(parent),
    manager(new QNetworkAccessManager(this)),
    ui(new Ui::wBackupDialog)
{
    t_file = fl;
    ui->setupUi(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinish(QNetworkReply*)));
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(doBackup()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(close()));
}

wBackupDialog::~wBackupDialog()
{
    delete ui;
    t_file->close();
    t_file->deleteLater();
}

bool wBackupDialog::cloudBackup()
{
    disconnect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinish(QNetworkReply*)));
    QNetworkReply *_rep = manager->get(QNetworkRequest(QUrl("http://api.fotocasitaazul.com.ar/db/?op=cloud")));
    bool ok = _rep->waitForReadyRead(-1);
    if(ok){
        QString _str(_rep->readAll());
        qDebug() << _str;
        ok = (_str == "{\"ok\":true}");

    };
    return ok;
}

void wBackupDialog::doBackup()
{
    ui->buttonBox->setEnabled(false);
    log("conectando con el servidor");
    QNetworkReply *_rep = manager->get(QNetworkRequest(QUrl("http://api.fotocasitaazul.com.ar/db/?op=store")));
    connect(_rep, SIGNAL(downloadProgress(qint64,qint64)), this, SLOT(progressMade(qint64,qint64)));
}

void wBackupDialog::restoreBackup()
{
}

void wBackupDialog::progressMade(qint64 val, qint64 max)
{
    ui->progressBar->setMaximum(max);
    ui->progressBar->setValue(val);
}

void wBackupDialog::log(QString txt)
{
    ui->plainTextEdit->appendPlainText(txt + "\r\n");
}

void wBackupDialog::replyFinish(QNetworkReply *reply)
{
    ui->buttonBox->setEnabled(true);
    QByteArray _ba = reply->readAll();
    qDebug() << _ba;
    QString _reply(_ba);

    if(!_reply.startsWith("DROP TABLE")){
        log("Hubo un error al backupear la base de datos, intente mas tarde:" + _reply);
        QMessageBox::warning(0, tr("Advertencia"), tr("Hubo un error al backupear la base de datos, intente mas tarde"), QMessageBox::Ok);
        reply->deleteLater();
        return;
    };

    log("descarga completa, guardando");
    t_file = new QFile("backups/" + QDateTime::currentDateTime().toString("yyyyMMdd-hhmmss") + ".sql");
    if(t_file->open(QIODevice::WriteOnly)){
        t_file->write(_ba);
        t_file->close();
        log("datos guardados exitosamente");
        close();
    };
    reply->deleteLater();
}
