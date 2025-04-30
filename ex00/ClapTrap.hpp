#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int         hit;
    int         energy;
    int         damage;
    bool        useEnergy();
public:
    ClapTrap();
    ClapTrap(std::string name);
    // Copy constructor
    ClapTrap(Clas);
    ClapTrap& operator=();
    ~ClapTrap();
    void attack(const std::string& target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
};

ClapTrap::ClapTrap() : hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap contructor called !" << std::endl;
    this->name = "default name";
}

ClapTrap::ClapTrap(std::string name): hit(10), energy(10), damage(0)
{
    std::cout << "ClapTrap contructor called !" << std::endl;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called !" << std::endl;
}

bool ClapTrap::useEnergy()
{
    if (this->energy <= 0)
    {
        std::cout << "No energy to use !" << std::endl;
        return false;
    }
    this->energy--;
    return (true);
}

void ClapTrap::attack(const std::string &target)
{
    if (!this->useEnergy())
        return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->useEnergy())
        return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
}

#endif
