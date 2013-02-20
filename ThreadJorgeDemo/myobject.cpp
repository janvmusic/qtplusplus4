#include "myobject.h"

MyObject::MyObject(QObject *parent) :
    QObject(parent)
{
}

void MyObject::DoSetUp(QThread &cThread)
{
    connect(&cThread, SIGNAL(started()),this,SLOT(Start()));
}

void MyObject::Start()
{
    for(int i=tmpValue;i<100;i++)
    {
        if(this->Stop)
        {
            tmpValue = i;
            break;
        }
        emit NumberChanged(i);
    }
}
