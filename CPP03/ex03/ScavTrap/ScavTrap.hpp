#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# pragma once

# include <iostream>
# include <string>
# include "../ClapTrap/ClapTrap.hpp"

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define SCAVTRAP_DEFAULT_DO_LOG true
# define SCAVTRAP_DEFAULT_HP 100
# define SCAVTRAP_DEFAULT_ATK_DMG 20
# define SCAVTRAP_DEFAULT_ENERGY 50

class ScavTrap : virtual public ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ClapTrap);
		~ScavTrap();
		ScavTrap & operator = (const ScavTrap &ClapTrap);

		//Attack
		//-------------------------------------------------------

		void	attack(const std::string &target);

		//Defense
		//-------------------------------------------------------

		void	takeDamage(unsigned int amount);

		//Repairs
		//-------------------------------------------------------

		void	beRepaired(unsigned int amount);

		//Conditions
		//-------------------------------------------------------

		bool	system_eval(void);

		//States
		//-------------------------------------------------------

		void	guardGate(void);

	private:
		bool		_is_gate_keeping;



};

#endif