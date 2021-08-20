#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain* brain;
public:
	Dog(void);
	Dog(const Dog& ins);
	Dog&	operator=(Dog const & right);
	virtual ~Dog(void);

	Brain*  getBrain(void) const;
	void 	set_new_idea(const std::string idea);
	void 	makeSound(void) const;
};
