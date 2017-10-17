#include <iostream>
#include <vector>
#include "cell.h"
#include "board.h"



void playGame(Board &myBoard);

int main()
{
    Board myBoard;
    myBoard.m_board[14][15].toggleStatus();
    myBoard.m_board[15][15].toggleStatus(); //one
    myBoard.m_board[15][14].toggleStatus(); //two
    myBoard.m_board[15][16].toggleStatus();
    myBoard.m_board[16][14].toggleStatus();
    myBoard.m_board[16][16].toggleStatus();
    myBoard.m_board[17][15].toggleStatus();


    char toPlay('y');
    bool next(true);
    while(next)
    {
        playGame(myBoard);
        std::cout << "next iteration? (y/n): ";
        std::cin >> toPlay;
        if(toPlay == 'y')
        {
            next = true;
        }
        else
        {
            next = false;
        }
    }
    return 0;
}

void playGame(Board &myBoard)
{
    myBoard.printBoard();
    Board nextBoard(myBoard);

    for(int i = 0; i < myBoard.m_board.size(); i++)
    {
        for(int j = 0; j < myBoard.m_board[i].size(); j++)
        {
            if(myBoard.livesOrDies(j, i))
            {
                nextBoard.m_board[i][j].toggleStatus();
            }
        }
    }
    std::cout << "\n";

    myBoard = nextBoard;
}
