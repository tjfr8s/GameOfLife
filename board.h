#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include "cell.h"

class Board
{
public:
    Board();
    std::vector< std::vector <Cell> > m_board;
    void printBoard() const;
};

#endif
