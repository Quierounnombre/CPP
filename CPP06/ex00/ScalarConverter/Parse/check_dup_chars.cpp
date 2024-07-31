#include "../ScalarConverter.hpp"

static int get_list_size(const char *lst)
{
	int	size;

	size = 0;
	while (*lst)
	{
		lst++;
		size++;
	}
	return (size);
}

bool	ScalarConverter::check_dup_chars(string s)
{
	bool		is_a_char_dupped;
	n_int		lst_size;
	
	lst_size = get_list_size(dupped_chars_lst);	
	for (n_int i = 0; i < lst_size; i++)
	{
		is_a_char_dupped = false;
		for (u_int j = 0; j < s.size(); j++)
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
