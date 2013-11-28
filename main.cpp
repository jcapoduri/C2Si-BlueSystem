#include <QApplication>
#include <QTranslator>
#include <QResource>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QFile>
#include <QDebug>
#include <QMessageBox>

#include "bluesystemapp.h"
#include "uimanagementmain.h"
#include "uiterminalmain.h"
#include "global_scope.h"

#undef main


int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);

    QJsonDocument   doc;
    QJsonValue      init_data;
    QJsonObject     configObj;
    QTranslator     translator;
    QApplication    a(argc, argv);
    QFile           file(":/bluesystem.json");
    QFile           config("./config.json");
    uiManagementMain *manager;
    uiTerminalMain  *terminal;

    //translate app to spanish
    translator.load("qt_es");
    a.installTranslator(&translator);
    QLocale::setDefault(QLocale(QLocale::Spanish, QLocale::Argentina));

    a.setQuitOnLastWindowClosed(false);

    //read and parse bluesystem information
    file.open(QFile::ReadOnly);
    QString filedata = file.readAll();
    QJsonParseError *err = new QJsonParseError();
    doc = QJsonDocument::fromJson(filedata.toLatin1(), err);
    init_data = doc.object();

    // initialize main object
    app = new bluesystemApp(init_data);    

    if (!config.open(QFile::ReadOnly)) {
        QMessageBox::critical(0, "Error cargando app...", "no se pudo acceder al archivo de configuración", QMessageBox::Ok);
        return -1;
    };

    filedata =      config.readAll();
    doc =           QJsonDocument::fromJson(filedata.toLatin1());
    configObj =     doc.object();

    app->setApp(configObj.value("app").toString());

    qDebug() << configObj.value("business").toDouble();

    blueBusiness =  app->get("business", configObj.value("business").toDouble());

    qDebug() << blueBusiness;
    qDebug() << QJsonDocument(blueBusiness).toJson();

    if (a.arguments().contains("-management")){
        //open the management window
        manager->show();
    }else{
        terminal = new uiTerminalMain(blueBusiness);
        terminal->setAttribute(Qt::WA_DeleteOnClose);
        terminal->show();
        terminal->updateUsers();
    };

    a.setWindowIcon(QIcon(":/icons/graphics/casitaazul.ico"));
    a.setQuitOnLastWindowClosed(true);
    return a.exec();
}
