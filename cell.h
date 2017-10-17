#ifndef CELL_H
#define CELL_H

#include <iostream>

class Cell
{
private:
    char m_status;
public:
    Cell(char status);
    void toggleStatus();
    bool isAlive() const;
    char getStatus() const;
    void kill();
    void revive();
    friend std::ostream& operator<<(std::ostream &out, const Cell &cell);
};

#endif
