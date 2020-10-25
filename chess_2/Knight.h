#pragma once
#include "Piece.h"

class Knight : public Piece
{
private:
    int* xpos;
    int* ypos;
    std::string knight;
public:
    int ptype = 3;
    Knight();
    Knight(int, int);
    ~Knight();
    int* Get_x_Position() { return xpos; };
    int* Get_y_Position() { return ypos; }
    std::string getVisual();
    void move(int x, int y, std::string board[8][8]);
    friend std::ostream& operator<<(std::ostream&, Knight&);
};