#pragma once

#include <iostream>
#include <ostream>

class Form;

class Bureaucrat {
private:
	const std::string	_name;
	int 				_grade;
public:
	class GradeTooHighException : public std::exception{
	public:
		const char*	what() const throw()
		{
			return ("\033[0;31mToo high grade\n\033[m");
		}
	};

	class GradeTooLowException : public std::exception{
	public:
		const char*	what() const throw()
		{
			return ("\033[0;31mToo low grade\n\033[m");
		}
	};

	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& ins);
	Bureaucrat& operator=(const Bureaucrat& right);
	~Bureaucrat(void);

	int						getGrade(void) const;
	const std::string		getName(void) const;
	void 					incrementGrade(void);
	void 					decrementGrade(void);
	void 					signForm(Form& ins);
	void					executeForm(const Form& form);
};

std::ostream&		operator<<(std::ostream& os, const Bureaucrat& ins);