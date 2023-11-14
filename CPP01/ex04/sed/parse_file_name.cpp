#include "Sed.hpp"

void	Sed::parse_file_name(std::string s)
{
	int		end_of_file_name;

	end_of_file_name = 0;
	while (s[end_of_file_name])
	{
		if (s[end_of_file_name] == '.')
		{
			_extention.substr(end_of_file_name, std::string::npos);
			break ;
		}
		end_of_file_name++;
	}

}
