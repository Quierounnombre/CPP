# include "RPN_/RPN.hpp"

# define MIN_ARGS 2
# define MIN_ARGS_TEST 3


void	test(void)
{
	try
	{
		RPN	rpn;

		rpn.check_string("1 1    ");
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		RPN	rpn;

		rpn.check_string("1 1 + +");
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		RPN	rpn;

		rpn.check_string("1 ^ 3");
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	cout << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
}

int	main(int argc, char **argv)
{
	if (argc >= MIN_ARGS_TEST)
		test();
	if (argc >= MIN_ARGS)
	{
		try
		{
			RPN	rpn;

			rpn.calculate(argv[1]);
		}
		catch(const std::exception& e)
		{
			cerr << e.what() << endl;
		}
	}
	else
		cerr << INCORRECT_NUMBER_OF_ARGS << endl;
	return (0);
}