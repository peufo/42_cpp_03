#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("ZapTrap-9000");
	ScavTrap b("CL4P-H0P");
	FragTrap c("TR4SH-B0T");

	b.guardGate();
	a.say() << "Hey " << b.getName() << ", can i go throug the gate ?" << std::endl;
	b.say() << "Nop ! 🫷" << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDamage());
	c.highFivesGuys();
	b.say() << "Oops, you'r right, is useless 🤛" << std::endl;
	a.say() << "Thanks " << c.getName() << "! But I'm already dead... 🤛" << std::endl;
	return (0);
}
