#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	ClapTrap c1("Morgan");
	FragTrap h1 = FragTrap();
	FragTrap h2("FL4K");
	FragTrap h3(h2);
	c1.display_stats();
	h3.display_stats();
	h3.attack("Morgan");
	c1.attack("FL4k");
	h3.highFivesGuys();
	std::cout << "\033[0;36m-<=====DESTRUCTORS=====>-\033[m\n";
	return 0;
}