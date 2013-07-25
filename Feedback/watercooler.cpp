#include "watercooler.h"
#include "person.h"

WaterCooler::WaterCooler(QObject *parent) : QObject(parent)
{
    Person Cathy;
    Person Bob;
    Person Sally;

    Cathy.Name = "Cathy";
    Bob.Name = "Bob";
    Sally.Name = "Sally";

    connect(&Cathy,SIGNAL(speak(QString)),&Bob,SLOT(listen(QString)));
    connect(&Bob,SIGNAL(speak(QString)),&Sally,SLOT(listen(QString)));
    Cathy.Gossip("I heard Mark is bald");
    Bob.Gossip("I heard Mark is bald and YSLC");
}
