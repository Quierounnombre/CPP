#include "../ScalarConverter.hpp"

bool	ScalarConverter::check_dup_chars(string s)
{
	bool	is_a_char_dupped;
	n_int		lst_size;

	lst_size = std::end(dupped_chars_lst) - std::begin(dupped_chars_lst);
	for (n_int i = 0; i < lst_size; i++)
	{
		is_a_char_dupped = false;
		for (n_int j = 0; j < s.size(); j++)
		{
			if (s[j] == dupped_chars_lst[i])
			{
				if (is_a_char_dupped)
					return (true);
				is_a_char_dupped = true;
			}
		}
	}
	return (false);	
}
