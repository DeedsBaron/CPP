#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "\033[0;35mDefault Cat constructor called\n\033[m";
}

Cat::Cat(const Cat& ins)
{
	*this = ins;
	std::cout << "\033[0;35mCopy Cat constructor called\n\033[m";
}

Cat::~Cat()
{
	std::cout << "\033[0;31mDefault Cat destructor called\n\033[m";
}

void 	Cat::makeSound(void) const
{
	std::cout << "Meoooooow\n";
}

