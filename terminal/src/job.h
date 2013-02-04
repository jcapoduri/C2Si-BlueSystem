#ifndef JOB_H
#define JOB_H
#include "interface.h"
#include "workorder.h"
#include "books.h"
#include "business.h"

class job : public nd::interface
{
public:
    enum kindOfJob{ fromClient, fromFile, fromBooks };
    job(quint64 id = 0);
    job(const job &other);
    ~job();
    QString     tablename(){ return t_tablename; }
    bool        setFieldValue(int at, QVariant value);
    QVariant    fields(int at, bool toShow = false);
    bool        commit(quint64 usrid);
    bool        update();
    bool        update(QSqlRecord record);
    bool        erase(quint64 usrid);

    //getters
    QDate       date(){ return t_date; }
    QTime       hour(){ return t_hour; }
    QString     fileTitle(){ return t_fileTitle; }
    books*      currentBook(){ return t_books; }
    bool        done(){ return t_done; }
    kindOfJob   kind(){ return t_kind; }
    bool        ignore(){ return t_ignore; }
    user*       userowner(){ return t_userowner; }
    business*   getBusiness(){ return t_business; }

    //setter
    void        setDate(QDate value){ t_date = value; }
    void        setHour(QTime value){ t_hour = value; }
    void        setFileTitle(QString value){ t_fileTitle = value; }
    void        setBooks(books* value){ t_books = value; }
    void        setDone(bool value){ t_done = value; }
    void        setKindOfJob(kindOfJob value){ t_kind = value; }
    void        setIgnore(bool value){ t_ignore = value; }
    void        setUserOwner(user* value){ t_userowner = value; }
    void        setBusiness(business * value){ t_business = value; }

    workorder*  workAt(int at){ return t_works.at(at); }
    bool        addWork(workorder *work){ if(t_works.contains(work)) return false; else t_works.append(work);}
    bool        modWork(workorder *work){ if(!t_works.contains(work)) return false; else {t_works.removeOne(work);t_works.append(work);}; }
    bool        delWork(workorder *work){ if(!t_works.contains(work)) return false; else t_works.removeOne(work);}
    int         workCount(){ return t_works.count(); }


    static job* fromWorkorder(workorder* w);

protected:
    QDate               t_date;
    QTime               t_hour;
    QString             t_fileTitle;
    bool                t_done;
    books               *t_books;
    QList<workorder*>   t_works;
    kindOfJob           t_kind;
    bool                t_ignore;
    user*               t_userowner;
    business*           t_business;
};

#endif // JOB_H
