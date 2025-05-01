#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	this->say() << "I GO, SEE YOU NEVER" << std::endl;
}

FragTrap::FragTrap(): ClapTrap()
{
	this->icon = "☠️ ";
	this->health = this->defaultHealth;
	this->energy = this->defaultEnergy;
	this->damage = this->defaultDamage;
	this->say() << "YOU INVOKED ME... WITHOUT NAME!!!!!" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	this->icon = "☠️ ";
	this->health = this->defaultHealth;
	this->energy = this->defaultEnergy;
	this->damage = this->defaultDamage;
	this->say() << "YOU INVOKED ME... HI [construtor(name)]" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src): ClapTrap(src)
{
	this->say() << "YOU INVOKED ME... HI [copy construtor]" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this == &src)
		return *this;
	this->copyFrom(src);
	this->say() << "YOU INVOKED ME... HI [assignement construtor]" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	this->say() << "YO GUYS, DON'T FIGHT ! CHECK ? 🤜" << std::endl;
}
