#include "book.h"

book::book(QJsonValue &initdata, QObject *parent) :
    nd::object(initdata, parent)
{
}

book::book()
{
}
