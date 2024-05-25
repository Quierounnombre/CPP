# include "../RPN.hpp"

bool	RPN::check_char_space_char_rule(string s)
{
	bool	space_flag;
	bool	char_flag;

	space_flag = false;
	char_flag = false;
	for (std::string::iterator it = s.begin(); it != s.end(); it++)
	{
		if (*it == RPN_SEPARATOR_SIMBOL)
		{
			if (space_flag)
				return (false);
			space_flag = true;
			char_flag = false;
		}
		else
		{
			if (char_flag)
				return (false);
			space_flag = false;
			char_flag = true;
		}
	}
	return (true);
}
