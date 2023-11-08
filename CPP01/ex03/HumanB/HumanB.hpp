#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "../Weapon/Weapon.hpp"

class HumanB
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		HumanB(std::string name);
		HumanB(const HumanB &HumanB);
		~HumanB();
		HumanB & operator = (const HumanB &HumanB);

		//HumanB
		//------------------------------------------------------
		
		void	attack();
		void	setWeapon(Weapon &weapon);

	Weapon		*weapon;
	std::string	name;
};

#endif