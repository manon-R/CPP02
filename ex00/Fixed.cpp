#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

Fixed::Fixed(): fp_value(0){
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &other){
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

void Fixed::setRawBits(int const raw){
	fp_value = raw;
}

int Fixed::getRawBits() const{
	cout << "getRawBits member function called" << endl;
	return fp_value;
}

Fixed& Fixed::operator=(const Fixed &other){
	cout << "Copy assignment operator called" << endl;
	if (this != &other)
		fp_value = other.getRawBits();
	return *this;
}