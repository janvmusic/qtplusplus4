#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;
    List << 1 << 23 << 22 << 84 << 16 << 25;

    QList<int>::const_iterator Iter = qFind(List.begin(), List.end(), 15);

    if(Iter != List.end()){
      qDebug() << "Found it!" << *Iter;
    }else{
      qDebug() << "Not found";
    }

    return a.exec();
}
