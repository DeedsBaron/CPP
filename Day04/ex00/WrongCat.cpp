#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "\033[0;35mDefault WrongCat constructor called\n\033[m";
}

WrongCat::WrongCat(const WrongCat& ins)
{
	*this = ins;
	std::cout << "\033[0;35mCopy WrongCat constructor called\n\033[m";
}

WrongCat::~WrongCat()
{
	std::cout << "\033[0;31mDefault WrongCat destructor called\n\033[m";
}

void 	WrongCat::makeSound(void) const
{
	std::cout << "Meoooooow\n";
}

