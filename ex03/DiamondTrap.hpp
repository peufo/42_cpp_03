#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		~DiamondTrap();
		DiamondTrap();
		DiamondTrap(const DiamondTrap& src);
		DiamondTrap(const std::string name);
		DiamondTrap& operator=(const DiamondTrap& src);
		void whoAmI();
};

#endif
