#include "ScalarConverter.hpp"

void	ScalarConverter::convert(string s)
{
	data_type	type;

	check_string(s);
	type = getDataType(s);
	if (type == SC_DATA_TYPE_INT)
		convert_int(s);
}
