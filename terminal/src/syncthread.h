#ifndef SYNCTHREAD_H
#define SYNCTHREAD_H

#include <QThread>

class syncThread : public QThread
{
    Q_OBJECT
public:
    explicit    syncThread(QObject *parent = 0);
    void        run();
signals:
    
public slots:
    
};

#endif // SYNCTHREAD_H
