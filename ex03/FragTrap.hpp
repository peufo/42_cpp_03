#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	protected:
		static const int defaultHealth = 100;
		static const int defaultEnergy = 100;
		static const int defaultDamage = 30;
	public:
		~FragTrap();
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& src);
		FragTrap& operator=(const FragTrap& src);
		void highFivesGuys(void);
};

#endif
