#include <QtCore/QCoreApplication>
#include <QVariant>
#include <QDebug>
#include "myclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    QVariant v = 123.02;
    qDebug() << v.toInt();
    qDebug() << v.toDouble();

    if(v.canConvert<QString>())
    {
        qDebug() << v.toString();
    }

    myclass cClass;
    cClass.number = 222;

    QVariant z = QVariant::fromValue(cClass);
    myclass zClass = z.value<myclass>();
    qDebug() << zClass.number;

    return a.exec();
}

// Static Typing = much secure, assign the type of the variable
// Dynamic typing = you don't know the type or what are you expecting qvariant can help you
// Shared compilation = share libraries like ming10w
// Static compilation = compilation with the main libraries inside of executable
