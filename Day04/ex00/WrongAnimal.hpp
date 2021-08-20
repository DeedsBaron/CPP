#pragma once

#include <iostream>
#include <string>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& ins);
	WrongAnimal(const std::string name);
	WrongAnimal& operator=(const WrongAnimal& right);
	~WrongAnimal(void);

	std::string		getType(void) const;
	void			makeSound(void) const;
};