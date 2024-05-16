#include "BitcoinExchange.hpp"

#pragma region CONSTRUCTOR

void	BitcoinExchange::constructor_log(string s)
{
	if (_do_log)
	{
		cout << BITCOINEXCHANGE_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << BITCOINEXCHANGE_RESET_COLOR << endl;
	}
}

BitcoinExchange::BitcoinExchange() :
_do_log(BITCOINEXCHANGE_DEFAULT_DO_LOG),
_database_dir(BITCOINEXCHANGE_DEFAULT_DATABASE),
_wallet_dir(BITCOINEXCHANGE_DEFAULT_WALLET)
{
	constructor_log(BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG);
}

BitcoinExchange::BitcoinExchange(bool log) :
_do_log(log),
_database_dir(BITCOINEXCHANGE_DEFAULT_DATABASE),
_wallet_dir(BITCOINEXCHANGE_DEFAULT_WALLET)
{
	constructor_log(BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG);
}

BitcoinExchange::~BitcoinExchange()
{
	constructor_log(BITCOINEXCHANGE_DESTRUCTOR_LOG);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &BitcoinExchange) :
_do_log(BitcoinExchange._do_log),
_database_dir(BitcoinExchange._database_dir),
_wallet_dir(BitcoinExchange._wallet_dir)
{
	constructor_log(BITCOINEXCHANGE_COPY_CONSTRUCTOR_LOG);
}

BitcoinExchange & BitcoinExchange::operator= (const BitcoinExchange &BitcoinExchange)
{
	constructor_log(BITCOINEXCHANGE_COPY_ASSIGNMENT_LOG);
	if (this != & BitcoinExchange)
	{
		this->_do_log = BitcoinExchange._do_log;
		this->_database_dir = BitcoinExchange._database_dir;
		this->_wallet_dir = BitcoinExchange._wallet_dir;
	}
	return (*this);
}

#pragma endregion

#pragma region SETTERS

void	BitcoinExchange::SetDatabaseDir(string s)
{
	_database_dir = s;
}

void	BitcoinExchange::SetWalletDir(string s)
{
	_wallet_dir = s;
}

#pragma endregion

#pragma region GETTERS

string	BitcoinExchange::GetDatabaseDir(void) const
{
	return (_database_dir);
}

string	BitcoinExchange::GetWalletDir(void) const
{
	return (_wallet_dir);
}

double	BitcoinExchange::GetValueCloserToDate(Date d)
{
	std::map<Date, double>::iterator	it;
	std::map<Date, double>::iterator	low_date;
	std::map<Date, double>::iterator	high_date;
	long								distance_d_low;
	long								distance_d_high;

	low_date = dicc.begin();
	high_date = dicc.end();
	high_date--;
	for (it = dicc.begin() ; it != dicc.end() ; it++)
	{
		if (it->first == d)
			return (it->second);
		else if (it->first < d
				&& it->first > low_date->first)
			low_date = it;
		else if (it->first > d
				&& it->first < high_date->first)
			high_date = it;
	}
	distance_d_high = high_date->first.getTotalDays() - d.getTotalDays();
	distance_d_low = d.getTotalDays() - low_date->first.getTotalDays();
	if (distance_d_low <= distance_d_high)
		return(low_date->second);
	return (high_date->second);
}

#pragma endregion