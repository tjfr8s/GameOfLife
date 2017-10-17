#include <iostream>
#include "../cell.h"

int main()
{
    Cell myCell('x');
    std::cout << myCell << std::endl;
    myCell.toggleStatus();
    std::cout << myCell << std::endl;
    if(myCell.isAlive())
    {
        std::cout << "it's aliiiive\n";
    }
    return 0;
}
