#include "Array/Array.hpp"
#include "Array/Array.tpp"


int	main(void)
{
	Array<int>	r;

	cout << r[0] << endl;
	r[0] = 1;
	try
	{
		cout << r[1] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << r[454] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << r[-454] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << r[-0] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << r[-1] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	cout << r.size() << endl;
}