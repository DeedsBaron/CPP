#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type()
{
	std::cout << "\033[0;32mDefault WrongAnimal constructor called\n\033[m";
}

WrongAnimal::WrongAnimal(const std::string name) : type(name)
{
	std::cout << "\033[0;32mName WrongAnimal constructor called\n\033[m";
}

WrongAnimal::WrongAnimal(const WrongAnimal& ins)
{
	*this = ins;
	std::cout << "\033[0;32mCopy WrongAnimal constructor called\n\033[m";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[0;31mDefault WrongAnimal destructor called\n\033[m";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& right)
{
	if (this == &right)
	return (*this);
	type = right.type;
	return (*this);
}

std::string 	WrongAnimal::getType(void) const
{
	return (type);
}
void	WrongAnimal::makeSound() const
{
	std::cout << "*RANDOM ANIMAL SOUND*\n";
}