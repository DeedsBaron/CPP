#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : Name(), Hitpoints(0), Energy_points(0), Attack_damage(0)
{
	std::cout << "\033[0;32mDefault ClapTrap constructor called\n\033[m";
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "\033[0;32mName ClapTrap constructor called\n\033[m";
}

ClapTrap::ClapTrap(const ClapTrap& ins)
{
	std::cout << "\033[0;32mCopy ClapTrap constructor called\n\033[m";
	*this = ins;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\033[0;31mDefault ClapTrap destructor called\n\033[m";
}

ClapTrap&		ClapTrap::operator=(const ClapTrap& right)
{
	if (this == &right)
		return (*this);
	this->Name = right.Name;
	this->Hitpoints = right.Hitpoints;
	this->Energy_points = right.Energy_points;
	this->Attack_damage = right.Attack_damage;
	return (*this);
}

void 			ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap \033[0;35m" << this->Name << "\033[m attacks \033[0;34m" << target << "\033[m causing ";
	std::cout << "\033[0;31m" << this->Attack_damage << "\033[m point of damage!\n\n";
}

void 			ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;
	std::cout << "ClapTrap \033[0;35m" << this->Name;
	std::cout << "\033[m takes \033[0;31m" << amount << "\033[m point of damage!\n";
}

void 			ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;
	std::cout << "ClapTrap \033[0;35m" << this->Name;
	std::cout << "\033[m healed \033[0;31m" << amount << "\033[m point of HP!\n";
}

void 			ClapTrap::display_stats(void)
{
	std::cout << "\n\033[0;36m-<=====STATS=====>-\033[m\n";
	std::cout << "Name:\t\033[0;35m" << Name << std::endl;
	std::cout << "\033[mHitpoints:\t" << Hitpoints << std::endl;
	std::cout << "Energy points:\t" << Energy_points << std::endl;
	std::cout << "Attack damage:\t" << Attack_damage << std::endl;
	std::cout << "Class:\t ClapTrap\n";
	std::cout << "\033[0;36m-------------------\033[m\n\n";
}