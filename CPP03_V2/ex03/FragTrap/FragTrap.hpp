#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# pragma once

# include <iostream>
# include <string>
# include <unistd.h>
# include "../ClapTrap/ClapTrap.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define FRAGTRAP_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define FRAGTRAP_RESET_COLOR "\033[0m"
# define FRAGTRAP_DEFAULT_DO_LOG true

# define FRAGTRAP_DEFAULT_HP 100
# define FRAGTRAP_DEFAULT_ATK_DMG 30
# define FRAGTRAP_DEFAULT_ENERGY 100
# define FRAGTRAP_DEFAULT_NAME ""

# define FRAGTRAP_HIGH_FIVE_DELAY 350000

# define u_int	u_int32_t
# define n_int	int32_t

class FragTrap : virtual public ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		FragTrap();
		FragTrap(string name);
		FragTrap(string name, bool log);
		FragTrap(const FragTrap &FragTrap);
		~FragTrap();
		FragTrap & operator = (const FragTrap &FragTrap);


	protected:
		bool	_do_log;
	private:
		//HIGH-FIVE
		//-------------------------------------------------------

		void highFivesGuys(void);

		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif