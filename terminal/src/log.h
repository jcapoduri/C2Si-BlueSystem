#ifndef LOG_H
#define LOG_H

#include <QObject>
#include <QFile>

class log : public QObject
{
    Q_OBJECT
public:
    enum logType{debugType, infoType, errorType, fatalType};

    static log* setUp(QString info_file_name, QString error_file_name, QString debug_file_name = "", QString fatal_file_name = "");
    static void i(QString txt);
    static void e(QString txt);
    static void d(QString txt);
    static void f(QString txt);

signals:
    
public slots:

private:
    explicit log(QObject *parent = 0);

    static log* t_instance;
    QFile*      t_infofile;
    QFile*      t_errorfile;
    QFile*      t_debugfile;
    QFile*      t_fatalfile;
};

#endif // LOG_H
