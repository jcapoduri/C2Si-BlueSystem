#include "nlog.h"
#include <QDebug>

nd::logger* nd::logger::t_instance = 0;

nd::logger::logger(QObject *parent) :
    QObject(parent)
{
}

nd::logger::~logger()
{
    critical_file.close();
    warning_file.close();
    information_file.close();
}

nd::logger* nd::logger::instance()
{
    if(t_instance == 0) t_instance = new nd::logger();
    return t_instance;
}

void nd::logger::log(QString str, nd::logger::logtype type)
{
    if(t_instance == 0) t_instance = new nd::logger();
    qDebug() << "log: " << str;
}
