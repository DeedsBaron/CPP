#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "\033[0;35mDefault Dog constructor called\n\033[m";
}

Dog::Dog(const Dog& ins)
{
	*this = ins;
	std::cout << "\033[0;35mCopy Dog constructor called\n\033[m";
}

Dog::~Dog()
{
	std::cout << "\033[0;31mDefault Dog destructor called\n\033[m";
}

void 	Dog::makeSound(void) const
{
	std::cout << "Bark Bark\n";
}

