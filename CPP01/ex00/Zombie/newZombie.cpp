#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*Z;

	Z = NULL;
	Z = new Zombie(name);
	if (Z)
		return (Z);
	return (NULL);
}
