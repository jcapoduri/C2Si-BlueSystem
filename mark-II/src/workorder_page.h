#ifndef WORKORDER_PAGE_H
#define WORKORDER_PAGE_H
#include "object.h"

class workorderPage : public nd::object
{
    Q_OBJECT
public:
    explicit workorderPage(QJsonValue initdata, QObject *parent = 0);
    workorderPage();

    //getters
    qint32      pagefrom();
    qint32      pageto();
    //setters
    void        setPagefrom(qint32 value);
    void        setPageto(qint32 value);

signals:
    
public slots:
    
};


Q_DECLARE_METATYPE(workorderPage)
Q_DECLARE_METATYPE(workorderPage*)
Q_DECLARE_METATYPE(QList<workorderPage*>)
Q_DECLARE_METATYPE(QList<workorderPage*>*)
#endif // WORKORDER_PAGE_H
