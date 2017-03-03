#ifndef GAME_HPP
#define GAME_HPP

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

class Game : public QGraphicsView
{
public:
    Game(const unsigned int _width, const unsigned int _height);

private:
    QGraphicsScene *scene;
    QTimer *newAsteroid;

    Player *player;

    unsigned int height;
    unsigned int width;

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // GAME_HPP
