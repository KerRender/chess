#include "Player.h"

using namespace std;

map<int, char> letters = { {1,'a'},{2,'b'} ,{3,'c'} ,{4,'d'} ,{5,'e'} ,{6,'f'} ,{7,'g'} ,{8,'h'} };

void ShowBoard(char board[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        cout << letters[i] << ' ';

        for (int j = 0; j < 8; j++)
        {
            cout << '|' << board[i][j] << '|';
        }
        cout << endl;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << '|' << i + 1 << '|';
    }
}

int main()
{
    cout << "Game starts!";

    Player p1(1);
    Player p2(2);

    char board[8][8] = { { {p2.GetRook(1)}, {p2.GetKnight(1)}, {p2.GetBishop(1)}, {p2.GetQueen()}, {p2.GetKing()}, {p2.GetBishop(2)}, {p2.GetKnight(2)}, {p2.GetRook(2)} },
                         { {p2.GetPawn(1)}, {p2.GetPawn(2)}, {p2.GetPawn(3)}, {p2.GetPawn(4)}, {p2.GetPawn(5)}, {p2.GetPawn(6)}, {p2.GetPawn(7)}, {p2.GetPawn(8)} },
                         { {}, {}, {}, {}, {}, {}, {}, {} },
                         { {}, {}, {}, {}, {}, {}, {}, {} },
                         { {}, {}, {}, {}, {}, {}, {}, {} },
                         { {}, {}, {}, {}, {}, {}, {}, {} },
                         { {p1.GetPawn(1)}, {p1.GetPawn(2)}, {p1.GetPawn(3)}, {p1.GetPawn(4)}, {p1.GetPawn(5)}, {p1.GetPawn(6)}, {p1.GetPawn(7)}, {p1.GetPawn(8)} },
                         { {p1.GetRook(1)}, {p1.GetKnight(1)}, {p1.GetBishop(1)}, {p1.GetQueen()}, {p1.GetKing()}, {p1.GetBishop(2)}, {p1.GetKnight(2)}, {p1.GetRook(2)} } };

    char figure;
    string square;

    while (!p1.mate() or !p2.mate())
    {
        ShowBoard(board);

        cout << "Player 1, select a figure to move (a *letter*): ";
        cin >> figure;
        cout << "Enter your move (in format *letter* *number* of the square): ";
        cin >> square;

        p1.move(figure, square, board);

        if (p2.mate())
            break;

        ShowBoard(board);

        cout << "Player 1, select a figure to move: ";
        cin >> figure;
        cout << "Enter your move (in format *letter* *number* of the square): ";
        cin >> square;

        p2.move(figure, square, board);

        if (p1.mate())
            break;
    }

    if (p1.mate())
    {
        cout << "Player 1 wins!";
    }
    else if (p2.mate())
    {
        cout << "Player 2 wins!";
    }

    return 0;
}