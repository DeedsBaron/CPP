#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ins);
	~ScavTrap(void);

	virtual void	attack(std::string const& target);
	virtual void 	display_stats(void);
	void			guardGate(void);
};
