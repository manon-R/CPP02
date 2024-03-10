#include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const point){

    Fixed d1, d2, d3;

    d1 = (point.getX() - a.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (point.getY() - a.getY());
    d2 = (point.getX() - b.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (point.getY() - b.getY());
    d3 = (point.getX() - c.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (point.getY() - c.getY());

   if (d1 > 0 && d2 > 0 && d3 > 0)
		return true;
	else if (d1 < 0 && d2 < 0 && d3 < 0)
		return true;
	else
		return false;
}


/*
	Fixed d1 = (x - x1) * (y2 - y1) - (x2 - x1) * (y - y1);
	Fixed d2 = (x - x2) * (y3 - y2) - (x3 - x2) * (y - y2);
	Fixed d3 = (x - x3) * (y1 - y3) - (x1 - x3) * (y - y3);
*/
