#include "Zombie/Zombie.hpp"

/*
static void		leakss()
{
	system ("leaks Plant_VS_zombies");
}*/


int	main()
{
	Zombie	*Z;
	Zombie	*Z_horde;
	int		i;

	//atexit(leakss);
	i = 10;
	Z = Z->newZombie("Z");
	Z->randomChump("ASCA");
	Z_horde = Z_horde->zombieHorde(i, "Ejecutivo_deprimido");
	while (i)
	{
		Z_horde[i - 1].announce();
		i--;
	}
	delete (Z);
	i = 10;
	while (i)
	{
		Z_horde[i - 1].~Zombie();
		i--;
	}
}