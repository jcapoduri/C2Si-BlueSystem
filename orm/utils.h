#ifndef UTILS_H
#define UTILS_H
#include <QString>
#include <QVariant>

namespace nd{
    class utils
    {
    public:
        static QString  sanitize(QString value);
        static QString  toSqlValue(QVariant value);
        static QString  addslashes(QString value);

    protected:
        utils();
    };
}
#endif // UTILS_H
