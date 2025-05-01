#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("ZapTrap-9000");
	ScavTrap b("CL4P-H0P");

	b.guardGate();
	a.say() << "Hey " << b.getName() << ", can i go throug the gate ?" << std::endl;
	b.say() << "Nop !" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	b.attack(a.getName());
	a.takeDamage(b.getDamage());

	return (0);
}
