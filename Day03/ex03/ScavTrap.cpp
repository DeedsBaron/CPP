#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "\033[0;35mDefault ScavTrap constructor called\n\033[m";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "\033[0;35mName ScavTrap constructor called\n\033[m";
}

ScavTrap::ScavTrap(const ScavTrap& ins)
{
	*this = ins;
	std::cout << "\033[0;35mCopy ScavTrap constructor called\n\033[m";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\033[0;31mDefault ScavTrap destructor called\n\033[m";
}

void			ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap \033[0;35m" << this->Name << "\033[m attacks \033[0;34m" << target << "\033[m causing ";
	std::cout << "\033[0;31m" << this->Attack_damage << "\033[m point of damage!\n\n";
}

void 			ScavTrap::display_stats(void)
{
	std::cout << "\n\033[0;36m-<=====STATS=====>-\033[m\n";
	std::cout << "Name:\t\033[0;35m" << Name << std::endl;
	std::cout << "\033[mHitpoints:\t" << Hitpoints << std::endl;
	std::cout << "Energy points:\t" << Energy_points << std::endl;
	std::cout << "Attack damage:\t" << Attack_damage << std::endl;
	std::cout << "Class:\t ScavTrap\n";
	std::cout << "\033[0;36m-------------------\033[m\n\n";
}

void 			ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap \033[0;35m" << this->Name << "\033[m have enterred in Gate keeper mode \033[0;34m\n";
}

unsigned int	ScavTrap::get_ep(void)
{
	return (this->Energy_points);
}