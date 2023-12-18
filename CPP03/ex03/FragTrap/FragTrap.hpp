#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "../ClapTrap/ClapTrap.hpp"

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define FRAGTRAP_DEFAULT_DO_LOG true
# define FRAGTRAP_DEFAULT_HP 100
# define FRAGTRAP_DEFAULT_ATK_DMG 30
# define FRAGTRAP_DEFAULT_ENERGY 100

class FragTrap : public ClapTrap
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		FragTrap(std::string name);
		FragTrap(const FragTrap &FragTrap);
		~FragTrap();
		FragTrap & operator = (const FragTrap &FragTrap);

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

		void	highFivesGuys(void);

};

#endif