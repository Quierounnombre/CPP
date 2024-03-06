#include "ScalarConverter.hpp"

void	ScalarConverter::convert(string s)
{
	t_data_type	type;

	check_string(s);
	type = getDataType(s);
	if (type == type_int)
		convert_int(s);
	if (type == type_char)
		convert_char(s);
}
