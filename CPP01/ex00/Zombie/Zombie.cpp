#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << this->_name << " killed" << std::endl;
}

Zombie::Zombie(const Zombie &Zombie)
{

}

Zombie & Zombie::operator= (const Zombie &Zombie)
{
	if (this != & Zombie)
	{
	}
	return *this;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;	
}
