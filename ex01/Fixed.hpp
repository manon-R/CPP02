#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:

	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int);
	Fixed(const float);

	Fixed & operator= (const Fixed &other);
	void operator<< (std::ostream, const Fixed &other);

	~Fixed();

	int getRawBits(void) const;

	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:

	int fp_value;
	static const int fractionalb = 8;
};

#endif