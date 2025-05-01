#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : health(10), energy(10), damage(0)
{
	this->name = "Unknown";
	this->say() << "Hi! I was born without name." << std::endl;
}

ClapTrap::ClapTrap(const std::string name): health(10), energy(10), damage(0)
{
	this->name = name;
	this->say() << "Hi! I was born and named me " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & clapTrap): health(10), energy(10), damage(0)
{
	this->name = clapTrap.name;
	this->say() << "Hi! I was born and i take the same name of a bro." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	if (this == &clapTrap)
		return *this;
	this->name = clapTrap.name;
	this->health = clapTrap.health;
	this->energy = clapTrap.energy;
	this->damage = clapTrap.damage;
	this->say() << "Hi! I was born and i take the same name and states of a bro." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	this->say() << "I'm destroyed !" << std::endl;
}

std::string ClapTrap::getName() const
{
	return this->name;
}

int ClapTrap::getDamage() const
{
	return this->damage;
}

void ClapTrap::setDamage(int damage)
{
	this->damage = damage;
}

std::ostream & ClapTrap::say() const
{
	std::cout << std::setiosflags(std::ios::left);
	return (std::cout << "│" << std::setw(14) << this->name << std::setw(0) << "├ ");
}

bool ClapTrap::useEnergy()
{
	if (this->health <= 0)
	{
		this->say() << "No health !" << std::endl;
		return false;
	}
	if (this->energy <= 0)
	{
		this->say() << "No energy to use !" << std::endl;
		return false;
	}
	this->energy--;
	return (true);
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->useEnergy())
		return ;
	this->say() << "Attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->useEnergy())
		return ;
	this->say() << "Repairs myself. My health goes from " << this->health << " to " << this->health + amount << std::endl;
	this->health += amount;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health <= 0)
	{
		this->say() << "I'm already dead bro ! Don't you have any respect ?" << std::endl;
		return ;
	}
	this->say() << "Ouch, that hurts! My health goes from " << this->health << " to " << this->health - amount << std::endl;
	this->health -= amount;
}