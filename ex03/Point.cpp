#include "Point.hpp"
#include <iostream>

using std::cout;
using std::endl;


Point::Point(): x(0), y(0){}

Point::Point(const Point &other){
	*this = other;
}

Point::Point(const float& x_coord, const float& y_coord): x(x_coord), y(y_coord){
}

Point::~Point(){}

Point& Point::operator=(const Point &other){
	if (this != &other)
	{
		(Fixed)this->x = other.getX();
		(Fixed)this->y = other.getY();
	}
	return *this;
}

Fixed Point::getX()const{
	return x;
}

Fixed Point::getY() const{
	return y;
}


std::ostream & operator<<(std::ostream &out, const Point &p)
{
	out << "(x:" << p.getX() << ", y:" << p.getY() << ")";
	return out;
}
