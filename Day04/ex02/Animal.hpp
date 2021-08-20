#pragma once

#include <iostream>
#include <string>

class Animal{
protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal& ins);
	Animal(const std::string name);
	Animal& operator=(const Animal& right);
	virtual ~Animal(void);

	std::string		getType(void) const;
	virtual void 	makeSound(void) const = 0;
};