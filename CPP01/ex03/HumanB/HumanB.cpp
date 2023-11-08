#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
name(name),
weapon(NULL)
{
}

HumanB::~HumanB()
{

}

HumanB::HumanB(const HumanB &HumanB) :
weapon(HumanB.weapon),
name(HumanB.name)
{

}

HumanB & HumanB::operator= (const HumanB &HumanB)
{
 	if (this != & HumanB)
	{

	} 	
	return (*this);
}

void	HumanB::attack(void)
{
	std::string	str;

	str = "barehand";
	if (weapon)
		str = this->weapon->getType();
	std::cout << this->name << " attacks with their " << str << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	if (this->weapon)
		free(this->weapon);
	this->weapon = &weapon;
}
