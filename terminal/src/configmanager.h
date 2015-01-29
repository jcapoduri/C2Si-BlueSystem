#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <QObject>
#include <QSettings>

class configManager : public QObject
{
    Q_OBJECT
private:
    explicit configManager(QObject *parent = 0);
    static configManager* _instance;
    QSettings*   sets;

public:
    static configManager*   instance();
    static QVariant         getValue(QString key);
    static QVariant         getValue(QString section, QString key);
    static void             setValue(QString key, QVariant val);
    static void             setValue(QString section, QString key ,QVariant val);

    ~configManager();

signals:

public slots:
};

#endif // CONFIGMANAGER_H
