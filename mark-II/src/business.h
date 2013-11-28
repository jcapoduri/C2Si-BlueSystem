#ifndef BUSINESS_H
#define BUSINESS_H

#include "object.h"

class business : public nd::object
{
    Q_OBJECT
public:
    explicit business(QJsonValue initdata, QObject *parent = 0);
    business();

    //setters
    void    setName(QString value);
    void    setAddress(QString value);
    void    setOwner(QString value);
    void    setEmail(QString value);
    void    setTelephone(QString value);
    void    setSfvalue(double value);
    void    setDfvalue(double value);
    void    setImpsfvalue(double value);
    void    setImpdfvalue(double value);
    void    setColoursfvalue(double value);
    void    setColourdfvalue(double value);
    void    impcolorsfvalue(double value);
    void    impcolordfvalue(double value);

    //getters
    QString name();
    QString address();
    QString owner();
    QString email();
    QString telephone();
    double  sfvalue();
    double  dfvalue();
    double  impsfvalue();
    double  impdfvalue();
    double  coloursfvalue();
    double  colourdfvalue();
    double  impcolorsfvalue();
    double  impcolordfvalue();
    
};

Q_DECLARE_METATYPE(business)
Q_DECLARE_METATYPE(business*)
Q_DECLARE_METATYPE(QList<business*>)
Q_DECLARE_METATYPE(QList<business*>*)

#endif // BUSINESS_H
