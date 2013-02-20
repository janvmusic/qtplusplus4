#include <QtCore/QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString mStr = "Hello World :P \n";
    QString mStr2 = "mazapan mazapan";
    qDebug() << mStr + " " + mStr2;
    return a.exec();
}
