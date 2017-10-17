#include <iostream>
#include <vector>
#include "cell.h"
#include "board.h"



void playGame(Board &myBoard);

int main()
{
    Board myBoard;
    myBoard.m_board[1][1].toggleStatus(); //one

    myBoard.m_board[5][1].toggleStatus(); //two
    myBoard.m_board[6][1].toggleStatus();
    myBoard.m_board[4][1].toggleStatus();
    myBoard.m_board[5][0].toggleStatus();
    myBoard.m_board[5][2].toggleStatus();

    myBoard.m_board[1][5].toggleStatus();//three
    myBoard.m_board[2][5].toggleStatus();
    myBoard.m_board[0][5].toggleStatus();

    // myBoard.m_board[5][5] starts dead //four
    myBoard.m_board[4][5].toggleStatus();
    myBoard.m_board[6][5].toggleStatus();
    myBoard.m_board[5][6].toggleStatus();
    myBoard.printBoard();

    // std::cout << "one: " << myBoard.livesOrDies(1, 1) << " two: " <<
    //     myBoard.livesOrDies(1, 5) << " three: " <<
    //     myBoard.livesOrDies(5, 1) << " four: " <<
    //     myBoard.livesOrDies(5, 5) << std::endl;

    playGame(myBoard);
    return 0;
}

void playGame(Board &myBoard)
{
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

    nextBoard.printBoard();
}
