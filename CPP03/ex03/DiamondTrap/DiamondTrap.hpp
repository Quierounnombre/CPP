#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "../ScavTrap/ScavTrap.hpp"
#include "../FragTrap/FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		DiamondTrap();
		DiamondTrap(const DiamondTrap &DiamondTrap);
		~DiamondTrap();
		DiamondTrap & operator = (const DiamondTrap &DiamondTrap);

		//DiamondTrap
		//------------------------------------------------------

	private:
		std::string	_name;
};

#endif