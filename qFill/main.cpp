#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QVector>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<QString> Vect(5);
    qFill(Vect.begin()+1,Vect.end() - 4, "LOL");

    foreach(QString itm, Vect){
      qDebug() << itm;
    }

    return a.exec();
}
