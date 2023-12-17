#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# pragma once

# include <iostream>
# include <string>
# include "../ClapTrap/ClapTrap.hpp"

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define DEFAULT_DO_LOG true

class ScavTrap : public ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ScavTrap();
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
		std::string	_name;
		bool		_is_gate_keeping;



};

#endif