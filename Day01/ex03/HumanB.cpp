#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->type = nullptr;
}

HumanB::~HumanB(void){}

void HumanB::attack(void)
{
	if (type == nullptr)
		std::cout << name << " attacks with his EMPTY_HANDS" << std::endl;
	else
		std::cout << name << " attacks with his " << type->getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon & type)
{
	this->type = &type;
	return ;
}
