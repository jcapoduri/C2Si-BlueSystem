#ifndef JOB_H
#define JOB_H
#include "object.h"
#include "book.h"
#include "user.h"
#include "business.h"

class job : public nd::object
{
    Q_OBJECT
public:
    explicit job(QJsonValue initdata, QObject *parent = 0);

    //getters
    QDate       date();
    QTime       hour();
    QString     fileTitle();
    book*       currentBook();
    bool        done();
    QString     kind();
    bool        ignore();
    user*       userowner();
    business*   getBusiness();

    //setter
    void        setDate(QDate value);
    void        setHour(QTime value);
    void        setFileTitle(QString value);
    void        setBooks(book* value);
    void        setDone(bool value);
    void        setKindOfJob(QString value);
    void        setIgnore(bool value);
    void        setUserOwner(user* value);
    void        setBusiness(business * value);
    
signals:
    
public slots:
    
};

#endif // JOB_H
