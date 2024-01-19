#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# pragma once

# include <iostream>
# include <string>
# include "../ClapTrap/ClapTrap.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define SCAVTRAP_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define SCAVTRAP_RESET_COLOR "\033[0m"
# define SCAVTRAP_DEFAULT_DO_LOG true
# define SCAVTRAP_ATTACK_COLOR "\033[0:32m"

# define SCAVTRAP_DEFAULT_HP 100
# define SCAVTRAP_DEFAULT_ATK_DMG 20
# define SCAVTRAP_DEFAULT_ENERGY 50
# define SCAVTRAP_DEFAULT_NAME ""
# define SCAVTRAP_DEFAULT_GATEKEEP false

# define u_int	u_int32_t
# define n_int	int32_t

class ScavTrap : public ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ScavTrap();
		ScavTrap(string name);
		ScavTrap(string name, bool log);
		ScavTrap(const ScavTrap &ScavTrap);
		~ScavTrap();
		ScavTrap & operator = (const ScavTrap &ScavTrap);

		//ATTACK
		//-------------------------------------------------------

		void	attack(const string &target);

		//GUARD MODE
		//-------------------------------------------------------

		void	guardGate(void);

	protected:
		bool	_do_log;
		bool	_is_gate_keeping;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif