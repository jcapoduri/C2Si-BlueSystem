#ifndef BOOK_H
#define BOOK_H
#include "object.h"
#include "ringing.h"

class book : public nd::object
{
    Q_OBJECT
public:
    explicit book(QJsonValue & initdata, QObject *parent = 0);
    explicit book();
    
    QList<book*>    getFolder();
    QString         name();
    quint16         number();
    quint16         simplecopies();
    quint16         doublecopies();
    ringing*        anillado();
    book*           parentBook();

    void            setName(QString value);
    void            setNumber(quint16 value);
    void            setDoublecopies(quint16 value);
    void            setRinging(ringing* value);
    void            setParentBook(book* value);

signals:
    
public slots:

private:
    book* _parent;
};

Q_DECLARE_METATYPE(book)
Q_DECLARE_METATYPE(book*)
Q_DECLARE_METATYPE(QList<book*>)

#endif // BOOK_H
