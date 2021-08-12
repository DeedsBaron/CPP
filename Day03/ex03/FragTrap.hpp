#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& ins);
	~FragTrap(void);

	virtual void	attack(std::string const& target);
	virtual void 	display_stats(void);
	virtual void	highFivesGuys(void);
};
