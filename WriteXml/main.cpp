#include <QtCore>
#include <QtXml>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Write XML
    QDomDocument document;

    // Make the root element
    QDomElement root = document.createElement("Books");

    // Add it the document
    document.appendChild(root);

    for(int i = 0; i < 10; i++)
    {
        QDomElement book = document.createElement("Book");
        book.setAttribute("Name"," My Book " + QString::number(i));
        book.setAttribute("ID",QString::number(i));
        root.appendChild(book);

        for (int h = 0; h < 10; h++)
        {
            QDomElement chapter = document.createElement("Chapter");
            chapter.setAttribute("Name"," My Chaper " + QString::number(h));
            chapter.setAttribute("ID",QString::number(h));
            book.appendChild(chapter);
        }
    }

    // Write it to the file
    QFile file("/home/jnunez2/Develop/qtplusplus4/WriteXml/MyXML.xml");
    if(!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        qDebug() << "Fail to open file for writting";
        return -1;
    }
    else
    {
        QTextStream stream(&file);
        stream << document.toString();
        qDebug() << "Finished";
        file.close();
    }

    return a.exec();
}
