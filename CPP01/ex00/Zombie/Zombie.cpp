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

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*Z;

	Z = NULL;
	Z = new (Zombie);
	if (Z)
	{
		Z->_name = name;
		return (Z);
	}
	return (NULL);
}

void	Zombie::randomChump(std::string	name)
{
	Zombie	*Z;

	Z = NULL;
	Z = newZombie(name);
	if (Z)
	{
		std::cout << Z->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
		delete (Z);
	}
}
