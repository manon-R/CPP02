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
	int tmp_i = nbf;
	int tmp_f = (int)roundf(nbf * (1 << fractionalb));
	fp_value = tmp_i + tmp_f;
}

Fixed::~Fixed(){
	cout << "Destructor called" << endl;
}

float Fixed::toFloat()const{
	return (float)fp_value / (1 << fractionalb);
}

int Fixed::toInt()const{
	return fp_value >> fractionalb;
}

void Fixed::setRawBits(int const raw){
	fp_value = raw;
}

int Fixed::getRawBits() const{
	return fp_value;
}

Fixed& Fixed::operator=(const Fixed &other){
	cout << "Copy assignment operator called" << endl;
	fp_value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& other){
	return out << other.toFloat();
}