#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# pragma once

# include <iostream>
# include <string>

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define CLAPTRAP_DEFAULT_DO_LOG true
# define CLAPTRAP_DEFAULT_HP 10
# define CLAPTRAP_DEFAULT_ATK_DMG 0
# define CLAPTRAP_DEFAULT_ENERGY 10

class ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ClapTrap(std::string name);
		ClapTrap(std::string name, unsigned int hp,
			unsigned int atk_dmg, unsigned int energy, bool log);
		ClapTrap(const ClapTrap &ClapTrap);
		~ClapTrap();
		ClapTrap & operator = (const ClapTrap &ClapTrap);

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

	protected:
		bool		_do_log;
		int			_hp;
		int			_energy;
		int			_atk_dmg;
		std::string	_name;
};

#endif