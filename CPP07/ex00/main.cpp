#include "whatever.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	int			i_1;
	int			i_2;
	std::string s_1;
	std::string s_2;

	i_1 = 48;
	i_2 = 0;
	s_1 = "Hola";
	s_2 = "Adios";
	std::cout << i_1 << std::endl;
	std::cout << i_2 << std::endl;
	std::cout << s_1 << std::endl;
	std::cout << s_2 << std::endl;
	std::cout << std::endl;
	swap(i_1, i_2);
	swap(s_1, s_2);
	std::cout << i_1 << std::endl;
	std::cout << i_2 << std::endl;
	std::cout << s_1 << std::endl;
	std::cout << s_2 << std::endl;
	std::cout << std::endl;
	std::cout << ::min(i_1, i_2) << std::endl;
	std::cout << ::min(s_1, s_2) << std::endl;
	std::cout << std::endl;
	std::cout << ::max(i_1, i_2) << std::endl;
	std::cout << ::max(s_1, s_2) << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}