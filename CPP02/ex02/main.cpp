#include "Fixed/Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed const e( Fixed( 5.05f ) * Fixed( 2 ) );
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "a is " << a.getRawBits() << std::endl;
	std::cout << "++a is " << (++a).getRawBits()<< std::endl;
	std::cout << "a++ is " << (a++).getRawBits() << std::endl;
	std::cout << "a is " << a.getRawBits() << std::endl;

	std::cout << "(5.05 * 2) = " << e << std::endl;
	std::cout << "bigger between a(" << a << ") or b(" << b<< ") = " << Fixed::max(a, b) << std::endl;
	std::cout << "smaller between a(" << a << ") or b(" << b<< ") = " << Fixed::min(a, b) << std::endl;

	return 0;
}