#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap h1 = ClapTrap();
	ClapTrap h2("FL4K");
	ClapTrap h3(h2);
	h3.attack("Amara");
	h3.takeDamage(1337);
	h3.beRepaired(10);
	return 0;
}