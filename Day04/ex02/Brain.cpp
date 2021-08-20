#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "\033[0;36mDefault Brain constructor called\n\033[m";
}

Brain::Brain(const std::string name)
{
	ideas[0] = name;
	std::cout << "\033[0;36mName Brain constructor called\n\033[m";
}

Brain::Brain(const Brain& ins)
{
	*this = ins;
	std::cout << "\033[0;36mCopy Brain constructor called\n\033[m";
}

Brain::~Brain(void)
{
	std::cout << "\033[0;31mDefault Brain destructor called\n\033[m";
}

Brain& Brain::operator=(const Brain& right)
{
	if (this == &right)
		return (*this);
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = right.ideas[i];
		i++;
	}
	return (*this);
}

std::string*		Brain::getIdeas(void)
{
	return (ideas);
}

void 				Brain::set_idea(const std::string idea)
{
	static int i = 1;
	if (i == 100)
		return;
	ideas[i] = idea;
	i++;
}