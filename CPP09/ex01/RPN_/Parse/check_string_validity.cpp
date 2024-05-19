#include "../RPN_.hpp"

bool	RPN_::check_string_validity(string s)
{
	unsigned int	digit_counter;
	unsigned int	operators_counter;

	digit_counter = 0;
	operators_counter = 0;
	for (string::iterator it = s.begin(); it != s.end(); it++)
	{
		if (isdigit(*it))
			digit_counter++;
		else if (*it != RPN_SEPARATOR_SIMBOL)
			operators_counter++;
	}
	if ((operators_counter + 1) == digit_counter)
		return (true);
	return (false);
}