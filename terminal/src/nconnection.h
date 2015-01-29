#ifndef NCONNECTION_H
#define NCONNECTION_H

#include <QObject>
#include <QTimer>
#include <QtSql>
#include <QList>

namespace nd{
    class connection : public QObject
    {
        Q_OBJECT
    public:
        static connection* instance();
        static void         deleteLater();
        static QSqlDatabase addSQLite(QString name, QString file);
        static QSqlDatabase addMySQL(QString name, QString host, QString user, QString pass, QString dbname);
        bool    dynamicSync() const{ return t_dynamicSync; }

        bool        exec(QString str, QString fallbackstr = "");
        QSqlQuery   select(QString str);

        template<class T>
        QList<T>    selectObj(QString filter);
        quint64     lastId();

    public slots:
        void    setMainDb(QSqlDatabase db);
        void    setFallbackDb(QSqlDatabase db);
        void    setDynamicSync(bool value){ t_dynamicSync = value; }
        void    sync(bool backwards = false);
        void    check();
        void    checkConnection();
    signals:
        void    connectionLost();
        void    mainConnectionLost();
        void    connectionRestored();
        void    lastQuery(QString);

    protected:
        void        checkStatus();
        explicit    connection(QObject *parent = 0);
        static      connection* t_conn;
        bool        t_dynamicSync;
        quint64     t_lastId;

        QSqlDatabase    maindb;
        QSqlDatabase    fallbackdb;
        QTimer          t_checkconn;
    };
}
#endif // NCONNECTION_H
