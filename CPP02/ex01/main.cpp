#include "Fixed/Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a(35000);

	std::cout << a.toFloat() << std::endl;
	std::cout << a.toInt() << std::endl;
	return 0;
}