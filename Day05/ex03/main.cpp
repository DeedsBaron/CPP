#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << YELLOW << "-<======CASE_1======>\n" << RES;
	Intern someRandomIntern;
	Form*	rrf;
	Form*	scf;
	Form* 	ppf;
	Form*	unknown;
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "home");
	scf = someRandomIntern.makeForm("ShrubberyCreationForm", "pool");
	ppf = someRandomIntern.makeForm("PresidentialPardonForm", "beach");
	std::cout << *rrf << *scf << *ppf;
	unknown = someRandomIntern.makeForm("SAJDAJIFJAF", "mars");
	delete rrf;
	delete scf;
	delete ppf;
	return (0);
}