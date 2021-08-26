#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"

class Intern {
private:
public:
	Intern(void);
	Intern(const Intern& ins);
	Intern& operator=(const Intern& right);
	~Intern(void);

	Form*		makeForm(const std::string& s1, const std::string& s2);
};

std::string*	getForms(void);
