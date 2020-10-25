#pragma once
#include "Piece.h"

class Pawn : public Piece 
{
private:
    int* xpos;
    int* ypos;
    std::string pawn;
public:
    Pawn();
    Pawn(int, int, int);
    ~Pawn();
    int* Get_x_Position() { return xpos;};
    int* Get_y_Position() { return ypos;}
    std::string getVisual();
    void move(int x, int y, std::string board[8][8]);
    void attack(int x, int y, char board[8][8]);
    friend std::ostream& operator<<(std::ostream&, Pawn&);
};
