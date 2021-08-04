#pragma once
#include "Weapon.hpp"

class HumanA{
private:
	std::string name;
	Weapon & type;
public:
	void attack(void);
	HumanA(std::string name, Weapon & type);
	~HumanA(void);
};