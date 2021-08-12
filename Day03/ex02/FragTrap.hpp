#pragma once
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& ins);
	~FragTrap(void);

	virtual void	attack(std::string const& target);
	virtual void 	display_stats(void);
	void			highFivesGuys(void);
};
