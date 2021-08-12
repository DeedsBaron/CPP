#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"


int main(void)
{
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	ScavTrap s1("Sirena");
	s1.display_stats();
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	FragTrap f1("FL4k");
	f1.display_stats();
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	DiamondTrap d1("NE_BRO");
	d1.display_stats();
	std::cout << "\033[0;36m-<=====Attack=====>-\033[m\n";
	d1.attack("FL4k");
	std::cout << "\033[0;36m-<=====Guard=====>-\033[m\n";
	d1.guardGate();
	std::cout << "\033[0;36m-<=====High5=====>-\033[m\n";
	d1.highFivesGuys();
	std::cout << "\033[0;36m-<=====WhoAmI=====>-\033[m\n";
	d1.whoAmI();
	std::cout << "\033[0;36m-<=====DESTRUCTORS=====>-\033[m\n";
	return 0;
}