#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{
	FragTrap::say() << "BYYYYYYYYYYYYYYYE" << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("Diamond_clap_name")
{
	this->name = ClapTrap::name;
	this->icon = "💎";
	this->health = FragTrap::defaultHealth;
	this->energy = ScavTrap::defaultEnergy;
	this->damage = FragTrap::defaultDamage;
	this->say() << "YOU INVOKED ME... WITHOUT NAME!!!!!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name")
{
	this->name = ClapTrap::name;
	this->icon = "💎";
	this->health = FragTrap::defaultHealth;
	this->energy = ScavTrap::defaultEnergy;
	this->damage = FragTrap::defaultDamage;
	this->say() << "YOU INVOKED ME... HI [construtor(name)]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src): ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	this->say() << "YOU INVOKED ME... HI [copy construtor]" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this == &src)
		return *this;
	this->icon = src.icon;
	this->name = src.name;
	this->health = src.health;
	this->energy = src.energy;
	this->damage = src.damage;
	this->say() << "YOU INVOKED ME... HI [assignement construtor]" << std::endl;
	return *this;
}
