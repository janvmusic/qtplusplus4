#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QStringList>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;
    List << 1 << 5 <<15 << 22 << 23 << 25 << 30;

    QList<int>::const_iterator iter = qFind(List.begin(),List.end(),2);
    if(iter != List.end())
    {
        qDebug() << "We found a value " << *iter;
    }
    else
    {
        qDebug() << "Not found ";
    }
    return a.exec();
}
//    44 tutorial
//    QStringList List;
//    List << "a" << "b" << "c";
//    QVector<QString> vect(3);
//    qCopy(List.begin(),List.end(),vect.begin());

//    foreach(QString itm,vect)
//    {
//       qDebug() << itm;
//    }

//    45 tutorial
//    QVector<QString> vect(5);
//    qFill(vect.begin()+1,vect.end()-2,"LOL");
//    foreach(QString itm, vect)
//    {
//        qDebug() << itm;
//    }
