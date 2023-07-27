#ifndef LOGGER_H
#define LOGGER_H
#include "nd_global.h"
#include <QString>
#include <QDebug>

namespace nd{
    class NDSHARED_EXPORT logger
    {
    public:
        static void    setup(QIODevice *device = nullptr, int lvl = 3, int verbosity = 2);
        static logger* instance();
        static void    log(QVariant str);
        void information(QVariant str) { if (this->lvl >= 3) record(str); }
        void warning(QVariant str) { if (this->lvl >= 2) record(str); }
        void error(QVariant str) { if (this->lvl >= 1) record(str); }
        ~logger();
        logger(QIODevice *device = nullptr, int lvl = 3, int verbosity = 2);
    protected:
        static logger* t_instance;
        void record(QVariant str);
        QDebug* debug;
        int     lvl;
    };
}

#endif // LOGGER_H
