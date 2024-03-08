#include "Fixed.hpp"
#include <iostream>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"


int main( void ) {

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;

}

// int main( void ) {

// Fixed a;
// Fixed const b( Fixed( 42.042f ) * Fixed( 3 ) );
// Fixed c(10);

// std::cout << CYAN << "********** Original values **********" << RESET<< std::endl;
// std::cout << "a = "<< a << std::endl;
// std::cout << "b = " << b << std::endl;
// std::cout << "c = " << c << std::endl;

// std::cout << CYAN << "********** Arithmetic operators **********" << RESET << std::endl;
// std::cout << CYAN << "********** Addition **********" << RESET << std::endl;

// std::cout << "a + b = "<< a + b << std::endl;
// std::cout << "b + c = " << b + c << std::endl;
// std::cout << "c + a = " << c + a << std::endl;
// std::cout << std::endl;

// std::cout << CYAN << "********** Soustraction **********" << RESET << std::endl;

// std::cout << "a - b = "<< a - b << std::endl;
// std::cout << "b - c = " << b - c << std::endl;
// std::cout << "c - a = " << c - a << std::endl;
// std::cout << std::endl;

// std::cout << CYAN << "********** Multiplication **********" << RESET << std::endl;

// std::cout << "a * b = "<< a * b << std::endl;
// std::cout << "b * c = " << b * c << std::endl;
// std::cout << "c * a = " << c * a << std::endl;
// std::cout << std::endl;

// std::cout << CYAN << "********** Division **********" << RESET << std::endl;

// std::cout << "a / b = "<< a / b << std::endl;
// std::cout << "b / c = " << b / c << std::endl;
// std::cout << "c / a = " << c / a << std::endl;
// std::cout << std::endl;
// std::cout << CYAN << "********** Comparison **********" << RESET << std::endl;

// bool test = a > b;
// std::cout << a << " > " << b << " ? "<< test << std::endl;
// test = b > c;
// std::cout << b << " > " << c <<" ? " << test << std::endl;
// test = c > a;
// std::cout << c << " > " << a <<" ? " << test << std::endl;
// std::cout << std::endl;
// test = a < b;
// std::cout << a << " < " << b << " ? "<< test << std::endl;
// test = b < c;
// std::cout << b << " < " << c <<" ? " << test << std::endl;
// test = c < a;
// std::cout << c << " < " << a <<" ? " << test << std::endl;

// Fixed d(10);
// std::cout << std::endl;
// test = a <= b;
// std::cout << a << " <= " << b << " ? "<< test << std::endl;
// test = b <= c;
// std::cout << b << " <= " << c <<" ? " << test << std::endl;
// test = c <= d;
// std::cout << c << " <= " << d <<" ? " << test << std::endl;


// std::cout << std::endl;
// test = a == b;
// std::cout << a << " == " << b << " ? "<< test << std::endl;
// test = b == c;
// std::cout << b << " == " << c <<" ? " << test << std::endl;
// test = c == d;
// std::cout << c << " == " << d <<" ? " << test << std::endl;

// std::cout << std::endl;
// std::cout << CYAN << "********** MIN / MAX **********" << RESET << std::endl;

// std::cout << "min (a, b) = " << Fixed::min( a, b ) << std::endl;

// std::cout << "max (c, b) = " << Fixed::max( c, b ) << std::endl;

// std::cout << "max (d, a) = " << Fixed::max( d, a ) << std::endl;

// std::cout << "min (c, a) = " << Fixed::min( c, a ) << std::endl;


// return 0;

// }
