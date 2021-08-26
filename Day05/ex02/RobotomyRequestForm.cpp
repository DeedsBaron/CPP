#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
		Form("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ins) :
		Form(ins) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& right)
{
	if (this == &right)
		return (*this);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

void RobotomyRequestForm::action(void) const
{
	std::srand(std::time(nullptr));
	if (std::rand() % 2 == 0)
		std::cout << "* SOME DRILLING NOISE *. " << this->getTarget() << " has been robotomized successfully 50% of the time.\n";
	else
		std::cout << "It’s a failure\n";
}