#ifndef CONFIG_H
#define CONFIG_H
#include <QString>
#include "interface.h"

namespace nd{
    class config : public interface{
    public:
        static config*  instance();
        //db interface
        QString     tablename(){ return t_tablename; }
        QVariant    fields(int at, bool toShow);
        bool        setFieldValue(int at, QVariant value);

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
        config(quint64 id = 0);
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
        QDateTime t_lastsync;
    };


}
#endif // CONFIG_H
