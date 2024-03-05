#include "../ScalarConverter.hpp"

bool	ScalarConverter::check_named_exceptions(string s)
{
	n_int	exceptions_size;

	exceptions_size = std::end(limits_exceptions_lst) - std::begin(limits_exceptions_lst);
	for (n_int i = 0; i < exceptions_size; i++)
	{
		if (limits_exceptions_lst[i] == s)
			return (true);
	}
	return (false);
}