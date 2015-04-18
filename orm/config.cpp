#include "config.h"


using namespace nd;

config* config::t_instance = 0;

config::config(quint64 id) : interface(id){
    t_tablename = "ndconfig";
    t_fieldList << "systemname" << "systemmajorversion" << "systemminorversion" << "systemcompileversion" << "systemtypeversion";
    t_fieldList << "infolog_file" << "warninglog_file" << "errorlog_file" << "lastsync";
    t_instanced = false;
}

config* config::instance(){
    if(t_instance == 0){
        t_instance = new config(1);
        t_instance->update();
    };
    return t_instance;
}

QVariant config::fields(int at, bool toShow)
{
    switch(at){
        case 0:
            return t_systemname;
            break;
        case 1:
            return t_systemmajorversion;
            break;
        case 2:
            return t_systemminorversion;
            break;
        case 3:
            return t_systemcompileversion;
            break;
        case 4:
            return t_systemtypeversion;
            break;
        case 5:
            return t_infolog_filename;
            break;
        case 6:
            return t_warninglog_filename;
            break;
        case 7:
            return t_errorlog_filename;
            break;
        case 8:
            return t_lastsync;
            break;
        default:
            return QVariant();
    };
}

bool config::setFieldValue(int at, QVariant value)
{
    bool ok = true;
    switch(at){
        case 0:
            t_systemname = value.toString();
            break;
        case 1:
            t_systemmajorversion = value.toInt(&ok);
            break;
        case 2:
            t_systemminorversion = value.toInt(&ok);
            break;
        case 3:
            t_systemcompileversion = value.toInt(&ok);
            break;
        case 4:
            t_systemtypeversion = value.toString();
            break;
        case 5:
            t_infolog_filename = value.toString();
            break;
        case 6:
            t_warninglog_filename = value.toString();
            break;
        case 7:
            t_errorlog_filename = value.toString();
            break;
        case 8:
            t_lastsync = value.toDateTime();
            break;
        default:
            ok = false;
    };
    return ok;
}
