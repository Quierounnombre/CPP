# include "../RPN.hpp"

void	RPN::check_string(string s)
{
	if (!check_allowed_chars(s))
		throw std::logic_error(ERROR_ILEGAL_CHARS);
	if (!check_char_space_char_rule(s))
		throw std::logic_error(ERROR_ILEGAL_DISTANCE);
	if (!check_string_validity(s))
		throw std::logic_error(ERROR_INCORRECT_NUMBER_OF_OPERANDS);
}
