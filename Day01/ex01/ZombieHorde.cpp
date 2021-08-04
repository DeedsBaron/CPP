#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* Horde = new Zombie[N];
	int i = 0;
	while (i < N)
	{
		Horde[i].set_name(name);
		Horde[i].announce();
		std::cout << std::endl;
		i++;
	}
	std::cout << "\n-=======================================-\n" << std::endl;
	delete [] Horde;
	return (Horde);
}