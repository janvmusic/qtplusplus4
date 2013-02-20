#include "mytimer.h"
#include <QtCore>
#include <QDebug>



MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));
    timer->start(4000);
}

void MyTimer::MySlot()
{
    qDebug() << "Timer executed";
}
