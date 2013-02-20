#include <QtCore/QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
//Tutorial 11
//void Write(QString FileName)
//{
//    QFile mFile(FileName);
//    if(!mFile.open(QFile::WriteOnly | QFile::Text))
//    {
//        qDebug() << "Could not open the file for write";
//        return;
//    }

//    QTextStream out(&mFile);
//    out << "Mazapan";
//    mFile.flush();
//    mFile.close();

//}

void Read(QString FileName)
{
    QFile mFile(FileName);
    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open the file for read:" << mFile.Text;
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug() << mText;
    mFile.close();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Tutorial 12
    //QString mFilename = "/home/jnunez2/Downloads/something";
    //Write(mFilename);
    //Read(mFilename);

    //Tutorial 13
    Read(":/MyFiles/Files.pro");

    return a.exec();
}
