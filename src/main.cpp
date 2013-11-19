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
#include "solution.h"
#include "app.h"
#include "protoobject.h"

int main(int argc, char *argv[]) {
    QJsonDocument   doc;
    QJsonValue      init_data;
    QJsonObject     configObj;
    QTranslator     translator;
    QApplication    a(argc, argv);
    QFile           file("../bluesystem.json");
    QFile           config("./config.json");
    nd::solution*   solution;
    nd::app*        app;

    //translate app to spanish
    translator.load("qt_es");
    a.installTranslator(&translator);
    QLocale::setDefault(QLocale(QLocale::Spanish, QLocale::Argentina));

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

    // initializating nd for the application
    solution = new nd::solution(init_data);
    app = solution->startApp("pc");

    //adding external routes
    //app->api()->addRoute("login", "/business/1/login");
    //app->api()->addRoute("logout", "/business/1/login");



    // TESTING
    nd::model* book = nd::app::model("book")->create();
    book->set("ringing", 1);
    book->set("name", "libro 1");
    book->fetch();
    qDebug() << "MODEL to JSON: " << book->toJSON();
    book->set("name", QString("lalala2"));
    qDebug() << "Save Result:" << book->save();

    return a.exec();
}
