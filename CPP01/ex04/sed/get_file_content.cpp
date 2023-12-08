#include "Sed.hpp"

std::string	Sed::get_file_content()
{
	std::string	tmp_s;
	std::string ret_s;

	tmp_s = "";
	ret_s = "";
	while (!_file.eof())
	{
		getline(_file, tmp_s);
		ret_s.append(tmp_s);
	}
	return (ret_s);
}