#include "Animal.hpp"

Animal::Animal(void) : type()
{
	std::cout << "\033[0;32mDefault Animal constructor called\n\033[m";}

Animal::Animal(const std::string name) : type(name)
{
	std::cout << "\033[0;32mName Animal constructor called\n\033[m";
}

Animal::Animal(const Animal& ins)
{
	*this = ins;
	std::cout << "\033[0;32mCopy Animal constructor called\n\033[m";
}

Animal::~Animal(void)
{
	std::cout << "\033[0;31mDefault Animal destructor called\n\033[m";
}

Animal& Animal::operator=(const Animal& right)
{
	if (this == &right)
		return (*this);
	type = right.type;
	return (*this);
}

std::string 	Animal::getType(void) const
{
	return (type);
}
void	Animal::makeSound() const {}