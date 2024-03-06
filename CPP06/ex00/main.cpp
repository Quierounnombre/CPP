#include "ScalarConverter/ScalarConverter.hpp"

//# define TEST_PARSE_FLAG false
# define TEST_INT_CONVERSION false
# define TEST_CHAR_CONVERSION true

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
		ScalarConverter::convert("130.");
		ScalarConverter::convert("130.f");
		ScalarConverter::convert("\n");
	}
	if (TEST_INT_CONVERSION)
	{
		ScalarConverter::convert("48");
		cout << endl;
		ScalarConverter::convert("13381");
		cout << endl;
		ScalarConverter::convert("44941874938471944");
		cout << endl;
		ScalarConverter::convert("1000000");
		cout << endl;
		ScalarConverter::convert("61");
		cout << endl;
		ScalarConverter::convert("-61");
		cout << endl;
		ScalarConverter::convert("-44941874938471944");
		cout << endl;
		ScalarConverter::convert("-0");
		cout << endl;
		ScalarConverter::convert("0");
		cout << endl;
	}
	if (TEST_CHAR_CONVERSION)
	{
		ScalarConverter::convert("a");
		cout << endl;
		ScalarConverter::convert("A");
		cout << endl;
	}
}