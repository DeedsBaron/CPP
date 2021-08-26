#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

void 	try_case1(void)
{
		Form* s1 = new ShrubberyCreationForm("home");
		Form* r1 = new RobotomyRequestForm("pool");
		Form* p1 = new PresidentialPardonForm("excuse");
		std::cout << *s1 << *r1 << *p1;
		delete s1;
		delete r1;
		delete p1;
}
void 	try_case2(void)
{
	Form* s1 = new ShrubberyCreationForm("home");
	try
	{
		Bureaucrat b1("Bob", 4);
		s1->beSigned(b1);
		std::cout << *s1;
		s1->execute(b1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
	delete s1;
}
void 	try_case3(void)
{
	Form* r1 = new RobotomyRequestForm("home");
	try
	{
		Bureaucrat b1("Bob", 4);
		r1->beSigned(b1);
		std::cout << *r1;
		r1->execute(b1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
	delete r1;
}

void 	try_case4(void)
{
	Form* p1 = new PresidentialPardonForm("home");
	try
	{
		Bureaucrat b1("Bob", 4);
		b1.signForm(*p1);
		std::cout << *p1;
		b1.executeForm(*p1);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
	delete p1;
}

void 	try_case5(void)
{
	Form* p1 = new PresidentialPardonForm("home");
	try
	{

		Bureaucrat b1("Bob", 4);
		Bureaucrat b2("Frank", 150);
		b1.signForm(*p1);
		std::cout << *p1;
		b2.executeForm(*p1);
		p1->execute(b2);
	}
	catch (std::exception& b)
	{
		std::cout << b.what();
	}
	delete p1;
}


int main(void)
{
	{
		std::cout << YELLOW << "-<======CASE_1======>\n" << RES;
		try_case1();
	}
	{
		std::cout << YELLOW << "-<======CASE_2======>\n" << RES;
		try_case2();
	}
	{
		std::cout << YELLOW << "-<======CASE_3======>\n" << RES;
		try_case3();
	}
	{
		std::cout << YELLOW << "-<======CASE_4======>\n" << RES;
		try_case4();
	}
	{
		std::cout << YELLOW << "-<======CASE_5======>\n" << RES;
		try_case5();
	}
	return (0);
}