#ifndef OVERLOAD_H
#define OVERLOAD_H

#include "person.h"
#include <QtCore>

QDataStream &operator<<(QDataStream &out, const Person &person);
QDataStream &operator>>(QDataStream &in, Person &person);

QDataStream &operator<<(QDataStream &out, const Person &person)
{
    // Write person class to the stream
    out << person.age << person.name;
    return out;
}

QDataStream &operator>>(QDataStream &in, Person &person)
{
    // Write person class to the stream
    person = Person();
    in >> person.age >> person.name;
    return in;
}

#endif // OVERLOAD_H
