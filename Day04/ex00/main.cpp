#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "\033[0;36m-<=====CONSTRUCTORS=====>-\033[m\n";
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "\033[0;36m-<=====TESTS=====>-\033[m\n";
	std::cout << "Type:\t" << j->getType() << " " << std::endl;
	std::cout << "Type:\t" << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\033[0;36m-<=====TESTS/Wrong=====>-\033[m\n";
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << "Type:\t" << k->getType() << " " << std::endl;
	k->makeSound();
	meta1->makeSound();
	std::cout << "\033[0;36m-<=====DESTRUCTORS=====>-\033[m\n";
	delete meta;
	delete j;
	delete i;
	delete k;
	delete meta1;
	return (0);
}