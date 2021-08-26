#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm& ins);
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& right);
	~RobotomyRequestForm(void);

	void 	action(void) const;

};
