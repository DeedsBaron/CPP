#include "Bureaucrat.hpp"
#include "Form.hpp"

void 	try_case1(void)
{
	try
	{
		Form f1("28C", 150, 150);
		std::cout << f1;
		Form f2("286", 0, 1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
}

void 	try_case2(void)
{
	try
	{
		Form f1("28C", 56, 151);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
}

void 	try_case3(void)
{
	try
	{
		Bureaucrat b1("Bob", 65);
		Form f1("666B", 72, 72);
		Form f2("28C", 56, 150);
		f1.beSigned(b1);
		f2.beSigned(b1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
}

void 	try_case4(void)
{
	try
	{
		Bureaucrat b1("Bob", 65);
		Form f1("666B", 72, 72);
		Form f2("28C", 56, 150);
		b1.signForm(f1);
		std::cout << f1;
		b1.signForm(f2);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
}


int main(void)
{
	{
		std::cout << "\033[0;33m-<======CASE_1======>\033[m\n";
		try_case1();
	}
	{
		std::cout << "\033[0;33m-<======CASE_2======>\033[m\n";
		try_case2();
	}
	{
		std::cout << "\033[0;33m-<======CASE_3======>\033[m\n";
		try_case3();
	}
	{
		std::cout << "\033[0;33m-<======CASE_4======>\033[m\n";
		try_case4();
	}

	return (0);
}