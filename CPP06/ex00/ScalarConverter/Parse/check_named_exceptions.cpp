#include "../ScalarConverter.hpp"

static int get_list_size(const string *lst)
{
	int	size;

	size = 0;
	while (!lst->empty())
	{
		lst++;
		size++;
	}
	return (size);
}

bool	ScalarConverter::check_named_exceptions(string s)
{
	n_int	exceptions_size;

	exceptions_size = get_list_size(limits_exceptions_lst);
	for (n_int i = 0; i < exceptions_size; i++)
	{
		if (limits_exceptions_lst[i] == s)
			return (true);
	}
	return (false);
}
