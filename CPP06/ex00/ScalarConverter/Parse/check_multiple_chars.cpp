#include "../ScalarConverter.hpp"

bool	ScalarConverter::check_multiple_char(string s)
{
	bool	multiple_chars;

	multiple_chars = false;
	for (u_int i = 0; i < s.size(); i++)
	{
		if (std::isalpha(s[i]))
		{
			if (multiple_chars)
				return (true);
			else
				multiple_chars = true;
		}
	}
	return (false);
}
