#include "../ScalarConverter.hpp"

void	ScalarConverter::error_mng(string s)
{
	cerr << s << endl;
	if (!errno)
		exit(1);
	exit(errno);
}
