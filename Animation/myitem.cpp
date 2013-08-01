#include "myitem.h"

MyItem::MyItem()
{
    // Random start rotation
    angle = (qrand() % 360);
    setRotation(angle);

    // set the speed
    speed = 5;

    // Random start position
    int startX = 0;
    int startY = 0;

    if((qrand() % 1))
    {
        startX = (qrand() % 200);
        startX = (qrand() % 200);
    }
    else
    {
        startX = (qrand() % -100);
        startX = (qrand() % -100);
    }
    setPos(mapToParent(startX,startY));
}

QRectF MyItem::boundingRect() const
{
    return QRect(0,0,20,20);
}

void MyItem::DoCollisions()
{
    // Set a new position

    // Change the angle with a little randomness
    if(qrand() % 1)
    {
        setRotation(rotation() + (180 + (qrand() % 10)));
    }
    else
    {
        setRotation(rotation() + (180 + (qrand() % -10)));
    }

    // See if the new position is in the bounds
    QPointF newPoint = mapToParent(-(boundingRect().width()),-(boundingRect().width()+2));
    if(!scene()->sceneRect().contains(newPoint))
    {
        // Move it back in bounds
        newPoint = mapToParent(0,0);
    }
    else
    {
        // Set new position
        setPos(newPoint);
    }
}

void MyItem::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();
    setPos(mapToParent(0,-(speed)));

}

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush Brush(Qt::gray);

    // Basic collition detection
    if(scene()->collidingItems(this).isEmpty())
    {
         // No  Colision!
        Brush.setColor(Qt::green);
    }
    else
    {
        // Colision!
        Brush.setColor(Qt::red);

        // Set new position
        DoCollisions();
    }

    painter->fillRect(rec,Brush);
    painter->drawRect(rec);
}
