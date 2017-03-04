#ifndef MENU_HPP
#define MENU_HPP

#include "spaceinvader.hpp"

#include <QWidget>
#include <QObject>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private:
    Ui::Menu *ui;
};

#endif // MENU_HPP
