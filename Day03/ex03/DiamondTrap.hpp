#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

private:
	std::string D_Name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& ins);
	~DiamondTrap(void);
	virtual void 	attack(std::string const &target);
	virtual void	guardGate(void);
	virtual void 	display_stats(void);
	virtual void 	highFivesGuys(void);
	void			whoAmI(void);
};
