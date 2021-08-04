#pragma once

class HumanB{
private:
	std::string name;
	Weapon* type;
public:
	void attack(void);
	void setWeapon(Weapon & type);
	HumanB(std::string name);
	~HumanB(void);
};