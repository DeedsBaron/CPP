#pragma once

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& ins);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& right);
	~ShrubberyCreationForm(void);
	void 	action(void) const;
};
