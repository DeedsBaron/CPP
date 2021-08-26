#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm& ins);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& right);
	~PresidentialPardonForm(void);

	void 	action(void) const;
};
