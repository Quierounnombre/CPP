#include "ScalarConverter/ScalarConverter.hpp"

//# define TEST_PARSE_FLAG false
# define TEST_INT_CONVERSION false
# define TEST_CHAR_CONVERSION false
# define TEST_FLOAT_CONVERSION false
# define TEST_DOUBLE_CONVERSION false

static void	tester(void);

int	main(int argc, char **argv)
{
	if (argc <= 1)
		exit(1);
	if (argc > 2)
		tester();
	argv++;
	ScalarConverter::convert(*argv);
}

static void tester(void)
{
	if (TEST_PARSE_FLAG)
	{
		ScalarConverter::convert("a");
		cout << endl;
		ScalarConverter::convert("aa");
		cout << endl;
		ScalarConverter::convert("aaaa");
		cout << endl;
		ScalarConverter::convert("a-aa");
		cout << endl;
		ScalarConverter::convert("0-11");
		cout << endl;
		ScalarConverter::convert("1414");
		cout << endl;
		ScalarConverter::convert("-");
		cout << endl;
		ScalarConverter::convert(".a");
		cout << endl;
		ScalarConverter::convert(".0");
		cout << endl;
		ScalarConverter::convert("10");
		cout << endl;
		ScalarConverter::convert("1f");
		cout << endl;
		ScalarConverter::convert("1fad");
		cout << endl;
		ScalarConverter::convert("-.a");
		cout << endl;
		ScalarConverter::convert("-1a");
		cout << endl;
		ScalarConverter::convert("-a");
		cout << endl;
		ScalarConverter::convert("/");
		cout << endl;
		ScalarConverter::convert("3/11");
		cout << endl;
		ScalarConverter::convert("");
		cout << endl;
		ScalarConverter::convert("1 1");
		cout << endl;
		ScalarConverter::convert("151");
		cout << endl;
		ScalarConverter::convert("-inff");
		cout << endl;
		ScalarConverter::convert("-inf");
		cout << endl;
		ScalarConverter::convert("+inf");
		cout << endl;
		ScalarConverter::convert("+inff");
		cout << endl;
		ScalarConverter::convert("nan");
		cout << endl;
		ScalarConverter::convert("130.");
		cout << endl;
		ScalarConverter::convert("130.f");
		cout << endl;
		ScalarConverter::convert("\n");
		cout << endl;
	}
	if (TEST_INT_CONVERSION)
	{
		ScalarConverter::convert("48");
		cout << endl;
		ScalarConverter::convert("13381");
		cout << endl;
		//ScalarConverter::convert("44941874938471944");
		cout << endl;
		ScalarConverter::convert("1000000");
		cout << endl;
		ScalarConverter::convert("61");
		cout << endl;
		ScalarConverter::convert("-61");
		cout << endl;
		//ScalarConverter::convert("-44941874938471944");
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
	if (TEST_FLOAT_CONVERSION)
	{
		ScalarConverter::convert("0.001f");
		cout << endl;
		ScalarConverter::convert("79472934672346237423841f");
		cout << endl;
		ScalarConverter::convert("0.748974891748914781748971401f");
		cout << endl;
		ScalarConverter::convert("748974891748914781748971401f");
		cout << endl;
	}
	if (TEST_DOUBLE_CONVERSION)
	{
		ScalarConverter::convert("0.00f");
		cout << endl;
		ScalarConverter::convert("79472934672346237423841");
		cout << endl;
		ScalarConverter::convert("0.748974891748914781748971401");
		cout << endl;
	}
}