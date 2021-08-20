#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void 		print_ideas(Cat const & c1)
{
	int i = 0;
	while (!c1.getBrain()->getIdeas()[i].empty())
	{
		std::cout << c1.getBrain()->getIdeas()[i] << std::endl;
		i++;
	}
}


int main(void)
{
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	Animal *animals[6];
	for (int i = 0; i < 3; i++)
		animals[i] = new Dog();
	for (int i = 3; i < 6; i++)
		animals[i] = new Cat();
	std::cout << "\033[0;36m-<=====ANIMALARRAYTEST=====>-\033[m\n";
	std::cout << "(Animal[2]) Dog.brain->idea[0]:\t" << ((Dog*)(animals[2]))->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "(Animal[3]) Cat.brain->idea[0]:\t" << ((Cat*)(animals[3]))->getBrain()->getIdeas()[0] << std::endl;
	std::cout << "\033[0;36m-<=====DEEPCOPYTEST=====>-\033[m\n";
	Cat c1 = Cat();
	std::cout << "\033[0;36m\nBefore deep copy c1 ideas:\t\033[m\n";
	print_ideas(c1);
	Cat c2(c1);
	std::cout << "\033[0;36m\nAfter deep copy c2 ideas and adding new ideas:\t\033[m\n";
	c2.set_new_idea("Im cattttt");
	c2.set_new_idea("Meooooooooooooooooow");
	print_ideas(c2);
	std::cout << "\033[0;36m\nAfter deep copy c1 ideas:\t\033[m\n";
	print_ideas(c1);
	std::cout << "\033[0;36m-<=====DESTRUCTORS=====>-\033[m\n";
	for (int i = 0; i < 6; i++)
		delete animals[i];
	return (0);
}