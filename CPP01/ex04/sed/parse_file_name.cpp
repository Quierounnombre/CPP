#include "sed.hpp"

void	sed::parse_file_name(std::string s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '.')
		{
			_extention.substr(i, std::string::npos);
			break ;
		}
		i++;
	}

}
