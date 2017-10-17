#include "board.h"

Board::Board()
    : m_board(15, std::vector<Cell>(15, Cell('x')))
{

}

void Board::printBoard() const
{
    for(auto& vector : m_board)
    {
        for(auto& cell : vector)
        {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool Board::getNeighbor(int xindex, int yindex) const
{
    if((xindex >= 0 && xindex <= m_board.size()) &&
       (yindex >= 0 && yindex <= m_board.size()))
    {
        return m_board[yindex][xindex].isAlive();
    }
    else
    {
        return false;
    }
}

int Board::numNeighbors(int xindex, int yindex) const
{
    int neighbors(0);
    if(getNeighbor(xindex, yindex + 1))
    {
        neighbors++;
    }
    if(getNeighbor(xindex, yindex - 1))
    {
        neighbors++;
    }
    if(getNeighbor(xindex + 1, yindex))
    {
        neighbors++;
    }
    if(getNeighbor(xindex - 1, yindex))
    {
        neighbors++;
    }
    return neighbors;
}
