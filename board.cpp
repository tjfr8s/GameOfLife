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
    if((xindex >= 0 && xindex < m_board.size()) &&
       (yindex >= 0 && yindex < m_board.size()))
    {
        bool neighbor = m_board[yindex][xindex].isAlive();
        return neighbor;
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

bool Board::livesOrDies(int xindex, int yindex) const //returns true if status of cell will change next generation.
{
    Cell cell(m_board[yindex][xindex]);
    int neighbors = numNeighbors(xindex, yindex);
    if(cell.isAlive() && (neighbors > 3 || neighbors < 2))
    {
        return true;
    }
    else if(!cell.isAlive() && neighbors > 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
