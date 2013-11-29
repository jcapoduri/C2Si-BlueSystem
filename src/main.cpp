#include <QApplication>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QTranslator>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QIcon>
#include <QSharedPointer>
#include "manager.h"

int main(int argc, char *argv[]) {
    QJsonDocument   doc;
    QJsonValue      init_data;
    QJsonObject     configObj;
    QTranslator     translator;
    QApplication    a(argc, argv);
    QFile           file("../bluesystem.json");
    QFile           config("./config.json");    

    //translate app to spanish
    translator.load("qt_es");
    a.installTranslator(&translator);
    QLocale::setDefault(QLocale(QLocale::Spanish, QLocale::Argentina));

    //Fix closable icon
    a.setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon(":/icons/graphics/casitaazul.ico"));
    a.setQuitOnLastWindowClosed(true);

    //read and parse bluesystem information
    file.open(QFile::ReadOnly);
    QString filedata = file.readAll();
    QJsonParseError *err = new QJsonParseError();
    doc = QJsonDocument::fromJson(filedata.toLatin1(), err);
    init_data = doc.object();

    if (!config.open(QFile::ReadOnly)) {
        QMessageBox::critical(0, "Error cargando app...", "no se pudo acceder al archivo de configuración", QMessageBox::Ok);
        return -1;
    };

    filedata =      config.readAll();
    doc =           QJsonDocument::fromJson(filedata.toLatin1());
    configObj =     doc.object();

    manager bluemanag(init_data);
    bluemanag.setBar();

    return a.exec();
}
