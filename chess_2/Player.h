#pragma once

#include <vector>
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"

class Player
{
private:
    std::vector<Pawn> p;
    std::vector<Rook> r;
    std::vector<Knight> n;
    std::vector<Bishop> b;
    Queen q;
    King k;
    int number;
public:
    Player();
    Player(int);
    ~Player();
    void move(char&, std::string&, std::string board[8][8]);
    std::string GetPawn(int);
    std::string GetRook(int);
    std::string GetKnight(int);
    std::string GetBishop(int);
    std::string GetQueen();
    std::string GetKing();
    bool check();
    bool mate();
};

