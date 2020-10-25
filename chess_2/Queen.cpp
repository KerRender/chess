#include "Queen.h"


std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

Queen::Queen()
{
    xpos = new int;
    ypos = new int;
    *xpos = *ypos = 0;
}

Queen::Queen(int x, int y)
{
    xpos = new int;
    ypos = new int;
    *xpos = x;
    *ypos = y;
}

Queen::~Queen()
{
    delete ypos;
    delete xpos;
}

std::string Queen::getVisual()
{
    std::string ch = this->queen;
    return ch;
}

void Queen::move(int x, int y, std::string board[8][8])
{
    board[*xpos][*ypos] = ' ';
    *xpos = x;
    *ypos = y;
    board[*xpos][*ypos] = this->getVisual();
}

std::ostream& operator<<(std::ostream& os, Queen& q)
{
    os << q.queen;
    return os;
}