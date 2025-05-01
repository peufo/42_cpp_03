#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{
	FragTrap::say() << "Byyyyyyyyyyyyye" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("Diamond_clap_name")
{
	this->name = name;
	this->icon = "💎";
	this->health = FragTrap::defaultHealth;
	this->energy = ScavTrap::defaultEnergy;
	this->damage = FragTrap::defaultDamage;
	this->say() << "Hola, [default constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->icon = "💎";
	this->health = FragTrap::defaultHealth;
	this->energy = ScavTrap::defaultEnergy;
	this->damage = FragTrap::defaultDamage;
	this->say() << "Hola [construtor(name=" << this->name << ")]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src): ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	this->name = src.name;
	this->say() << "Hola [copy construtor]" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this == &src)
		return *this;
	this->name = src.name;
	this->copyFrom(src);
	this->say() << "Hola [assignement construtor]" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI()
{
	this->say() << "My name is [" << ClapTrap::name << "], but everybody calls me [" << this->name << "]" << std::endl;
}
