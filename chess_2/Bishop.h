#pragma once
#include "Piece.h"

class Bishop : public Piece
{
private:
    int* xpos;
    int* ypos;
    std::string bishop;
public:
    int ptype = 4;
    Bishop();
    Bishop(int, int);
    ~Bishop();
    int* Get_x_Position() { return xpos; };
    int* Get_y_Position() { return ypos; }
    std::string getVisual();
    void move(int x, int y, std::string board[8][8]);
    friend std::ostream& operator<<(std::ostream&, Bishop&);
};