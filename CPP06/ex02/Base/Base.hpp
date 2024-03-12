#ifndef BASE_HPP
# define BASE_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define BASE_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define BASE_RESET_COLOR "\033[0m"
# define BASE_DEFAULT_DO_LOG false

# define BASE_DESTRUCTOR_LOG "Base destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class Base
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		virtual ~Base();

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif