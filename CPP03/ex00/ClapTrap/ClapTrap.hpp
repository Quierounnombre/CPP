#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# pragma once

# include <iostream>
# include <string>

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define DEFAULT_DO_LOG true
# define DEFAULT_HP 10
# define DEFAULT_ATK_DMG 0
# define DEFAULT_ENERGY 10

class ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ClapTrap(std::string name);
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

	private:
		bool		_do_log;
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_atk_dmg;



};

#endif