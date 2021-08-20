#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "\033[0;35mDefault Cat constructor called\n\033[m";
	brain = new Brain("I'm cat. I'm keen on milk!");
}

Cat::Cat(const Cat& ins)
{
	brain = 0;
	*this = ins;
	std::cout << "\033[0;35mCopy Cat constructor called\n\033[m";
}

Cat::~Cat()
{
	delete brain;
	std::cout << "\033[0;31mDefault Cat destructor called\n\033[m";
}

void 		Cat::makeSound(void) const
{
	std::cout << "Meoooooow\n";
}

Brain*		Cat::getBrain(void) const
{
	return (brain);
}

void		Cat::set_new_idea(const std::string idea)
{
	brain->set_idea(idea);
}

Cat&		Cat::operator=(const Cat& right)
{
	if (this == &right)
		return (*this);
	if (brain)
		delete brain;
	this->brain = new Brain(*right.brain);
	return (*this);
}
