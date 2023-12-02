#include "Sed/Sed.hpp"
#include "Tester/Tester.hpp"

int		main(int argc, char **argv)
{
	int			pos_of_dot;
	std::string	file;
	Tester		tester;

	file = "AAAAA";
	tester.run_test();
	std::cout << file;
}
