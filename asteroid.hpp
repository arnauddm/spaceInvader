#ifndef ASTEROID_HPP
#define ASTEROID_HPP

#include <QGraphicsPolygonItem>
#include <QPolygonF>
#include <QPen>
#include <QColor>
#include <QTimer>
#include <QObject>

class Asteroid : public QGraphicsPolygonItem
{
public:
    Asteroid(QSize window);

    int random(int min, int max);
    void move();

private:
    QTimer *timer;

    unsigned int x;
    unsigned int y;
};

#endif // ASTEROID_HPP
