#include "../ScalarConverter.hpp"

static bool	string_contain_minus(string s, u_int size)
{
	for (u_int i = 0; i < size; i++)
	{
		if (s[i] == '-')
			return (true);
	}
	return (false);
}

static bool	string_contain_digits(string s, u_int size)
{
	for (u_int i = 0; i < size; i++)
	{
		if (std::isdigit(s[i]))
			return (true);
	}
	return (false);
}

static bool	string_contain_char(string s, u_int size)
{
	for (u_int i = 0; i < size; i++)
	{
		if (std::isalpha(s[i]))
			return (true);
	}
	return (false);
}

bool	ScalarConverter::check_bad_string(string s)
{
	u_int	str_size;

	str_size = s.size();
	if (str_size == 1)
		if (!std::isalnum(s[0]))
			return (true);
	if (s[0] == '.')
		return (true);
	if (string_contain_minus(s, str_size))
		if (s[0] != '-')
			return (true);
	if (s[0] == '-' 
		&& s[1] == '.')
		return (true);
	if (s[0] == '-' && std::isalpha(s[1]))
		return (true);
	if (s.back() == '.')
		return (true);
	if (s[s.size() - 2] == '.' && !std::isdigit(s.back()))
		return (true);
	if (string_contain_digits(s, str_size)
		&& string_contain_char(s, str_size)
		&& s.back() != 'f')
				return (true);
	return (false);
}
