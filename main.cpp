#include "game.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game *game = new Game(1000, 600);
    game->show();

    return a.exec();
}
