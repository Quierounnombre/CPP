#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "../Weapon/Weapon.hpp"

class HumanA
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		HumanA(std::string name, Weapon	gun);
		HumanA(const HumanA &HumanA);
		~HumanA();
		HumanA & operator = (const HumanA &HumanA);

		//HumanA
		//------------------------------------------------------
		
		void	attack();

	Weapon		*weapon;
	std::string	name;
};

#endif