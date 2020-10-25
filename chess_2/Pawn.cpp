#include "Pawn.h"

std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

Pawn::Pawn()
{
    pawn = ' ';
    xpos = new int;
    ypos = new int;
    *xpos = *ypos = 0;
}

Pawn::Pawn(int x, int y, int num)
{
    pawn = 'p' + (num + '0');
    xpos = new int;
    ypos = new int;
    *xpos = x;
    *ypos = y;
}

Pawn::~Pawn()
{
    delete ypos;
    delete xpos;
}

std::string Pawn::getVisual()
{
    std::string ch = this->pawn;
    return ch;
}

void Pawn::move(int x, int y, std::string board[8][8])
{
    board[*xpos][*ypos] = ' ';
    *xpos = x;
    *ypos = y;
    board[*xpos][*ypos] = this->getVisual();
}

void Pawn::attack(int x, int y, char board[8][8])
{

}

std::ostream& operator<<(std::ostream& os, Pawn& p)
{
    os << p.pawn;
    return os;
}