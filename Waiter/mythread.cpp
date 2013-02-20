#include "mythread.h"

mythread::mythread(QObject *parent) :
    QThread(parent)
{
}

void mythread::run()
{
    for(int i=0;i<10;i++)
    {
        qDebug() << i;
        this->msleep(500);
    }
}
