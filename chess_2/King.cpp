#include "King.h"


std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

King::King()
{
    xpos = new int;
    ypos = new int;
    *xpos = *ypos = 0;
}

King::King(int x, int y)
{
    xpos = new int;
    ypos = new int;
    *xpos = x;
    *ypos = y;
}

King::~King()
{
    delete ypos;
    delete xpos;
}

std::string King::getVisual()
{
    std::string ch = this->king;
    return ch;
}

void King::move(int x, int y, std::string board[8][8])
{
    board[*xpos][*ypos] = ' ';
    *xpos = x;
    *ypos = y;
    board[*xpos][*ypos] = this->getVisual();
}

std::ostream& operator<<(std::ostream& os, King& k)
{
    os << k.king;
    return os;
}