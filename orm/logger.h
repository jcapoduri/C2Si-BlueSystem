#ifndef LOGGER_H
#define LOGGER_H
#include <QString>
#include <QDebug>

namespace nd{
    class logger
    {
    public:
        static logger* instance();
        static void log(QString str);
    protected:
        logger();
        static logger* t_instance;
    };
}

#endif // LOGGER_H
