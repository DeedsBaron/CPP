#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat b1("Bob", 149);
			std::cout << b1;
			std::cout << "Making decrement\n";
			b1.decrementGrade();
			std::cout << b1;
			std::cout << "Making decrement\n";
			b1.decrementGrade();
			std::cout << b1;
		}
		catch (std::exception& b)
		{
			std::cout << b.what();
		}
	}
	{
		try
		{
			std::cout << "Trying to make obj \033[0;36mLucy\033[m with grade \033[0;35m0\033[m\n";
			Bureaucrat l1("Lucy", 0);
		}
		catch (std::exception& b)
		{
			std::cout << b.what();
		}
	}
	return (0);
}