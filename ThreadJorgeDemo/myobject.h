#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>
#include <QThread>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = 0);
    void DoSetUp(QThread &cThread);
    bool Stop;
    int tmpValue;

signals:
    void NumberChanged(int);
public slots:
    void Start();
};

#endif // MYOBJECT_H
