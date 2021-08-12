#pragma once

#include <iostream>

class ClapTrap {

protected:
	std::string		Name;
	unsigned int 	Hitpoints;
	unsigned int 	Energy_points;
	unsigned int 	Attack_damage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ins);
	ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int att_dmg);
	~ClapTrap(void);
	ClapTrap&		operator=(const ClapTrap& right);

	virtual void	attack(std::string const& target);
	virtual void 	display_stats(void);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

};
