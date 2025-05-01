#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int         health;
    int         energy;
    int         damage;
    bool        useEnergy();
    std::ostream& say() const;
public:
    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap& clapTrap);
    ClapTrap& operator=(const ClapTrap& clapTrap);
    ~ClapTrap();
    std::string getName() const;
    int getDamage() const;
    void setDamage(int damage);
    void attack(const std::string& target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);
};

#endif
