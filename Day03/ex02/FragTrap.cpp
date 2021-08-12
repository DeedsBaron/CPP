#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "\033[0;35mDefault FragTrap constructor called\n\033[m";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "\033[0;35mName FragTrap constructor called\n\033[m";
}

FragTrap::FragTrap(const FragTrap& ins)
{
	*this = ins;
	std::cout << "\033[0;35mCopy FragTrap constructor called\n\033[m";
}

FragTrap::~FragTrap(void)
{
	std::cout << "\033[0;31mDefault FragTrap destructor called\n\033[m";
}

void			FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap \033[0;35m" << this->Name << "\033[m attacks \033[0;34m" << target << "\033[m causing ";
	std::cout << "\033[0;31m" << this->Attack_damage << "\033[m point of damage!\n\n";
}

void 			FragTrap::display_stats(void)
{
	std::cout << "\n\033[0;36m-<=====STATS=====>-\033[m\n";
	std::cout << "Name:\t\033[0;35m" << Name << std::endl;
	std::cout << "\033[mHitpoints:\t" << Hitpoints << std::endl;
	std::cout << "Energy points:\t" << Energy_points << std::endl;
	std::cout << "Attack damage:\t" << Attack_damage << std::endl;
	std::cout << "Class:\t FragTrap\n";
	std::cout << "\033[0;36m-------------------\033[m\n\n";
}

void 			FragTrap::highFivesGuys()
{
	std::cout << "FragTrap \033[0;35m" << this->Name << "\033[m highed fived everyone! \033[0;34m\n";
}