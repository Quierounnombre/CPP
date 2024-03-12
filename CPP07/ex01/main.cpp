#include "iter.hpp"

int	main(void)
{
	std::string	s;
	int			i[6] = {1, 6, 3, 13, -1, 3};

	s = "Hola";
	std::cout << s << std::endl;
	iter((char *)s.c_str(), s.length(), increment_T);
	std::cout << s << std::endl;
	std::cout << std::endl;
	for (int j = 0; j < 6; j++)
		std::cout << i[j] << std::endl;
	iter(i, 6, increment_T);
	std::cout << std::endl;
	for (int j = 0; j < 6; j++)
		std::cout << i[j] << std::endl;
}