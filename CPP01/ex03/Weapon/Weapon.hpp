#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		Weapon(std::string type);
		Weapon(const Weapon &Weapon);
		~Weapon();
		Weapon & operator = (const Weapon &Weapon);

		//Weapon
		//------------------------------------------------------
		std::string const	&getType();
		void				setType(std::string new_type);
	
	private:
		std::string	type;
};

#endif