#include <QtGui/QApplication>
#include "neodymium.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nd::connection* conn;
    conn = nd::connection::instance();
    conn->setMainDb(conn->addMySQL("mysql", "localhost", "root", "", "neodymium"));
    //conn->setFallbackDb(conn->addSQLite("sqlite", "fallback.db"));
    //conn->check();
    /*u.setUsername("hola");
    u.setPassword("viteh");
    u.commit();*
    u.update();
    qDebug() << u.internalID();
    u.setUsername("chau");
    u.commit();
    qDebug() << u.internalID();
    u.erase();*/
    nd::logger::log("para vos, para vos!");
    return a.exec();
    //return 0;
}
