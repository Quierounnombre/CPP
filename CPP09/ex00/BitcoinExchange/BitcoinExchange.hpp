#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# pragma once

# include <iostream>
# include <map>
# include <string>
# include <utility>
# include <fstream>
# include <cstring>
# include "../Date/Date.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define BITCOINEXCHANGE_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define BITCOINEXCHANGE_RESET_COLOR "\033[0m"
# define BITCOINEXCHANGE_DEFAULT_DO_LOG false

# define BITCOINEXCHANGE_DEFAULT_CONSTRUCTOR_LOG "BitcoinExchange default constructor called"
# define BITCOINEXCHANGE_COPY_CONSTRUCTOR_LOG "BitcoinExchange copy constructor called"
# define BITCOINEXCHANGE_COPY_ASSIGNMENT_LOG "BitcoinExchange copy assignment called"
# define BITCOINEXCHANGE_DESTRUCTOR_LOG "BitcoinExchange destructor called"

# define ERROR_CANT_OPEN_DATABASE "Database can't be opened"
# define ERROR_CANT_OPEN_INPUT_FILE "Error can't open input file"
# define ERROR_WRONG_INPUT_FILE "Error input file isn't setted or have the same name as default(NONE)"
# define ERROR_BADLY_FORMATED_LINE "Database entry bad format, line: "
# define ERROR_BADLY_FORMATED_WALLET "Wallet entry bad format, line: "
# define ERROR_OUT_OF_RANGE "Database value is out of range, line: "
# define ERROR_OUT_OF_RANGE_WALLET "Wallet value is out of range, line: "
# define ERROR_DATE_UNDER_MINIMUM "Date is under the bitcoin creation date"

# define BITCOIN_DATABASE_TOKEN ","
# define BITCOIN_INPUT_TOKEN "|"
# define BITCOINEXCHANGE_DEFAULT_DATABASE "data.csv"
# define BITCOINEXCHANGE_DEFAULT_WALLET "NONE"
# define BITCOIN_DATE_MINIMUN "2009-1-03"

# define BITCOIN_DATABASE_MIN_VALUE 0
# define BITCOIN_DATABASE_MAX_VALUE 1000

class BitcoinExchange
{
	public:
		std::map<Date, double>	dicc;
		std::map<Date, double>	wallet;

		//CONSTRUCTORS
		//-------------------------------------------------------

		BitcoinExchange();
		BitcoinExchange(bool log);
		BitcoinExchange(const BitcoinExchange &BitcoinExchange);
		~BitcoinExchange();
		BitcoinExchange & operator = (const BitcoinExchange &BitcoinExchange);

		//DATABASE
		//-------------------------------------------------------

		void	loaddatabase(void);
		void	loadwallet(void);

		//SETTERS
		//-------------------------------------------------------

		void	SetDatabaseDir(string s);
		void	SetWalletDir(string s);

		//GETTERS
		//-------------------------------------------------------

		string	GetDatabaseDir(void) const;
		string	GetWalletDir(void) const;
		double	GetValueCloserToDate(Date d);

		//-------------------------------------------------------

	protected:
		bool			_do_log;
		string			_database_dir;
		string			_wallet_dir;
		std::fstream	_database_file;
		std::fstream	_wallet_file;

	private:

		//DATABASE
		//-------------------------------------------------------

		void	store_line_in_dicc(string s, int line);
		void	store_line_in_wallet(string s, int line);

		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif