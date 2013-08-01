#include <QtCore/QCoreApplication>
#include <QtCore>
#include <QString>
#include <QMap>
#include <QDebug>

void save()
{
    int myNum = 22;
    QMap<qint64,QString> map;
    map.insert(1,"one");
    map.insert(2,"two");
    map.insert(3,"three");

    // Save it to disk
    QFile file("/home/jnunez2/Develop/qtplusplus4/BinaryIO/MyFile.txt");

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open file";
        return;
    }
    else
    {
        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_4_7);

        out << myNum << map;

        file.flush();
        file.close();
        qDebug() << "Data Saved";
    }

}

void load()
{
    int myNum;
    QMap<qint64,QString> map;

    // Load it from disk
    QFile file("/home/jnunez2/Develop/qtplusplus4/BinaryIO/MyFile.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not open file";
        return;
    }
    else
    {
        QDataStream in(&file);
        in.setVersion(QDataStream::Qt_4_7);
        in >> myNum >> map;

        file.close();
        qDebug() << "MyNum = " << myNum;

        foreach(QString item,map.values())
        {
            qDebug() << item;
        }

    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    save();
    load();
    return a.exec();
}
