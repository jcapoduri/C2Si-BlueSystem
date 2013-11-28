#include "book.h"

book::book(QJsonValue &initdata, QObject *parent) :
    nd::object(initdata, parent)
{
}

book::book()
{
}

QList<book *>* book::getFolder()
{
    return this->getField("folder")->valuePtr()->value<QList <book*>* >();
}

QString book::name()
{
    return this->getField("name")->value().toString();
}

quint16 book::number()
{
    return this->getField("number")->value().toInt();
}

quint16 book::simplecopies()
{
    return this->getField("simplecopies")->value().toInt();
}

quint16 book::doublecopies()
{
    return this->getField("simplecopies")->value().toInt();
}

ringing *book::anillado()
{
    return this->getField("ringing")->valuePtr()->value<ringing*>();
}

book *book::parentBook()
{
    return this->_parent;
}

void book::setName(QString value)
{
    this->getField("name")->setValue(value);
}

void book::setNumber(quint16 value)
{
    this->getField("number")->setValue(value);
}

void book::setDoublecopies(quint16 value)
{
    this->getField("doublecopies")->setValue(value);
}

void book::setRinging(ringing *value)
{
    this->getField("ringing")->setValue(QVariant::fromValue(value));
}

void book::setParentBook(book *value)
{
    this->_parent = value;
}



