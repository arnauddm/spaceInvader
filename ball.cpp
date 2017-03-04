#include "ball.hpp"

Ball::Ball(const unsigned int _x, const unsigned int _y) :
    x(_x), y(_y)
{
    setRect(x, y, 10, 10);

    timer = new QTimer();

    QObject::connect(timer, &QTimer::timeout, [&]() {
        move();
    });

    timer->start(12);

    QBrush brush(Qt::white);
    setBrush(brush);
}

Ball::Ball(QPoint pos) :
    x(pos.x()), y(pos.y())
{
    setRect(x, y, 10, 10);

    timer = new QTimer();

    QObject::connect(timer, &QTimer::timeout, [&]() {
        move();
    });

    timer->start(12);

    QBrush brush(Qt::white);
    setBrush(brush);
}

void Ball::move() {
    moveBy(0, -2);
    y -= 2;
    if(y < 0)
        delete this;

    QList<QGraphicsItem *> colliding_item = collidingItems();

    for(int i(0) ; i < colliding_item.size() ; i++) {
        if(typeid (*colliding_item.at(i)) == typeid (Asteroid)) {
            //remove them both of the scene
            scene()->removeItem(colliding_item.at(i));
            scene()->removeItem(this);


            /**********************************
             *
             *
             *              NOT WORK
             *
             *
            delete ball and item of memory
            delete colliding_item.at(i);
            delete this;
            return;
             *
             *
             *
             *
             * *********************************/


            //emit asteroidDestroyed();
        }
    }
}
