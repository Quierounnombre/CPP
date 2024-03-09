#include "../ScalarConverter.hpp"

bool	ScalarConverter::check_overflow(string s)
{
	u_int64_t	bigger;
	u_int		smaller;

	bigger = atol(s.c_str());
	smaller = atol(s.c_str());
	if (smaller != bigger)
		return (true);
	return (false);
}
