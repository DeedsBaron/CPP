#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& ins)
{
	*this = ins;
}

Intern& Intern::operator=(const Intern& right)
{
	if (this == &right)
		return (*this);
	return (*this);
}

Intern::~Intern(void) {}


std::string*	getForms(void)
{
	static std::string	forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	return (forms);
}

int		get_index(const std::string& s1)
{
	int i = 0;
	while (getForms()[i] != s1 && i < 3)
		i++;
	return (i);
}

Form*	FormArray0(const std::string& s2)
{
	return (new ShrubberyCreationForm(s2));
}

Form*	FormArray1(const std::string& s2)
{
	return (new RobotomyRequestForm(s2));
}

Form*	FormArray2(const std::string& s2)
{
	return (new PresidentialPardonForm(s2));
}

Form*	FormArray3(const std::string& s2)
{
	return (nullptr);
}

Form*	Intern::makeForm(const std::string& s1, const std::string& s2)
{
	Form* (* arr[4])(const std::string& s2) = {&FormArray0, &FormArray1, &FormArray2, &FormArray3};
		return (arr[get_index(s1)](s2));
}
