#include "ClapTrap/ClapTrap.hpp"

# define ALPHA "alpha"
# define BRAVO "bravo"

int	main(void)
{
	ClapTrap	unit_aplha(ALPHA);
	ClapTrap	unit_bravo(BRAVO);

	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_aplha.attack(BRAVO);
	unit_bravo.takeDamage(DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(2);
	unit_bravo.takeDamage(5);
	unit_bravo.takeDamage(5);
	unit_bravo.takeDamage(5);
	unit_bravo.takeDamage(5);
}
