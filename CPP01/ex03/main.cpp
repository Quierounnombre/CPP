#include "HumanA/HumanA.hpp"
#include "HumanB/HumanB.hpp"
#include "Weapon/Weapon.hpp"

void	leakss(void)
{
	system("leaks Plant_VS_zombies");
}

int main()
{
	atexit(leakss);
	Weapon	W("PATATA");
	HumanA	A("ALICE", W);
	HumanB	B("BOB");

	A.attack();
	B.attack();
	
	std::cout << std::endl;
	{
		Weapon sword = Weapon("sword");
		HumanA A("ALICE", sword);
		A.attack();
		sword.setType("some other type of sword");
		A.attack();
	}
	std::cout << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB B("BOB");
		B.setWeapon(club);
		B.attack();
		club.setType("some other type of club");
		B.attack();
	}	
	
}
