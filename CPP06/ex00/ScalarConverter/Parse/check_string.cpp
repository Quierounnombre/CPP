#include "../ScalarConverter.hpp"

void	ScalarConverter::check_string(string s)
{
	if (s.empty())
		error_mng(SCALARCONVERTER_ERROR_EMPTY_STRING);
	if (check_named_exceptions(s))
		return ;
	if (check_multiple_char(s))
		error_mng(SCALARCONVERTER_ERROR_MULTIPLE_CHARS);
	if (check_dup_chars(s))
		error_mng(SCALARCONVERTER_ERROR_DUPED_CHARS);
	if (check_bad_string(s))
		error_mng(SCALARCONVERTER_ERROR_BAD_STRING);
}