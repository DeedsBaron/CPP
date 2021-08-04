#pragma once

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

class Zombie{
private:
	std::string my_name;
public:
	void announce(void) const;
	Zombie(std::string name);
	std::string get_my_name(void);
	~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
