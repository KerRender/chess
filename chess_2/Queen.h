#pragma once
#include "Piece.h"

class Queen : public Piece
{
private:
    int* xpos;
    int* ypos;
    std::string queen;
public:
    int ptype = 5;
    Queen();
    Queen(int, int);
    ~Queen();
    int* Get_x_Position() { return xpos; };
    int* Get_y_Position() { return ypos; }
    std::string getVisual();
    void move(int x, int y, std::string board[8][8]);
    friend std::ostream& operator<<(std::ostream&, Queen&);
};