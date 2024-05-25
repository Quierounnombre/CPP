#include "../RPN.hpp"

bool	RPN::check_allowed_chars(string s)
{
	for (string::iterator it = s.begin(); it != s.end(); it++)
	{
		if (!isdigit(*it)
			&& *it != RPN_MATH_MULTIPLICATION_SIMBOL
			&& *it != RPN_MATH_DIVISION_SIMBOL
			&& *it != RPN_MATH_PLUS_SIMBOL
			&& *it != RPN_MATH_MINUS_SIMBOL
			&& *it != RPN_SEPARATOR_SIMBOL)
			return (false);
	}
	return (true);
}