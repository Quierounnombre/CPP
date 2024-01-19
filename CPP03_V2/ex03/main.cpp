#include "ClapTrap/ClapTrap.hpp"
#include "FragTrap/FragTrap.hpp"
#include "ScavTrap/ScavTrap.hpp"
#include "DiamondTrap/DiamondTrap.hpp"

# define ALPHA "alpha"
# define BRAVO "bravo"
# define CHARLIE "charlie"

int	main(void)
{
	DiamondTrap	unit_aplha(ALPHA);
	DiamondTrap	unit_bravo(BRAVO);
	DiamondTrap	unit_charlie(CHARLIE);

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
	unit_charlie.whoAmI();
}
