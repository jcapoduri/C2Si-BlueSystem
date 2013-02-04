#ifndef CLIENT_H
#define CLIENT_H
#include "interface.h"
using namespace nd;
class client : public interface
{
    public:
        client(quint64 id = 0);
        //db interface
        bool        setFieldValue(int at, QVariant value);
        QVariant    fields(int at, bool toShow);
        QString     tablename(){ return t_tablename; }

        //setters
        void    setName(QString value){ t_name = value; }
        void    setEmail(QString value){ t_email = value; }

        //getters
        QString name(){ return t_name; }
        QString email(){ return t_email; }
    protected:
        QString t_name;
        QString t_email;
};

#endif // CLIENT_H
