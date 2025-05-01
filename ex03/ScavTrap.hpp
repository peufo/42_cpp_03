#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		bool isGateKeeper;
	protected:
		static const int defaultHealth = 100;
		static const int defaultEnergy = 50;
		static const int defaultDamage = 20;
	public:
		~ScavTrap();
		ScavTrap();
		ScavTrap(const ScavTrap& src);
		ScavTrap(const std::string name);
		ScavTrap& operator=(const ScavTrap& src);
		void guardGate();
};

#endif
