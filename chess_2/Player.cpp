#include "Player.h"

std::map<char, int> fig = { {'p' , 1}, {'r', 2}, {'n', 3}, {'b', 4}, {'q', 5}, {'k', 6} };
std::map<char, int> letterTOcoordinate = { {'a', 1},{'b', 2} ,{'c', 3} ,{'d', 4} ,{'e', 5} ,{'f', 6} ,{'g', 7} ,{'h', 8} };

Player::Player()
{
    p.push_back(Pawn());
    r.push_back(Rook());
    n.push_back(Knight());
    b.push_back(Bishop());
    q = Queen();
    k = King();
    number = 0;
}

Player::Player(int player)
{
    number = player;
    if (this->number == 1) {
        Pawn p1(0, 6, 1); Pawn p2(1, 6, 2); Pawn p3(2, 6, 3); Pawn p4(3, 6, 4); Pawn p5(4, 6, 5); Pawn p6(5, 6, 6); Pawn p7(6, 6, 7); Pawn p8(7, 6, 8);
        p = { p1, p2, p3, p4, p5, p6, p7, p8 };
        Rook r1(0, 7, 1); Rook r2(7, 7, 2);
        r = { r1, r2 };
        Knight n1(1, 7); Knight n2(6, 7);
        n = { n1, n2 };
        Bishop b1(2, 7); Bishop b2(5, 7);
        b = { b1, b2 };
        q = Queen(4, 7);
        k = King(5, 7);
    }
    else if (this->number == 2) {
        Pawn p1(0, 1); Pawn p2(1, 1); Pawn p3(2, 1); Pawn p4(3, 1); Pawn p5(4, 1); Pawn p6(5, 1); Pawn p7(6, 1); Pawn p8(7, 1);
        p = { p1, p2, p3, p4, p5, p6, p7, p8 };
        Rook r1(0, 0); Rook r2(7, 0);
        r = { r1, r2 };
        Knight n1(1, 0); Knight n2(6, 0);
        n = { n1,n2 };
        Bishop b1(2, 0); Bishop b2(5, 0);
        b = { b1, b2 };
        q = Queen(4, 7);
        k = King(5, 7);
    }
}

Player::~Player(){}

void Player::move(char& f, std::string& s, std::string board[8][8])
{
    if (this->number == 1)
    {
        switch (fig[tolower(f)])
        {
        case 1: {
            int x = letterTOcoordinate[s[0]];
            int y = extractIntegerFromString(s);
            int curX = *(p[x - 1].Get_x_Position());
            int curY = *(p[x - 1].Get_y_Position());
            p[x - 1].move(curX, curY, board);
        }
        case 2: {
            int x = letterTOcoordinate[s[0]];
            int y = extractIntegerFromString(s);
            int curX = *(r[x - 1].Get_x_Position());
            int curY = *(r[x - 1].Get_y_Position());
            r[x - 1].move(curX, curY, board);
        }
        case 3: {
            int x = letterTOcoordinate[s[0]];
            int y = extractIntegerFromString(s);
            int curX = *(p[x - 1].Get_x_Position());
            int curY = *(p[x - 1].Get_y_Position());
            p[x - 1].move(curX, curY, board);
        }
        case 4: {
            int x = letterTOcoordinate[s[0]];
            int y = extractIntegerFromString(s);
            int curX = *(p[x - 1].Get_x_Position());
            int curY = *(p[x - 1].Get_y_Position());
            p[x - 1].move(curX, curY, board);
        }
        case 5: {
            int x = letterTOcoordinate[s[0]];
            int y = extractIntegerFromString(s);
            int curX = *(q.Get_x_Position());
            int curY = *(q.Get_y_Position());
            q.move(curX, curY, board);
        }
        case 6: {
            int x = letterTOcoordinate[s[0]];
            int y = extractIntegerFromString(s);
            int curX = *(k.Get_x_Position());
            int curY = *(k.Get_y_Position());
            k.move(curX, curY, board);
        }
        default:
            break;
        }
    }
}

std::string Player::GetPawn(int num)
{
    return p[num - 1].getVisual();
}

std::string Player::GetRook(int num)
{
    return r[num - 1].getVisual();
}

std::string Player::GetKnight(int num)
{
    return n[num - 1].getVisual();
}

std::string Player::GetBishop(int num)
{
    return b[num - 1].getVisual();
}

std::string Player::GetQueen()
{
    return q.getVisual();
}

std::string Player::GetKing()
{
    return k.getVisual();
}