#include "spaceinvader.hpp"

#include <QDebug>

SpaceInvader::SpaceInvader(const unsigned int _width, const unsigned int _height) :
    height(_height), width(_width)
{
    scene = new QGraphicsScene(this);
    setScene(scene);
    scene->setSceneRect(0, 0, width, height);
    setFixedSize(int(width), int(height));

    QBrush brush(Qt::black);
    setBackgroundBrush(brush);


    player = new Player(width / 2, height - 50, 50, 50);

    scene->addItem(player);

    newAsteroid = new QTimer();

    QObject::connect(newAsteroid, &QTimer::timeout, [&]() {
        Asteroid *ast = new Asteroid(QSize(width, height));
        scene->addItem(ast);
    });

    newAsteroid->start(2 * 1000);
}

void SpaceInvader::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Left:
        player->leftMove();
        break;

    case Qt::Key_Right:
        player->rightMove();
        break;

    case Qt::Key_Space: {
        Ball *ball = new Ball(player->getBallPos());
        scene->addItem(ball);

        break;
    }

    case Qt::Key_Escape:
        close();
        break;

    default:
        break;
    }
}
