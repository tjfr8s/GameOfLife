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
    bool getNeighbor(int xindex, int yindex) const;  //returns true if top neighbor is living
    int numNeighbors(int xindex, int yindex) const;
    bool livesOrDies(int xindex, int yindex) const;
};

#endif
