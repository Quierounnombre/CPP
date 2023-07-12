#include "Zombie/Zombie.hpp"

static void		leakss()
{
	system ("leaks Plant_VS_zombies");
}

int	main()
{
	Zombie	*Z;

	atexit(leakss);
	Z = Z->newZombie("Z");
	Z->randomChump("ASCA");
	delete (Z);
}