#include "cell.h"
// populated cell status denoted by 'o' character. unpopulated cell status
// denoted by 'x' character.

Cell::Cell(char status = 'o'): m_status(status)
{

}

void Cell::toggleStatus()
{
    if(m_status == 'o')
    {
        m_status = 'x';
    }

    else if(m_status == 'x')
    {
        m_status = 'o';
    }
}

bool Cell::isAlive() const
{
    if(m_status == 'o')
    {
        return true;
    }

    else if(m_status == 'x')
    {
        return false;
    }
}

char Cell::getStatus() const
{
    return m_status;
}

std::ostream& operator<<(std::ostream &out, const Cell &cell)
{
    out << cell.getStatus();
    return out;
}
