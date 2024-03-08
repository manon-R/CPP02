#include "Fixed.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

Fixed::Fixed(): fp_value(0){
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &other){
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed::Fixed(const int nbi){
	cout << "Int constructor called" << endl;
	fp_value = nbi << fractionalb;
}

Fixed::Fixed(const float nbf){
	cout << "Float constructor called" << endl;
	fp_value = roundf(nbf * (1 << fractionalb));
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

float Fixed::toFloat()const{
	return (float)fp_value / (float)(1 << fractionalb);
}

int Fixed::toInt()const{
	return roundf(fp_value / (1 << fractionalb));
}

void Fixed::setRawBits(int const raw){
	fp_value = raw;
}

int Fixed::getRawBits() const{
	return fp_value;
}

Fixed& Fixed::operator=(const Fixed &other){
	cout << "Copy assignment operator called" << endl;
	if (this != &other)
		fp_value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& other){
	out << other.toFloat();
	return out;
}