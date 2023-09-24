#include "HumanA/HumanA.hpp"
#include "HumanB/HumanB.hpp"
#include "Weapon/Weapon.hpp"

int main()
{
	Weapon	W("CLUB");
	HumanA	A("ALICE", W);
	HumanB	B("BOB");

	A.attack();
	B.attack();
}
