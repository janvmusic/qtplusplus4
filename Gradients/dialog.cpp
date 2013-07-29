#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QLinearGradient grad1(25,100,150,0);
    QRadialGradient grad2(QPoint(100,100),100);
    QConicalGradient grad3(QPoint(100,100),100);

    // Linear
    grad1.setColorAt(0.0,Qt::white);
    grad1.setColorAt(0.5,Qt::green);
    grad1.setColorAt(1.0,Qt::black);

    // Radial
    //grad2.setColorAt(0.0,Qt::white);
    //grad2.setColorAt(0.5,Qt::green);
    //grad2.setColorAt(1.0,Qt::black);

    // Conical
    //grad3.setColorAt(0.0,Qt::white);
    //grad3.setColorAt(0.5,Qt::green);
    //grad3.setColorAt(1.0,Qt::black);

    QRect rect(10,10,200,200);
    painter.fillRect(rect,grad1); // -> Linear Gradient
    //painter.fillRect(rect,grad2); -> Radial Gradiend
    //painter.fillRect(rect,grad3); -> Conical

}
