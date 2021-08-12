#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	ClapTrap c1("Morgan");
	ScavTrap h1 = ScavTrap();
	ScavTrap h2("FL4K");
	ScavTrap h3(h2);
	c1.display_stats();
	h3.display_stats();
	h3.attack("Morgan");
	c1.attack("FL4k");
	h3.guardGate();
	std::cout << "\033[0;36m-<=====DESTRUCTORS=====>-\033[m\n";
	return 0;
}