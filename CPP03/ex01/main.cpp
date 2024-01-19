#include "ClapTrap/ClapTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"

# define ALPHA "alpha"
# define BRAVO "bravo"

int	main(void)
{
	ScavTrap	unit_aplha(ALPHA);
	ScavTrap	unit_bravo(BRAVO);

	for (int i = 0; i < (SCAVTRAP_DEFAULT_ENERGY + 1); i++)
		unit_aplha.attack(BRAVO);
	unit_bravo.takeDamage(SCAVTRAP_DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(SCAVTRAP_DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(2);
	unit_bravo.guardGate();
	unit_bravo.takeDamage(25);
	unit_bravo.takeDamage(25);
	unit_bravo.takeDamage(25);
	unit_bravo.takeDamage(25);
	unit_bravo.takeDamage(25);
	unit_bravo.guardGate();
}
