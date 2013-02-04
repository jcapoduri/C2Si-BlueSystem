#ifndef FOLDER_H
#define FOLDER_H
#include "interface.h"
#include "books.h"

using namespace nd;

class folder : public nd::interface
{
public:
    folder(quint64 id = 0);
    QString     tablename(){ return t_tablename; }
    bool setFieldValue(int at, QVariant value);
    QVariant    fields(int at, bool toShow);

    QString     name(){ return t_name; }
    void        setName(QString value){ t_name = value; }



protected:
    QString         t_name;
    QList<books>    t_books;
    QList<folder>   t_folder;

};

#endif // FOLDER_H
