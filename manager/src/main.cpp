#include <QApplication>
#include "mainwindow.h"
#include "connection.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);
    QApplication a(argc, argv);
    /*nd::connection* conn;
    conn = nd::connection::instance();
    conn->setMainDb(conn->addMySQL("mysql", "c2si.com.ar", "shaka_imenu", "/*-Hola123", "shaka_imenu"));*/

    MainWindow* w = MainWindow::instance();
    w->connectToDB();
    w->showMaximized();
    w->login();
    a.setWindowIcon(QIcon(":/icons/graphics/casitaazul.ico"));
    return a.exec();
}
