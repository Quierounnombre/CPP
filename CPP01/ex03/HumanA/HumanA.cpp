#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon	&weapon) :
weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
	
}

HumanA::HumanA(const HumanA &HumanA, Weapon	&weapon) :
weapon(weapon)
{

}

HumanA & HumanA::operator= (const HumanA &HumanA)
{
 	if (this != & HumanA)
	{

	} 	
	return (*this);
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
