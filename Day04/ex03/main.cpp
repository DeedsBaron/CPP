#include "AMateria.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	Character dylan(*(Character *)me);
	Character lucy("lucy");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	lucy = *(Character *)me;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	std::cout << std::endl;
	me->use(1, *bob);
	std::cout << std::endl;
	dylan.use(0, *me);
	lucy.use(1, dylan);
	lucy.use(3, *me);
	delete bob;
	delete me;
	delete src;
	return 0;
}