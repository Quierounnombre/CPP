#ifndef B_HPP
# define B_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Base/Base.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define B_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define B_RESET_COLOR "\033[0m"
# define B_DEFAULT_DO_LOG false

# define B_DESTRUCTOR_LOG "B destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class B : public Base
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		~B();

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif