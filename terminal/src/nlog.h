#ifndef NLOG_H
#define NLOG_H

#include <QObject>
#include <QFile>
namespace nd{
    class logger : public QObject
    {
        Q_OBJECT
        Q_ENUMS(logtype)
    public:
        enum logtype{ debug, normal, warning, error};
        static logger* instance();
        bool    setUp();
        ~logger();
    signals:

    public slots:
        static void log(QString str, nd::logger::logtype type = nd::logger::normal);
    protected:
        explicit logger(QObject *parent = 0);
        static logger* t_instance;
        QFile   critical_file, warning_file, information_file;
        QString critical_filename, warning_filename, information_filename;
    };
}
#endif // NLOG_H
