#include "syncthread.h"
#include "connection.h"

syncThread::syncThread(QObject *parent) :
    QThread(parent)
{
}

void syncThread::run()
{
    qDebug() << "thread!";
    nd::connection::instance()->sync();
    //exec();
    qDebug() << "end thread!";
    return;
}
