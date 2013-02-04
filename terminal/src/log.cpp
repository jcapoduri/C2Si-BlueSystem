#include "log.h"

log* log::t_instance = 0;

log::log(QObject *parent) :
    QObject(parent)
{
    t_infofile = 0;
    t_errorfile = 0;
    t_debugfile = 0;
    t_fatalfile = 0;
}

log *log::setUp(QString info_file_name, QString error_file_name, QString debug_file_name, QString fatal_file_name)
{
    if(t_instance != 0){
        delete t_instance;
    };
    t_instance = new log();

    t_instance->t_infofile = new QFile(info_file_name);
    t_instance->t_infofile->open(QIODevice::Append);
    t_instance->t_errorfile = new QFile(error_file_name);
    if(!debug_file_name.isEmpty()) t_instance->t_debugfile = new QFile(debug_file_name);
    if(!fatal_file_name.isEmpty()) t_instance->t_fatalfile = new QFile(fatal_file_name);

}

void log::i(QString txt)
{

}

void log::e(QString txt)
{
}

void log::d(QString txt)
{
}

void log::f(QString txt)
{
}
