#include "../ScalarConverter.hpp"

void	ScalarConverter::error_mng(string s)
{
	n_int	exit_error;

	cerr << s << endl;
	if (!errno)
		exit_error = 1;
	else
		exit_error = errno;	
	if (!TEST_PARSE_FLAG)
		exit(exit_error);
}
