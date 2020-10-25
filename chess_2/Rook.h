#pragma once
#include "Piece.h"

class Rook : public Piece
{
private:
    int* xpos;
    int* ypos;
    std::string rook;
public:
    int ptype = 2;
    Rook();
    Rook(int, int);
    ~Rook();
    int* Get_x_Position() { return xpos; };
    int* Get_y_Position() { return ypos; };
    std::string getVisual();
    void move(int x, int y, std::string board[8][8]);
    friend std::ostream& operator<<(std::ostream&, Rook&);
};