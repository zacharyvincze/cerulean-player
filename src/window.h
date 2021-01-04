#pragma once
#include <ncurses.h>

#include "player.h"

class Window {
    Player& _player;
    int _rows, _cols, _center_row, _center_col;
    WINDOW* _win;

   public:
    Window(Player& player);
    void draw();
    int getInput();
    void setPlayerVersion(unsigned int major, unsigned int minor);

    int version_minor, version_major;
};