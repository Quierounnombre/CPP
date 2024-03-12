#ifndef C_HPP
# define C_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Base/Base.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define C_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define C_RESET_COLOR "\033[0m"
# define C_DEFAULT_DO_LOG false

# define C_DESTRUCTOR_LOG "C destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class C :  public Base
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		~C();

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif