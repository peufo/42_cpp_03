#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("CL4P-H0P");
	DiamondTrap b(a);
	
	a.whoAmI();
	b.whoAmI();
	a.guardGate();
	a.highFivesGuys();

	return (0);
}
