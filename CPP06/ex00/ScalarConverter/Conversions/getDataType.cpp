#include "../ScalarConverter.hpp"

data_type	ScalarConverter::getDataType(string s)
{
	if (s.size() == 1)
		if (std::isalpha(s[0]))
			return (SC_DATA_TYPE_CHAR);
	if (s.find(".") != std::string::npos)
	{
		if (s.find("f") != std::string::npos)
			return (SC_DATA_TYPE_FLOAT);
		else
			return (SC_DATA_TYPE_DOUBLE);
	}
	return (SC_DATA_TYPE_INT);
}
