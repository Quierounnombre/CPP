#include "Sed.hpp"

void	Sed::replace_file_content(std::string &s)
{
	size_t	pos;
	size_t	len_s1;
	
	pos = s.find(_s1);
	len_s1 = _s1.length();
	while (pos != std::string::npos)
	{
		s.erase(pos, len_s1);
		s.insert(pos, _s2);
		pos = s.find(_s1);
	}
}
