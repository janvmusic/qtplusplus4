#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;
    QString Line = "a,b,c,d,e,f,g";
    //List.append("Hello");
    List = Line.split(",");
    List.replaceInStrings("b","batman");
    QString after = List.join(".");
    qDebug() << after;

//    foreach(QString itm, List)
//    {
//        qDebug() << itm;
//    }

    return a.exec();
}
