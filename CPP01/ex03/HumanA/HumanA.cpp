#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon	gun) :
name(name),
weapon(&gun)
{
}

HumanA::~HumanA()
{
	
}

HumanA::HumanA(const HumanA &HumanA) :
weapon(HumanA.weapon),
name(HumanA.name)
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
	std::string	str;

	str = this->weapon->getType();
	std::cout << this->name << " attacks with their " << str << std::endl;
}
