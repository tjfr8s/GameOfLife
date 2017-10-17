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
}
