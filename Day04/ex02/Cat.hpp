#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	Brain* brain;
public:
	Cat(void);
	Cat(const Cat& ins);
	Cat&	operator=(Cat const & right);
	virtual ~Cat(void);

	void 	makeSound(void) const;
	Brain*	getBrain(void) const;
	void 	set_new_idea(std::string const idea);
};
