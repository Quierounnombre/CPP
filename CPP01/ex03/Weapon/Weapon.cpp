#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type	= type;
}

Weapon::~Weapon()
{

}

Weapon::Weapon(const Weapon &Weapon)
{

}

Weapon & Weapon::operator= (const Weapon &Weapon)
{
 	if (this != & Weapon)
	{

	} 	
	return (*this);
}

std::string	const &Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
