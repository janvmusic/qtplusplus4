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

    // Qpen
    QPen linepen;
    linepen.setWidth(8);
    linepen.setColor(Qt::red);
    //linepen.setJoinStyle(Qt::RoundJoin);
    linepen.setJoinStyle(Qt::MiterJoin);
    linepen.setStyle(Qt::DotLine);

    // Brush
    QBrush fillBrush;
    fillBrush.setColor(Qt::green);
    fillBrush.setStyle(Qt::SolidPattern);

    //Make our polygon
    QPolygon poly;
    poly << QPoint(10,10);
    poly << QPoint(10,100);
    poly << QPoint(100,10);
    poly << QPoint(100,100);

    // Path
    QPainterPath path;
    path.addPolygon(poly);

    painter.setPen(linepen);
    painter.drawPolygon(poly);
    painter.fillPath(path,fillBrush);
}
