#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {}

Base*		Base::generate(void)
{
	srand(time(NULL));
	int randNum = (rand() % 3) + 1;
	switch (randNum)
	{
		case 1:
			return (new A());
		case 2:
			return (new B());
		case 3:
			return (new C());
	}
	return (nullptr);
}

void		identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << CYAN << "A\n" << RES;
	if (dynamic_cast<B*>(p))
		std::cout << PURPLE << "B\n" << RES;
	if (dynamic_cast<C*>(p))
		std::cout << YELLOW << "C\n" << RES;
}


void identify(Base& p)
{
	try
	{
		A& refA = dynamic_cast<A&>(p);
		std::cout << CYAN << "A\n" << RES;
		refA = dynamic_cast<A&>(p);;
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}
	try
	{
		B& refB = dynamic_cast<B&>(p);
		std::cout << PURPLE << "B\n" << RES;
		refB = dynamic_cast<B&>(p);;
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}
	try
	{
		C& refC = dynamic_cast<C&>(p);
		std::cout << YELLOW << "C\n" << RES;
		refC = dynamic_cast<C&>(p);;
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}
}
