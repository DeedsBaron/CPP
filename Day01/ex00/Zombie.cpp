#include "Zombie.hpp"

Zombie::Zombie(std::string name) : my_name(name) {}

void Zombie::announce(void) const
{
	std::cout << my_name << " BraiiiiiiinnnzzzZ...";
}

Zombie::~Zombie(void)
{
	this->announce();
	std::cout << "\tI'm dead" << std::endl;
}

