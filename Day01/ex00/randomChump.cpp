#include "Zombie.hpp"

void randomChump( std::string name )
{
	static int i = 0;
	if (i == 0)
	{
		Zombie new_zombie(name);
		new_zombie.announce();
		std::cout << "\tI'm alive on stack!" << std::endl;
		i++;
	}
	else
	{
		Zombie *another_one = newZombie(name);
		another_one->announce();
		std::cout << "\tI'm alive on heap!" << std::endl;
		delete another_one;
	}
}