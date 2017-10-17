#include "cell.h"

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
        m_status = 'o'
    }
}
