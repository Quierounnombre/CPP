#include "../ScalarConverter.hpp"

t_data_type	ScalarConverter::getDataType(string s)
{
	if (s.size() == 1)
		if (std::isalpha(s[0]))
			return (type_char);
	if (s.find(".") != std::string::npos)
	{
		if (s.find("f") != std::string::npos)
			return (type_float);
		else
			return (type_double);
	}
	return (type_int);
}
