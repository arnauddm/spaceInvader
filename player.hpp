#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <QPoint>
#include <QSize>
#include <QGraphicsPolygonItem>
#include <QPolygonF>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QKeyEvent>

class Player : public QGraphicsPolygonItem
{
public:
    //constructor
    Player(const unsigned int _x, const unsigned int _y, const unsigned int _width, const unsigned int _height);

    //accessor
    unsigned int getX();
    unsigned int getY();
    QPoint getPos();
    unsigned int getWidth();
    unsigned int getHeight();
    QSize getSize();
    QPoint getBallPos();

    //functions
    void leftMove();
    void rightMove();

private:
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;

};

#endif // PLAYER_HPP
