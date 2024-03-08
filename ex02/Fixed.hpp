#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int nbi);
	Fixed(const float nbf);

	Fixed & operator= (const Fixed &other);

	//Comparison operators
	bool operator> (const Fixed &other) const;
	bool operator< (const Fixed &other) const;
	bool operator>= (const Fixed &other) const;
	bool operator<= (const Fixed &other) const;
	bool operator== (const Fixed &other) const;
	bool operator!= (const Fixed &other) const;

	//Arithmetic operators
	Fixed operator+ (const Fixed &other) const;
	Fixed operator- (const Fixed &other) const;
	Fixed operator* (const Fixed &other) const;
	Fixed operator/ (const Fixed &other) const;

	//Increment/Decrement
	Fixed &operator++ (); //pre increment
	Fixed operator++ (int);
	Fixed &operator-- ();
	Fixed operator-- (int);

	//Min/Max
	static Fixed& min(Fixed &f1, Fixed &f2);
	static const Fixed& min(const Fixed &f1, const Fixed &f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	static const Fixed& max(const Fixed &f1, const Fixed &f2);

	~Fixed();

	int getRawBits(void) const;

	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:

	int fp_value;
	static const int fractionalb = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif