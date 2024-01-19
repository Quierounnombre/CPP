#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# pragma once

# include <iostream>
# include <string>

# include "../FragTrap/FragTrap.hpp"
# include "../ScavTrap/ScavTrap.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define DIAMONDTRAP_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define DIAMONDTRAP_RESET_COLOR "\033[0m"
# define DIAMONDTRAP_DEFAULT_DO_LOG true

# define DIAMONDTRAP_CLAP_NAME_SUFFIX "_clap_name"

# define u_int	u_int32_t
# define n_int	int32_t

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		DiamondTrap(string name);
		DiamondTrap(string name, bool log);
		DiamondTrap(const DiamondTrap &DiamondTrap);
		~DiamondTrap();
		DiamondTrap & operator = (const DiamondTrap &DiamondTrap);

		//WHO_AM_I
		//-------------------------------------------------------

		void	whoAmI(void);

	protected:
		bool	_do_log;


	private:
		string	_name;

		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif