#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> List;

    for(int i=0;i<10;i++)
    {
        List.append(i);
    }

    QListIterator<int> iter(List);

    iter.toBack();
    while(iter.hasPrevious())
    {
        qDebug() << iter.previous();
        if(iter.hasPrevious())
        {
            qDebug() << "next...."  << iter.peekPrevious();
        }
    }

    return a.exec();
}
