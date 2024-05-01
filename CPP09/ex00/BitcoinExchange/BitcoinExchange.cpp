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
_do_log(BITCOINEXCHANGE_DEFAULT_DO_LOG)
{
	constructor_log(BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG);
}

BitcoinExchange::BitcoinExchange(bool log) :
_do_log(log)
{
	constructor_log(BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG);
}

BitcoinExchange::~BitcoinExchange()
{
	constructor_log(BITCOINEXCHANGE_DESTRUCTOR_LOG);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &BitcoinExchange) :
_do_log(BitcoinExchange._do_log)
{
	constructor_log(BITCOINEXCHANGE_COPY_CONSTRUCTOR_LOG);
}

BitcoinExchange & BitcoinExchange::operator= (const BitcoinExchange &BitcoinExchange)
{
	constructor_log(BITCOINEXCHANGE_COPY_ASSIGNMENT_LOG);
	if (this != & BitcoinExchange)
	{
	}
	this->_do_log = BitcoinExchange._do_log;
	return (*this);
}

#pragma endregion
