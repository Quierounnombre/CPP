#include "Zombie/Zombie.hpp"

/*
static void		leakss()
{
	system ("leaks Plant_VS_zombies");
}
*/
	//atexit(leakss);

int	main()
{
	Zombie	*Z;

	Z = Z->newZombie("Z");
	Z->randomChump("ASCA");
	delete (Z);
}