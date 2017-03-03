#include "asteroid.hpp"

Asteroid::Asteroid(QSize window)
{
    x = random(0, window.width());
    y = random(0, window.height() / 4);

    unsigned int numberPoint(random(3, 8));

    QPolygonF poly;

    unsigned int xmin(x - 50);
    unsigned int xmax(x + 50);
    unsigned int ymin(y - 50);
    unsigned int ymax(y + 50);

    for(unsigned int i(0) ; i < numberPoint ; i++) {
        unsigned int xpoint(random(xmin, xmax));
        unsigned int ypoint(random(ymin, ymax));
        QPoint newPoint(xpoint, ypoint);
        poly << newPoint;
    }

    setPolygon(poly);

    QPen pen(Qt::white, 2, Qt::SolidLine, Qt::RoundCap);
    setPen(pen);

    timer = new QTimer();

    QObject::connect(timer, &QTimer::timeout, [&]() {
        move();
    });

    timer->start(100);
}

int Asteroid::random(int min, int max) {
    return min + (rand() % int(max - min + 1));
}

void Asteroid::move() {
    moveBy(0, 1);
    y += 1;
}
