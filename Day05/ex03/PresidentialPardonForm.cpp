#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
		Form("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ins) :
		Form(ins) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& right)
{
	if (this == &right)
		return (*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

void PresidentialPardonForm::action(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
}