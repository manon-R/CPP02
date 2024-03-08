#include "Point.hpp"
#include <iostream>

using std::cout;
using std::endl;

Point::Point(): x(0), y(0){
}

Point::Point(const Point &other){
	*this = other;
}

Point::Point(const float x_coord, const float y_coord): x(x_coord), y(y_coord){
}

Point::~Point(){
}

Point& Point::operator=(const Point &other){
	if (this != &other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	return *this;
}

const Fixed Point::getX()const{
	return x;
}

const Fixed Point::getY() const{
	return y;
}

