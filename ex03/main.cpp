#include "Point.hpp"
#include <iostream>

using std::cout;
using std::endl;

//true = 1
// false = 0


int	main( void )
{
    if (bsp(Point(0, 0), Point(20, 0), Point(10, 30), Point(10, 15)) == true)
        cout << "Point is in the triangle" << endl;
	else
        cout << "Point is not in the triangle" << endl;
	return 0;
}