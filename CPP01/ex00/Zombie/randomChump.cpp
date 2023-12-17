#include "Zombie.hpp"

void	Zombie::randomChump(std::string	name)
{
	Zombie	Z(name);

	Z.announce();
}
