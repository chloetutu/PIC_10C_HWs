//Chloe Tu
//Collaborators: Cara, Eden, TA
//"I pledge that I have neither given nor received unauthorized assistance on this assignment."

#include "BarChart.h"
#include <iostream>

/*traverse vector using iterator
print the appropiate number of () for every entry*/

void BarChart::draw () const
{
    for (Chart::Iterator a = begin(); a != end(); ++a)
    {
        std::cout << *a << " ";
        for (int i = 0; i < *a; ++i)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

