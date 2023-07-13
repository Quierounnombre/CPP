#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie	*Z = new Zombie[N];
		int		i;


		i = 0;
		while (i < N)
			Z[i]._name = name;
		return (Z);
	}
	return (NULL);
}