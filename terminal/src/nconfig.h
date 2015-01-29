#ifndef NCONFIG_H
#define NCONFIG_H
#include <QString>
#include "ndbinterface.h"

namespace nd{
    class config : public dbInterface{
    public:
        static config*  instance(){
            if(t_instance == 0){
                t_instance = new config(1);
                t_instance->update();
            };
            return t_instance;
        }
        //db interface
        QString     tablename(){ return t_tablename; }
        QVariant    fields(int at, bool toShow){
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
                        default:
                            return QVariant();
                    };
                }
        bool        setFieldValue(int at, QVariant value){
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
                            default:
                                ok = false;
                        };
                        return ok;
                    }

        //getters
        QString systemName(){ return t_systemname; }
        quint16 systemMajorVersion(){ return t_systemmajorversion; }
        quint16 systemMinorVersion(){ return t_systemminorversion; }
        quint16 systemCompileVersion(){ return t_systemcompileversion; }
        QString systemTypeVersion(){ return t_systemtypeversion; }
        QString systemversion(){
            return QString("%1.%2.%3 %4").arg(t_systemmajorversion).arg(t_systemminorversion).arg(t_systemcompileversion).arg(t_systemtypeversion);
        }
        QString infologFilename(){ return t_infolog_filename; }
        QString warninglogFilename(){ return t_warninglog_filename; }
        QString errorlogFilename(){ return t_errorlog_filename; }
        //setters
        void    setSystemaName(QString value){ t_systemname = value; }
        void    setSystemMajorVersion(quint64 value){ t_systemmajorversion = value; }
        void    setSystemMinorVersion(quint64 value){ t_systemminorversion = value; }
        void    setSystemCompileVersion(quint64 value){ t_systemcompileversion = value; }
        void    setInfologFilename(QString value){ t_infolog_filename = value; }
        void    setWarningFilename(QString value){ t_warninglog_filename = value; }
        void    setErrorlogFilename(QString value){ t_errorlog_filename = value; }

    protected:
        config(quint64 id = 0) : dbInterface(id){
            t_tablename = "ndconfig";
            t_fieldList << "systemname" << "systemmajorversion" << "systemminorversion" << "systemcompileversion" << "systemtypeversion";
            t_fieldList << "infolog_file" << "warninglog_file" << "errorlog_file";
            t_instanced = false;
        }
        static config* t_instance;

        QString t_systemname;
        quint16 t_systemmajorversion;
        quint16 t_systemminorversion;
        quint16 t_systemcompileversion;
        QString t_systemtypeversion;
        //
        QString t_infolog_filename;
        QString t_warninglog_filename;
        QString t_errorlog_filename;
    };

    config* config::t_instance = 0;
    /*class config{
        public:
            //system version
            static QString systemname;
            static quint16 systeammajorversion;
            static quint16 systeamminorversion;
            static quint16 systeamcompileversion;
            static QString systemtypeversion;
            static QString systemversion();
            //
            static QString infolog_filename;
            static QString warninglog_filename;
            static QString errorlog_filename;
            static config*  instance();
        private:
            static config   t_instance;
    };
    QString config::systemname = "";
    quint16 config::systeammajorversion = 0;
    quint16 config::systeamminorversion = 0;
    quint16 config::systeamcompileversion = 0;
    QString config::systemtypeversion = "alpha";
    QString config::systemversion(){
        return QString("%1.%2.%3 %4").arg(systeammajorversion).arg(systeamminorversion).arg(systeamcompileversion).arg(systemtypeversion);
    }

    QString config::infolog_filename = "info.log";
    QString config::warninglog_filename = "warning.log";
    QString config::errorlog_filename = "error.log";*/
}
#endif // NCONFIG_H
