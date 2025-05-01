#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		static const int defaultHealth = 100;
		static const int defaultEnergy = 100;
		static const int defaultDamage = 30;
	public:
		~FragTrap();
		FragTrap();
		FragTrap(const FragTrap& fragTrap);
		FragTrap(const std::string name);
		FragTrap& operator=(const FragTrap& fragTrap);
		void highFivesGuys(void);
};

#endif
