#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	this->say() << "I'm destroyed !" << std::endl;
}

ClapTrap::ClapTrap() : icon("🤡"), health(10), energy(10), damage(0)
{
	this->name = "Unknown";
	this->say() << "Hi! I was born without name." << std::endl;
}

ClapTrap::ClapTrap(const std::string name): icon("🤡"), health(10), energy(10), damage(0)
{
	this->name = name;
	this->say() << "Hi! I was born and named me " << name << "." << std::endl;
}

void ClapTrap::copyFrom(const ClapTrap& src)
{
	this->icon = src.icon;
	this->name = src.name;
	this->health = src.health;
	this->energy = src.energy;
	this->damage = src.damage;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	this->copyFrom(src);
	this->say() << "I was born from a copy constructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this == &src)
		return *this;
	this->copyFrom(src);
	this->say() << "Hi! I was born from an assignement." << std::endl;
	return *this;
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

static void frame(std::string cornerLeft, std::string section, std::string cornerRight, int width)
{
	std::cout << cornerLeft;
	for (int i = 0; i < width; i++)
	{
		if (i == 24)
			std::cout << section;
		else
			std::cout << "─";
	}
	std::cout << cornerRight << '\n';
}

std::ostream & ClapTrap::say() const
{
	static int width = 60;

	std::cout << '\n';
	frame("╭", "┬", "╮", width);
	std::cout << "│ " << this->icon << " " << this->name;
	for (int i = this->name.length(); i < 20; i++)
		std::cout << ' ';
	std::cout << "│";
	std::cout << std::setw(8) << this->damage << " 🔫 ";
	std::cout << std::setw(8) << this->energy << " ⚡️ ";
	std::cout << std::setw(7) << this->health << " ❤️  ";
	std::cout << "│\n" << std::setw(0);
	frame("├", "┴", "╯", width);
	return (std::cout << "╰─ ");
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
	this->health += amount;
	this->say() << "Repairs myself. My health goes from " << this->health - amount << " to " << this->health << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health <= 0)
	{
		this->say() << "I'm already dead bro ! Don't you have any respect ?" << std::endl;
		return ;
	}
	if (amount > (unsigned int)this->health)
		amount = this->health;
	this->health -= amount;
	this->say() << "Ouch, that hurts! My health goes from " << this->health + amount << " to " << this->health << std::endl;
}
