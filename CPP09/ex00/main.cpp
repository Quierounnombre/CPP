# include "Date/Date.hpp"
# include "BitcoinExchange/BitcoinExchange.hpp"

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
	try
	{
		std::map<Date, float>	map;
		Date	d(10, 4, 7);

		map[d] = 34;
		cout << map[d] << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		std::map<Date, float>	map;
		Date	d1(10, 4, 7);
		Date	d2("-1033-4-7");

		map[d1] = 10;
		map[d2] = 13;
		std::map<Date, float>::iterator it;
		for (it = map.begin(); it != map.end(); it++)
			cout << it->first << ": " << it->second << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
}

int		main(void)
{
	date_test();
	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << endl;
	try
	{
		BitcoinExchange	btc;
		Date			d("2002-1-24");

		btc.dicc[d] = 5;
		cout << btc.dicc[d] << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		BitcoinExchange	btc;
		Date			d("2009-01-02");

		btc.loaddatabase();
		cout << btc.dicc[d] << endl;
		d.setDays(5);
		cout << btc.dicc[d] << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
