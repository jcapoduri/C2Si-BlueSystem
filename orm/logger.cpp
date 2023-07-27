#include "logger.h"

using namespace nd;

logger* logger::t_instance = nullptr;

logger::logger(QIODevice *device, int lvl, int verbosity) : debug(new QDebug(device))
{
    //this->debug->setVerbosity(verbosity);
    this->lvl = lvl;
}

logger::~logger() {
    delete debug;
}

logger* logger::instance(){
    if(t_instance == nullptr){
        t_instance = new logger();
    }
    return t_instance;
}

void logger::setup(QIODevice *device, int lvl, int verbosity)
{
    if (t_instance != nullptr) delete t_instance;
    t_instance = new logger(device, lvl, verbosity);

}

void logger::log(QVariant str)
{
    qDebug() << "log: " <<  str;
}


void logger::record(QVariant str)
{
    *this->debug << str;
}

