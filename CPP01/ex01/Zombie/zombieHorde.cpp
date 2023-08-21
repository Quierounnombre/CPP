#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	int		i;
	
	i = 0;
	if (N > 0)
	{
		Zombie	*Z = new Zombie[N];
		while (i < N)
		{
			Z[i]._name = name;
			i++;
		}
		return (Z);
	}
	return (NULL);
}