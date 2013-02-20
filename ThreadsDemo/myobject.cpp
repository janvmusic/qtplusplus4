#include "myobject.h"

MyObject::MyObject(QObject *parent) :
    QObject(parent)
{
}

void MyObject::DoSetUp(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()),this,SLOT(DoWork()));
}

void MyObject::DoWork()
{
    for(int i=0;i<10;i++)
    {
        qDebug() << i;
        sleep(1);
    }
}
