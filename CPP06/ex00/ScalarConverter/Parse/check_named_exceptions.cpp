#include "../ScalarConverter.hpp"

bool	ScalarConverter::check_named_exceptions(string s)
{
	n_int	exceptions_size;

	exceptions_size = std::size(limits_exceptions_lst);
	for (n_int	i = exceptions_size; i > 0; i--)
	{
		if (limits_exceptions_lst[i] == s)
			return (true);
	}
	return (false);
}