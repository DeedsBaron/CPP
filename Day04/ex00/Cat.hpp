#pragma once

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat(void);
	Cat(const Cat& ins);
	~Cat(void);

	void 	makeSound(void) const;
};
