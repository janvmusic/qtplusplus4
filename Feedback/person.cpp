#include "person.h"

Person::Person(QObject *parent) : QObject(parent)
{
}

void Person::listen(QString words)
{
    qDebug() << Name << "says someone told me... " << words;
}

void Person::Gossip(QString words)
{
    qDebug() << Name << "says ... " << words;
    emit speak(words);
}
