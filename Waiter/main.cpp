#include <QtCore/QCoreApplication>
#include "mythread.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    mythread mThread;
    mThread.start();
    mThread.wait();
    qDebug() << "Done";

    return a.exec();
}
