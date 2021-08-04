#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

class Zombie{
private:
	std::string my_name;
public:
	void announce(void) const;
	Zombie(void);
	Zombie(std::string name);
	void set_name(std::string name);
	~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
