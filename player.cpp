#include "player.hpp"

#include <QDebug>

Player::Player(const unsigned int _x, const unsigned int _y, const unsigned int _width, const unsigned int _height) :
    x(_x), y(_y), width(_width), height(_height)
{
    QPolygonF poly;
    poly << QPointF(x + (width / 2), y) << QPointF(x, y + height) << QPointF(x + width, y + height);

    setPolygon(poly);

    QPen pen(Qt::white, 2, Qt::SolidLine, Qt::RoundCap);
    setPen(pen);


    setFlag(QGraphicsRectItem::ItemIsFocusable);
    setFocus();
}

unsigned int Player::getX() {
    return x;
}

unsigned int Player::getY() {
    return y;
}

QPoint Player::getPos() {
    return QPoint(x, y);
}

unsigned int Player::getWidth() {
    return width;
}

unsigned int Player::getHeight() {
    return height;
}

QSize Player::getSize() {
    return QSize(width, height);
}

void Player::leftMove() {
    x -= 10;
    moveBy(-10, 0);

    if(x < 0) {
        x = 0;
        setPos(0, y);
    }
}

void Player::rightMove() {
    x += 10;
    moveBy(10, 0);

    //setRotation(this->rotation() + 5);

    if(x - width > 1000) {
        x = 1000 - width;
        setPos(x, y);
    }
}

QPoint Player::getBallPos() {
    return QPoint(x + width / 2 - 5, y);
}
