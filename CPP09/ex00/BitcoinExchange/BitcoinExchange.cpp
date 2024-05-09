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
_database_dir(BITCOINEXCHANGE_DEFAULT_DATABASE)
{
	constructor_log(BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG);
}

BitcoinExchange::BitcoinExchange(bool log) :
_do_log(log),
_database_dir(BITCOINEXCHANGE_DEFAULT_DATABASE)
{
	constructor_log(BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG);
}

BitcoinExchange::~BitcoinExchange()
{
	constructor_log(BITCOINEXCHANGE_DESTRUCTOR_LOG);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &BitcoinExchange) :
_do_log(BitcoinExchange._do_log),
_database_dir(BitcoinExchange._database_dir)
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
	}
	return (*this);
}

#pragma endregion

#pragma region SETTERS

void	BitcoinExchange::SetDatabaseDir(string s)
{
	_database_dir = s;
}

#pragma endregion

#pragma region GETTERS

string	BitcoinExchange::GetDatabaseDir(void) const
{
	return (_database_dir);
}

#pragma endregion