#pragma once
#include <iostream>

class Weapon{
private:
	std::string type;
public:
	std::string const & getType(void);
	void setType(std::string type);
	Weapon(std::string type);
	~Weapon(void);
};