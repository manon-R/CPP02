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
	Fixed operator+ (const Fixed &other) const;
	Fixed operator- (const Fixed &other) const;
	Fixed operator* (const Fixed &other) const;
	Fixed operator/ (const Fixed &other) const;


	bool operator< (const Fixed &other) const;
	bool operator> (const Fixed &other) const;

	// bool operator>= (const Fixed &other) const;
	// bool operator<= (const Fixed &other) const;
	bool operator== (const Fixed &other) const;

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