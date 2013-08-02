#include <QtCore/QCoreApplication>
#include "person.h"
#include <QtCore>
#include <QDebug>
#include "Overload.h"

void save()
{
    Person person1;
    person1.age = 36;
    person1.name = "Bryan";

    Person person2;
    person2.age = 24;
    person2.name = "Bob";

    QFile file("/home/jnunez2/Develop/qtplusplus4/BinIO2/people.txt");

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open file";
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_4_8);
    out << person1;
    out << person2;

    file.flush();
    file.close();

}

void load()
{
    Person person1;
    Person person2;

    QFile file("/home/jnunez2/Develop/qtplusplus4/BinIO2/people.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not open file";
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_8);
    in >> person1;
    in >> person2;

    file.close();
    qDebug() << person1.name << " is " << person1.age;
    qDebug() << person2.name << " is " << person2.age;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //save();
    load();
    return a.exec();
}
