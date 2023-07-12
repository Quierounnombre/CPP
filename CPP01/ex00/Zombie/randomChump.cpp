#include "Zombie.hpp"

void	Zombie::randomChump(std::string	name)
{
	Zombie	*Z;

	Z = NULL;
	Z = newZombie(name);
	if (Z)
	{
		Z->announce();
		delete (Z);
	}
}
