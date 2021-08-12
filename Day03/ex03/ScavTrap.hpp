#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ins);
	~ScavTrap(void);

	virtual void	attack(std::string const& target);
	virtual void 	display_stats(void);
	virtual void	guardGate(void);
	unsigned int	get_ep(void);
};
