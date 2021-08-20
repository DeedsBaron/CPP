#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat(void);
	WrongCat(const WrongCat& ins);
	~WrongCat(void);

	void 	makeSound(void) const;
};
