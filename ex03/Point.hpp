#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{

public:

	Point();
	Point(const Point &other);
	Point(const float& x_coord, const float& y_coord);

	Point & operator= (const Point &other);

	~Point();

	Fixed getX() const;
	Fixed getY() const;

private:
	const Fixed x;
	const Fixed y;
};

std::ostream & operator<<(std::ostream &, const Point &);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif