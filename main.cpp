#include "menu.hpp"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Menu *menu = new Menu();
    menu->show();

    return a.exec();
}
