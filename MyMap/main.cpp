#include <QtCore/QCoreApplication>
#include <QHash>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash<int,QString> Employee;
    Employee.insert(1,"Bob");
    Employee.insert(2,"Chad");
    Employee.insert(3,"Mary");

    qDebug() << "3 = " << Employee.value(3);

//    foreach(int i, Employee.keys())
//    {
//        qDebug() << Employee[i];
//    }

//    QHashIterator<int,QString> iter(Employee);
//    while(iter.hasNext())
//    {
//        iter.next();
//        qDebug() << iter.key() << " = " << iter.value();
//    }

    return a.exec();
}
