#include "mythread.h"
#include <QtCore>

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{
}

void MyThread::run()
{
    for(int i=tmpValue;i<10000;i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->Stop)
        {
            tmpValue = i;
            break;
        }
        mutex.unlock();
        emit NumberChanged(i);
        this->msleep(100);
    }
}
