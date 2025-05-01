#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		static const int defaultHealth = 100;
		static const int defaultEnergy = 50;
		static const int defaultDamage = 20;
		bool isGateKeeper;
	public:
		~ScavTrap();
		ScavTrap();
		ScavTrap(const ScavTrap& ScavTrap);
		ScavTrap(const std::string name);
		ScavTrap& operator=(const ScavTrap& scavTrap);
		void guardGate();
};

#endif
