#pragma once

#include <iostream>
#include <ostream>

class Bureaucrat {
private:
	const std::string	_name;
	int 				_grade;
public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& ins);
	Bureaucrat& operator=(const Bureaucrat& right);
	~Bureaucrat(void);

	int						getGrade(void) const;
	const std::string		getName(void) const;
	void 					incrementGrade(void);
	void 					decrementGrade(void);
};

std::ostream&		operator<<(std::ostream& os, const Bureaucrat& ins);