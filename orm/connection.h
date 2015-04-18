#ifndef CONNECTION_H
#define CONNECTION_H
#include "nd_global.h"
#include <QtSql>
#include <QTimer>
#include <QtSql>
#include <QList>

namespace nd{
class NDSHARED_EXPORT connection : public QObject
    {
        Q_OBJECT
    public:
        enum    SyncType{SyncToMain, SyncToFallBack};
        static connection* instance();
        static void         deleteLater();
        static QSqlDatabase addSQLite(QString name, QString file);
        static QSqlDatabase addMySQL(QString name, QString host, QString user, QString pass, QString dbname);
        bool    dynamicSync() const{ return t_dynamicSync; }

        bool        exec(QString str, QString fallbackstr = "");
        QSqlQuery   select(QString str, QSqlDatabase db);
        QSqlQuery   select(QString str);

        quint64     lastId();
        static QSqlDatabase maindb();
        static QSqlDatabase fallbackdb();

        QString     exportMainDb();
        QString     exportFallbackDb();

    public slots:
        void    setMainDb(QSqlDatabase db);
        void    setFallbackDb(QSqlDatabase db);
        void    setDynamicSync(bool value){ t_dynamicSync = value; }
        void    sync(SyncType sync = SyncToFallBack);
        void    check();
        void    checkConnection();
        void    addTable(QString name);

    signals:
        void    connectionLost();
        void    mainConnectionLost();
        void    connectionRestored();
        void    lastQuery(QString);

    protected:
        QString     exportDb(QSqlDatabase db);
        void        checkStatus();
        explicit    connection(QObject *parent = 0);
        static      connection* t_conn;
        bool        t_dynamicSync;
        quint64     t_lastId;

        QSqlDatabase    t_maindb;
        QSqlDatabase    t_fallbackdb;
        QTimer          t_checkconn;
        QStringList     t_tables;

    };
}

#endif // CONNECTION_H
