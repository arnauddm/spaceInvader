#ifndef BALL_HPP
#define BALL_HPP

#include "asteroid.hpp"

#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QObject>
#include <QBrush>
#include <QColor>
#include <QPoint>
#include <QList>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Ball : public QGraphicsEllipseItem
{
public:
    Ball(const unsigned int _x, const unsigned int _y);
    Ball(QPoint pos);

    void move();
private:
    QTimer *timer;

private:
    unsigned int x;
    unsigned int y;
};

#endif // BALL_HPP
