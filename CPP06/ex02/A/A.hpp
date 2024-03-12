#ifndef A_HPP
# define A_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Base/Base.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define A_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define A_RESET_COLOR "\033[0m"
# define A_DEFAULT_DO_LOG false

# define A_DESTRUCTOR_LOG "A destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class A : public Base
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		~A();

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif