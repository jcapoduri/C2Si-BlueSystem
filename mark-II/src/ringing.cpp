#include "ringing.h"

ringing::ringing(QJsonValue &initdata, QObject *parent) :
    nd::object(initdata, parent)
{
}

ringing::ringing()
{
}

void ringing::setCost(double value)
{
    this->setValue("cost", value);
}

void ringing::setName(QString value)
{
    this->setValue("name", value);
}

double ringing::cost()
{
    return this->value("cost").toDouble();
}

QString ringing::name()
{
    return this->value("name").toString();
}


