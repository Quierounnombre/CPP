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
static void btc_test_dicc(void)
{
	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << endl;
	try
	{
		BitcoinExchange	btc;
		Date			d("2002-2-24");

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
		Date			d("2009-02-02");

		btc.loaddatabase();
		cout << d.getDateString() << "-> " << btc.dicc[d] << endl;
		d.setDays(5);
		cout << btc.dicc.at(d) << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
		cout << "HA PETADO" << endl;
		cout << endl;
		cout << "----------------------------------------" << endl;
		cout << endl;
	}
	try
	{
		BitcoinExchange	btc;
		Date			d("2009-02-02");

		btc.loaddatabase();
		cout << d.getDateString() << "-> " << btc.dicc[d] << endl;
		d.setDays(5);
		cout << d.getDateString() << "-> " << btc.dicc[d] << endl;
		d.setDays(17);
		cout << d.getDateString() << "-> " << btc.dicc[d] << endl;
		d.setDays(22);
		d.setMonth(3);
		cout << d.getDateString() << "-> " << btc.dicc[d] << endl;
	}
	catch (const std::exception &e)
	{
		cerr << e.what() << endl;
	}
	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << endl;
	try
	{
		BitcoinExchange	btc;
		Date			d("2009-2-2");
		double			value;

		btc.loaddatabase();
		cout << "VALUE LOWER = " << btc.dicc[d] << endl;
		d.setDays(8);
		cout << "VALUE HIGGER = " << btc.dicc[d] << endl;
		d.setDays(2);
		value = btc.GetValueCloserToDate(d);
		cout << "CLOSEST(EXACT_LOW) = " << value << endl;
		d.setDays(4);
		value = btc.GetValueCloserToDate(d);
		cout << "CLOSEST(LOW) = " << value << endl;
		d.setDays(5);
		value = btc.GetValueCloserToDate(d);
		cout << "CLOSEST(EQUAL) = " << value << endl;
		d.setDays(6);
		value = btc.GetValueCloserToDate(d);
		cout << "CLOSEST(HIGH) = " << value << endl;
		d.setDays(8);
		value = btc.GetValueCloserToDate(d);
		cout << "CLOSEST(EXACT_HIGH) = " << value << endl;
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
}


int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		date_test();
		btc_test_dicc();
		cout << endl;
		cout << "----------------------------------------" << endl;
		cout << endl;
	}
	if (argc > 1)
	{
		try
		{
			BitcoinExchange						btc;

			btc.SetWalletDir(argv[1]);
			btc.loaddatabase();
			cout << endl;
			btc.loadwallet();
			cout << endl;
		}
		catch(const std::exception& e)
		{
			cerr << e.what() << endl;
		}
	}
}
