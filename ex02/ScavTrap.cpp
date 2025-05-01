#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
	this->say() << "Ho... I need to go !  Bye 👋" << std::endl;
}

ScavTrap::ScavTrap(): ClapTrap()
{
	this->icon = "🤖";
	this->isGateKeeper = false;
	this->health = this->defaultHealth;
	this->energy = this->defaultEnergy;
	this->damage = this->defaultDamage;
	this->say() << "Hey ciao! I was born without name." << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	this->icon = "🤖";
	this->isGateKeeper = false;
	this->health = this->defaultHealth;
	this->energy = this->defaultEnergy;
	this->damage = this->defaultDamage;
	this->say() << "Hey ciao! I'm now a ScavTrap [construtor(name)]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & scavTrap): ClapTrap(scavTrap)
{
	this->say() << "Hey ciao! I'm now a ScavTrap [copy construtor]" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap)
{
	if (this == &scavTrap)
		return *this;
	this->icon = "🤖";
	this->isGateKeeper = scavTrap.isGateKeeper;
	this->say() << "Hey ciao! I'm now a ScavTrap [assignement construtor]" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	if (this->isGateKeeper)
	{
		this->say() << "I'm already in gate keeper mode !" << std::endl;
		return ;
	}
	this->isGateKeeper = true;
	this->say() << "Okay! I'm now in gate keeper mode !" << std::endl;
}
