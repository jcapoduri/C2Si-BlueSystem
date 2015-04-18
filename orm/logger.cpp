#include "logger.h"

using namespace nd;

logger* logger::t_instance = 0;

logger::logger()
{
}

logger* logger::instance(){
    if(t_instance == 0){
        t_instance = new logger();
    };
    return t_instance;
}

void logger::log(QString str)
{
    qDebug() << "log: " <<  str;
}

