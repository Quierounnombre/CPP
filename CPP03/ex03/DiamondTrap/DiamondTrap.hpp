#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "../ScavTrap/ScavTrap.hpp"
#include "../FragTrap/FragTrap.hpp"

# define NAME_SUFFIX "_clap_name"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &DiamondTrap);
		~DiamondTrap();
		DiamondTrap & operator = (const DiamondTrap &DiamondTrap);

		//DiamondTrap
		//------------------------------------------------------

		using	ScavTrap::attack;

		//------------------------------------------------------

	private:
		std::string	_name;
};

#endif