#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b1("Bob", 149);
		std::cout << b1;
		b1.decrementGrade();
		b1.decrementGrade();
		Bureaucrat b2("Lucy", 5);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	return (0);
}