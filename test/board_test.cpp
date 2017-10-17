#include <iostream>
#include <vector>
#include "../cell.h"
#include "../board.h"

// void playGame();

int main()
{
    Board myBoard;
    myBoard.printBoard();
    myBoard.m_board[0][14].toggleStatus();
    myBoard.printBoard();
    std::cout << myBoard.numNeighbors(13, 0) << std::endl;
    return 0;
}

// void playGame()
// {
//     Board myBoard
// }
