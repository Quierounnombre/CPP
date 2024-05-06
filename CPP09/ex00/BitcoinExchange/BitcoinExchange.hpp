#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# pragma once

# include <iostream>
# include <map>
# include <string>
# include <utility>

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

# define u_int	u_int32_t
# define n_int	int32_t

class BitcoinExchange
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		BitcoinExchange();
		BitcoinExchange(bool log);
		BitcoinExchange(const BitcoinExchange &BitcoinExchange);
		~BitcoinExchange();
		BitcoinExchange & operator = (const BitcoinExchange &BitcoinExchange);

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif