#include <QtCore/QCoreApplication>
#include <QtCore>
#include <QDebug>
#include <QtXml>

// DOM method of reading
void listElements(QDomElement root, QString tagname, QString attribute)
{
    QDomNodeList items = root.elementsByTagName(tagname);
    qDebug() <<  "Total items = " << items.count();

    for(int i = 0; i < items.count(); i++)
    {
        QDomNode itemNode = items.at(i);

        // Convert to element
        if(itemNode.isElement())
        {
            QDomElement itemEle =  itemNode.toElement();
            qDebug() <<  itemEle.attribute(attribute);
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    
    QDomDocument document;

    QFile file("/home/jnunez2/Develop/qtplusplus4/ReadXMLDOM/MyXML.xml");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Filed to open file";
        return -1;
    }
    else
    {
        if(!document.setContent(&file))
        {
            qDebug() << "Failed to load document";
            return -1;
        }

        file.close();
    }

    // Get the root element
    QDomElement root = document.firstChildElement();
    qDebug() << "More advanced";

    // Get  chaper
    QDomNodeList books = root.elementsByTagName("Book");
    for(int i = 0; i < books.count(); i++)
    {
        QDomNode bookNode = books.at(i);
        // convert to an element
        if(bookNode.isElement())
        {
            QDomElement book = bookNode.toElement();
            qDebug() << "Chaper in " << book.attribute("Name");
            listElements(book,"Chapter","Name");
        }

    }

    // List of books
    listElements(root,"Book","Name");

    qDebug() << "Finished";
    return a.exec();
}
