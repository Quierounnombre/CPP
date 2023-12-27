#include "ClapTrap/ClapTrap.hpp"
#include "FragTrap/FragTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "DiamondTrap/DiamondTrap.hpp"

# define ALPHA "alpha"
# define BRAVO "bravo"
# define CHARLIE "charlie"

int	main(void)
{
	DiamondTrap	DiamondTrap(ALPHA);

	DiamondTrap.attack(BRAVO);
	DiamondTrap.attack(BRAVO);
	DiamondTrap.attack(BRAVO);
	DiamondTrap.attack(BRAVO);
	DiamondTrap.attack(BRAVO);
	DiamondTrap.attack(BRAVO);
	DiamondTrap.attack(BRAVO);

	/*
	FragTrap	unit_aplha(ALPHA);
	FragTrap	unit_bravo(BRAVO);
	FragTrap	unit_charlie(CHARLIE);

	for (int i = 0; i < (FRAGTRAP_DEFAULT_ENERGY + 1); i++)
		unit_aplha.attack(BRAVO);
	unit_bravo.takeDamage(FRAGTRAP_DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(FRAGTRAP_DEFAULT_ATK_DMG);
	unit_bravo.beRepaired(2);
	unit_bravo.takeDamage(FRAGTRAP_DEFAULT_ATK_DMG);
	unit_bravo.takeDamage(FRAGTRAP_DEFAULT_ATK_DMG);
	unit_bravo.takeDamage(FRAGTRAP_DEFAULT_ATK_DMG);
	unit_bravo.takeDamage(FRAGTRAP_DEFAULT_ATK_DMG);
	unit_bravo.takeDamage(FRAGTRAP_DEFAULT_ATK_DMG);
	for (int i = 0; i < (FRAGTRAP_DEFAULT_ENERGY + 1); i++)
		unit_charlie.highFivesGuys();
	*/
}
