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

bool Fixed::operator> (const Fixed &other)const{
	return fp_value > other.fp_value;
}

bool Fixed::operator< (const Fixed &other)const{
	return fp_value < other.fp_value;
}

bool Fixed::operator>= (const Fixed &other)const{
	return fp_value >= other.fp_value;
}

bool Fixed::operator<= (const Fixed &other)const{
	return fp_value <= other.fp_value;
}

bool Fixed::operator== (const Fixed &other)const{
	return fp_value == other.fp_value;
}

bool Fixed::operator!= (const Fixed &other)const{
	return fp_value != other.fp_value;
}

Fixed Fixed::operator+ (const Fixed &other) const{
	Fixed tmp;
	tmp.setRawBits(fp_value + other.fp_value);
	return tmp;
}

Fixed Fixed::operator- (const Fixed &other) const{
	Fixed tmp;
	tmp.setRawBits(fp_value - other.fp_value);
	return tmp;
}

Fixed Fixed::operator* (const Fixed &other) const{
	Fixed tmp;
	int value = (long long) (fp_value * other.fp_value) >> fractionalb;
	tmp.setRawBits(value);
	return tmp;
}

Fixed Fixed::operator/ (const Fixed &other) const{
	if (other.fp_value == 0)
	{
		cout << "Division by 0 is not possible" << endl;
		return Fixed();
	}
	return Fixed(toFloat() / (other.toFloat()));
}

Fixed& Fixed::operator++ (){
	++fp_value;
	return *this;
}

Fixed Fixed::operator++ (int){
	Fixed tmp;
	tmp = *this;
	fp_value++;
	return tmp;
}

Fixed& Fixed::operator-- (){
	--fp_value;
	return *this;
}

Fixed Fixed::operator-- (int){
	Fixed tmp;
	tmp = *this;
	fp_value--;
	return tmp;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2){
	return (f1.fp_value < f2.fp_value) ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2){
	return (f1.fp_value < f2.fp_value) ? f1 : f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2){
	return (f1.fp_value > f2.fp_value) ? f1 : f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2){
	return (f1.fp_value > f2.fp_value) ? f1 : f2;
}

std::ostream& operator<<(std::ostream& out, const Fixed& other){
	out << other.toFloat();
	return out;
}