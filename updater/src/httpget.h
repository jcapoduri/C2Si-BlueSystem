#ifndef HTTPGET_H
#define HTTPGET_H

#include <QThread>

class httpget : public QThread
{
    Q_OBJECT
public:
    explicit httpget(QObject *parent = 0);
    void    run();

signals:
    
public slots:

private:

};

#endif // HTTPGET_H
