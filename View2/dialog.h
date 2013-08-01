#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mysquare.h"
#include <QtGui>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    MySquare *square;
};

#endif // DIALOG_H
