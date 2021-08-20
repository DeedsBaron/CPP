#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "\033[0;35mDefault Dog constructor called\n\033[m";
	brain = new Brain("I'm dog. I'm keen on waffles!");
}

Dog::Dog(const Dog& ins)
{
	brain = 0;
	*this = ins;
	std::cout << "\033[0;35mCopy Dog constructor called\n\033[m";
}

Dog::~Dog()
{
	delete brain;
	std::cout << "\033[0;31mDefault Dog destructor called\n\033[m";
}

void 	Dog::makeSound(void) const
{
	std::cout << "Bark Bark\n";
}

Brain*	Dog::getBrain() const
{
	return (brain);
}

void		Dog::set_new_idea(const std::string idea)
{
	brain->set_idea(idea);
}

Dog&		Dog::operator=(const Dog& right)
{
	if (this == &right)
		return (*this);
	if (brain)
		delete brain;
	this->brain = new Brain(*right.brain);
	return (*this);
}
