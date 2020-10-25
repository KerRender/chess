#pragma once

#include <map>
#include <sstream>
#include <string>
#include <iostream>

int extractIntegerFromString(std::string& str)
{
    std::stringstream ss(str);

    std::string tempStr;
    int found;
    while (ss >> tempStr) {

        if (std::stringstream(tempStr) >> found)
            return found;

    }
}

class Piece
{
private:
    int xpos, ypos;
public:
    Piece();
    virtual ~Piece() = 0;
    virtual void move(int x, int y, std::string board[8][8]) = 0;
};
