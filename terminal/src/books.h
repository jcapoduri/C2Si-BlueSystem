#ifndef BOOKS_H
#define BOOKS_H
#include "interface.h"
#include "anillado.h"
#include <QtSql>

class books : public nd::interface
{
public:
    inline books(quint64 id = 0);
    books(const books& other);
    books & operator= (const books &other);
    ~books();
    QString     tablename(){ return t_tablename; }
    QVariant    fields(int at, bool toShow = false);
    bool        setFieldValue(int at, QVariant value);
    bool        commit(quint64 usrid);
    bool        update();
    bool        update(QSqlRecord record);
    bool        updateFromRecord(QSqlRecord record);
    bool        erase(quint64 usrid);
    QString     toString(){ return QString("%1 - %2").arg(t_number).arg(t_name); }

    //setters
    void        setName(QString value){ t_name = value; }
    void        setNumber(quint16 value){ t_number = value; }
    void        setSimpleFaz(quint16 value){ t_simplecopies = value; }
    void        setDoubleFaz(quint16 value){ t_doublecopies = value; }
    //void        setAnillado(float value){ t_anillado = value; }
    void        setAnillado(anillado* value){ t_anillado = value; }
    void        setParent(books* value){ if(t_parent != 0) delete t_parent; t_parent = value; }

    //getters
    QString     name(){ return t_name; }
    quint16     number(){ return t_number; }
    quint16     simpleFaz(){ return t_simplecopies; }
    quint16     doubleFaz(){ return t_doublecopies; }
    //float       anillados(){ return t_anillado; }
    anillado*   anillados(){ return t_anillado; }
    books*      parent(){ return t_parent; }

    //folders
    int     filesCount(){ return t_folder.count(); }
    books*  fileAt(int at){ return t_folder.at(at); }
    bool    addBook(books *bk){ if(t_folder.contains(bk)) return false; else {t_folder.append(bk); bk->setParent(this); return true;}}
    bool    modBook(books *bk){ if(!t_folder.contains(bk)) return false; else {t_folder.removeOne(bk);t_folder.append(bk); bk->setParent(this);}; }
    bool    delBook(books *bk){ if(!t_folder.contains(bk)) return false; else t_folder.removeOne(bk);}
    bool    removeBook(books *bk);
private:
    bool    removeBook(books*parent, books *bk);
    QList<books*>   t_folder;

    QString         t_name;
    quint16         t_number;
    quint16         t_simplecopies;
    quint16         t_doublecopies;
    //float           t_anillado;
    anillado*       t_anillado;
    books*          t_parent;
};

#endif // BOOKS_H

#ifndef BOOKSHASH_H
#define BOOKSHASH_H
inline uint qHash(const books &bk){
    return bk.internalID();
}
#endif // BOOKSHASH_H
