#include "Bishop.h"


std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

Bishop::Bishop()
{
    xpos = new int;
    ypos = new int;
    *xpos = *ypos = 0;
}

Bishop::Bishop(int x, int y)
{
    xpos = new int;
    ypos = new int;
    *xpos = x;
    *ypos = y;
}

Bishop::~Bishop()
{
    delete ypos;
    delete xpos;
}

std::string Bishop::getVisual()
{
    std::string ch = this->bishop;
    return ch;
}

void Bishop::move(int x, int y, std::string board[8][8])
{
    board[*xpos][*ypos] = ' ';
    *xpos = x;
    *ypos = y;
    board[*xpos][*ypos] = this->getVisual();
}

std::ostream& operator<<(std::ostream& os, Bishop& b)
{
    os << b.bishop;
    return os;
}