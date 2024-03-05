#include "../ScalarConverter.hpp"

bool	ScalarConverter::check_illegal_chars(string s)
{
	for (u_int i = 0; i < s.size(); i++)
	{
		if (!std::isalnum(s[i])
			&& s[i] != '.'
			&& s[i] != '-')
			return (true);
	}
	return (false);
}
