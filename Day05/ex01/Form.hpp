#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	const int 			_signGrade;
	const int 			_execGrade;
	bool 				_signed;
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

	Form(void);
	Form(const std::string name, int signGrade, int execGrade);
	Form(const Form& ins);
	Form& operator=(const Form& right);
	~Form(void);

	std::string			getName(void) const;
	int 				getSignGrade(void) const;
	int 				getExecGrade(void) const;
	bool 				getSigned(void) const;
	void 				setSign(void);
	void				beSigned(const Bureaucrat& ins);

};

std::ostream&		operator<<(std::ostream& os, const Form& ins);