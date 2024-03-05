#include "ScalarConverter/ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (TEST_PARSE_FLAG)
	{
		ScalarConverter::convert("a");
		ScalarConverter::convert("aa");
		ScalarConverter::convert("aaaa");
		ScalarConverter::convert("a-aa");
		ScalarConverter::convert("0-11");
		ScalarConverter::convert("1414");
		ScalarConverter::convert("-");
		ScalarConverter::convert(".a");
		ScalarConverter::convert(".0");
		ScalarConverter::convert("10");
		ScalarConverter::convert("1f");
		ScalarConverter::convert("1fad");
		ScalarConverter::convert("-.a");
		ScalarConverter::convert("-1a");
		ScalarConverter::convert("-a");
		ScalarConverter::convert("/");
		ScalarConverter::convert("3/11");
		ScalarConverter::convert("");
		ScalarConverter::convert("1 1");
		ScalarConverter::convert("151");
		ScalarConverter::convert("-inff");
		ScalarConverter::convert("-inf");
		ScalarConverter::convert("+inf");
		ScalarConverter::convert("+inff");
		ScalarConverter::convert("nan");
	}
}