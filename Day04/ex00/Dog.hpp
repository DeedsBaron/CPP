#pragma once

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog(void);
	Dog(const Dog& ins);
	~Dog(void);

	void 	makeSound(void) const;
};
