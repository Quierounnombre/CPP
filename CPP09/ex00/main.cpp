# include "Date/Date.hpp"

static void	date_test(void)
{
	try
	{
		Date	d(10, 3, 24);

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d(9, 4, -300);

		cout << d << endl;	
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d("1000-4-15");

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d("-1000-4-15");

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d("---1000---4----15");

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d("--1000-4-15");

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d("-1000--4-15");

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		Date	d("-1000-4--15");

		cout << d << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
}

int		main(void)
{
	date_test();
}
