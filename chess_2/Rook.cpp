#include "Rook.h"


std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

Rook::Rook()
{
    xpos = new int;
    ypos = new int;
    *xpos = *ypos = 0;
}

Rook::Rook(int x, int y)
{
    xpos = new int;
    ypos = new int;
    *xpos = x;
    *ypos = y;
}

Rook::~Rook()
{
    delete ypos;
    delete xpos;
}

std::string Rook::getVisual()
{
    std::string ch = this->rook;
    return ch;
}

void Rook::move(int x, int y, std::string board[8][8])
{
    board[*xpos][*ypos] = ' ';
    *xpos = x;
    *ypos = y;
    board[*xpos][*ypos] = this->getVisual();
}

std::ostream& operator<<(std::ostream& os, Rook& r)
{
    os << r.rook;
    return os;
}