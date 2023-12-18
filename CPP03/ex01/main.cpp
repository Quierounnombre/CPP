#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"

# define ALPHA "alpha"
# define BRAVO "bravo"

int	main(void)
{
	ScavTrap	unit_aplha(ALPHA);
	ScavTrap	unit_bravo(BRAVO);

	for (int i = 0; i < 51; i++)
		unit_aplha.attack(BRAVO);
	unit_bravo.takeDamage(DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(2);
	unit_bravo.takeDamage(5);
	unit_bravo.takeDamage(5);
	unit_bravo.takeDamage(5);
	unit_bravo.takeDamage(5);
}
