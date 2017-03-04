#include "menu.hpp"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    QObject::connect(ui->spaceInvaderPushButton, &QPushButton::pressed, [&]() {
        SpaceInvader *game = new SpaceInvader(1000, 600);
        game->show();
    });
}

Menu::~Menu()
{
    delete ui;
}
