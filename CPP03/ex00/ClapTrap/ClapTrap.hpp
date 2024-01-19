#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define DEFAULT_DO_LOG true

# define DEFAULT_HP 10
# define DEFAULT_ATK_DMG 0
# define DEFAULT_ENERGY 10
# define DEFAULT_NAME ""

# define u_int	u_int32_t
# define int	int32_t

class ClapTrap
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ClapTrap(void);
		ClapTrap(bool log);
		ClapTrap(string name);
		ClapTrap(string name, bool log);
		ClapTrap(const ClapTrap &ClapTrap);
		~ClapTrap();
		ClapTrap & operator = (const ClapTrap &ClapTrap);

		//Attack
		//-------------------------------------------------------

		void	attack(const string &target);

		//Defense
		//-------------------------------------------------------

		void	takeDamage(u_int amount);

		//Repairs
		//-------------------------------------------------------

		void	beRepaired(u_int amount);

		//Conditions
		//-------------------------------------------------------

		bool	system_eval(void);

	protected:
		bool	_do_log;

	private:
		string	_name;
		int		_energy;
		int		_atk_dmg;
		int		_hp;
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif