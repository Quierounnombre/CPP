#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{

}

HumanB::HumanB(const HumanB &HumanB)
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
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
