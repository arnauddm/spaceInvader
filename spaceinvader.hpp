#ifndef SPACEINVADER_HPP
#define SPACEINVADER_HPP

#include "player.hpp"
#include "ball.hpp"
#include "asteroid.hpp"

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QBrush>
#include <QColor>
#include <QKeyEvent>
#include <QTimer>
#include <QObject>

class SpaceInvader : public QGraphicsView
{
public:
    SpaceInvader(const unsigned int _width, const unsigned int _height);

private:
    QGraphicsScene *scene;
    QTimer *newAsteroid;

    Player *player;

    unsigned int height;
    unsigned int width;
    unsigned int score;

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // GAME_HPP
