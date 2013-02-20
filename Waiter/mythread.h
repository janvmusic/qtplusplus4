#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QtCore>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = 0);

protected:
    void run();

signals:

public slots:

};

#endif // MYTHREAD_H
