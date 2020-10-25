#include "Knight.h"


std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

Knight::Knight()
{
    xpos = new int;
    ypos = new int;
    *xpos = *ypos = 0;
}

Knight::Knight(int x, int y)
{
    xpos = new int;
    ypos = new int;
    *xpos = x;
    *ypos = y;
}

Knight::~Knight()
{
    delete ypos;
    delete xpos;
}

std::string Knight::getVisual()
{
    std::string ch = this->knight;
    return ch;
}

void Knight::move(int x, int y, std::string board[8][8])
{
    board[*xpos][*ypos] = ' ';
    *xpos = x;
    *ypos = y;
    board[*xpos][*ypos] = this->getVisual();
}

std::ostream& operator<<(std::ostream& os, Knight& n)
{
    os << n.knight;
    return os;
}