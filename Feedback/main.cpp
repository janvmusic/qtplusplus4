#include <QtCore/QCoreApplication>
#include "watercooler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    WaterCooler cooler;
    return a.exec();
}
