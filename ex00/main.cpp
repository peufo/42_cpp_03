#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("ZapTrap-9000");
    ClapTrap b("CL4P-H0P");
    ClapTrap c("TR4SH-B0T");
    ClapTrap d(c);
    ClapTrap e = d;

    a.setDamage(1);
    b.setDamage(2);
    a.attack(b.getName());
    b.takeDamage(a.getDamage());
    b.attack(c.getName());
    c.takeDamage(b.getDamage());
    d.beRepaired(1);
    return (0);
}