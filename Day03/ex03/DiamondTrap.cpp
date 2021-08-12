#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\033[0;35mDefault DiamondTrap constructor called\n\033[m";
}

DiamondTrap::DiamondTrap(const DiamondTrap& ins)
{
	*this = ins;
	std::cout << "\033[0;35mCopy DiamondTrap constructor called\n\033[m";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	ScavTrap donor(name);
	this->D_Name = name;
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energy_points = donor.get_ep();
	this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\033[0;31mDefault DiamondTrap destructor called\n\033[m";
}

void 			DiamondTrap::display_stats(void)
{
	std::cout << "\n\033[0;36m-<=====STATS=====>-\033[m\n";
	std::cout << "Name:\t\033[0;35m" << D_Name << std::endl;
	std::cout << "\033[mHitpoints:\t" << Hitpoints << std::endl;
	std::cout << "Energy points:\t" << Energy_points << std::endl;
	std::cout << "Attack damage:\t" << Attack_damage << std::endl;
	std::cout << "Class:\t DiamondTrap\n";
	std::cout << "\033[0;36m-------------------\033[m\n\n";
}

void 			DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name:\t" << this->D_Name << std::endl;
	std::cout << "ClapTrap name:\t\t" << this->ClapTrap::Name<< std::endl;
}

void			DiamondTrap::attack(const std::string& target)
{
	std::cout << "DiamondTrap \033[0;35m" << this->D_Name << "\033[m attacks \033[0;34m" << target << "\033[m causing ";
	std::cout << "\033[0;31m" << this->Attack_damage << "\033[m point of damage!\n";
}

void			DiamondTrap::guardGate(void)
{
	std::cout << "DiamondTrap \033[0;35m" << this->D_Name << "\033[m have enterred in Gate keeper mode \033[0;34m\n";
}

void 			DiamondTrap::highFivesGuys(void)
{
	std::cout << "FragTrap \033[0;35m" << this->D_Name << "\033[m highed fived everyone! \033[0;34m\n";
}