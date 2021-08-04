#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & type) : name(name), type(type){}

HumanA::~HumanA(void){}

void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << type.getType() << std::endl;
	return ;
}