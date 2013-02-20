#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir mdir("/home/jnunez2/Downloads");

    foreach(QFileInfo mitm,mdir.entryInfoList())
    {

        if(mitm.isDir())
        {
            qDebug() << "Dir" << mitm.absoluteFilePath();
        }
        if(mitm.isFile())
        {
            qDebug() << "File" << mitm.absoluteFilePath();
        }
    }


    //QString mPath = "/home/jnunez2/Downloads/videos";
    //Create a directory
    //if(!mdir.exists(mPath))
    //{
    // mdir.mkpath(mPath);
    // qDebug() << "Dir created";
    //}
    //else
    //{
    //qDebug() << "Dir already exists!";
    //}

    //Check if directory exists
    //qDebug() << mdir.exists();
    //foreach(QFileInfo mItm, mdir.drives())
    //{
    //  qDebug() << mItm.absoluteFilePath();
    //}

    return a.exec();
}
