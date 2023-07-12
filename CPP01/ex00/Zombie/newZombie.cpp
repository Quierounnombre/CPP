#include "Zombie.hpp"

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
