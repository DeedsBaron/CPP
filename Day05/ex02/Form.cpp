#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Colors.hpp"

Form::Form(void) : _name(), _target(), _signGrade(150), _execGrade(150), _signed(0) {}

Form::Form(const std::string name, const std::string target, int signGrade, int execGrade) :
		_name(name), _target(target), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& ins) :
		_name(ins.getName()), _target(ins.getTarget()), _signGrade(ins.getSignGrade()), _execGrade(ins.getExecGrade()), _signed(ins.getSigned()) {}

Form& Form::operator=(const Form& right)
{
	if (this == &right)
		return (*this);
	_signed = right.getSigned();
	return (*this);
}

Form::~Form(void) {}

std::string		Form::getName(void) const
{
	return (_name);
}

int		Form::getSignGrade(void) const
{
	return (_signGrade);
}

int		Form::getExecGrade(void) const
{
	return (_execGrade);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

void Form::beSigned(const Bureaucrat& ins)
{
	if (ins.getGrade() <= _signGrade)
	{
		std::cout << "\033[0;36m" << ins.getName() << "\033[0;32m signs \033[0;35m" << _name << std::endl;
		_signed = true;
	}
	else
		throw Form::GradeTooLowException();
}

void	Form::setSign(void)
{
	_signed = 1;
}

std::string Form::getTarget(void) const
{
	return (_target);
}

void Form::execute(const Bureaucrat& executor) const
{
	if (_signed == 1)
	{
		if (executor.getGrade() <= _execGrade)
			this->action();
		else
			throw Form::GradeTooLowException();
	}
	else
		std::cout << RED <<  "Form is not signed!\n" << RES;
}


std::ostream& operator<<(std::ostream& os, Form const& ins)
{
	os << "\033[0;36m-<======FORM_STATE======>\033[m\n";
	os << CYAN << std::setw(20) << std::left << "Name:" << RES << std::right << ins.getName() << std::endl;
	os << PURPLE << std::setw(20) << std::left << "Grade to sign:" << RES << std::right << ins.getSignGrade() << std::endl;
	os << PURPLE << std::setw(20) << std::left << "Grade to execute:" << RES << std::right << ins.getExecGrade() << std::endl;
	os << CYAN << std::setw(20) << std::left << "Target:" << RES << std::right << ins.getTarget() << std::endl;
	if (ins.getSigned() == 0)
	{
		os << RED << std::setw(20) << std::left << "Signed:" << RES;
		os << RED << std::right << ins.getSigned() << RES << std::endl;
	}
	else
	{
		os << GREEN << std::setw(20) << std::left << "Signed:" << RES;
		os << GREEN << std::right << ins.getSigned() << RES << std::endl;
	}
	os << "\033[0;36m-<======================>\033[m\n";
	return os;
}
