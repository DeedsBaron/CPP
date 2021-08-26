#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name(), _signGrade(150), _execGrade(150), _signed(0) {}

Form::Form(std::string const name, int signGrade, int execGrade) :
		_name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(0)
{
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
	else if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& ins) :
		_name(ins.getName()), _signGrade(ins.getSignGrade()), _execGrade(ins.getExecGrade()), _signed(ins.getSigned()) {}

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


std::ostream& operator<<(std::ostream& os, Form const& ins)
{
	os << "\033[0;36m-<======FORM_STATE======>\033[m\n";
	os << "\033[0;36m" << std::setw(20) << std::left << "Name:" << "\033[m" << std::right << ins.getName() << std::endl;
	os << "\033[0;35m" << std::setw(20) << std::left << "Grade to sign:" << "\033[m" << std::right << ins.getSignGrade() << std::endl;
	os << "\033[0;35m" << std::setw(20) << std::left << "Grade to execute:" << "\033[m" << std::right << ins.getExecGrade() << std::endl;
	if (ins.getSigned() == 0)
	{
		os << "\033[0;31m" << std::setw(20) << std::left << "Signed:" << "\033[m";
		os << "\033[0;31m" << std::right << ins.getSigned() << "\033[m" << std::endl;
	}
	else
	{
		os << "\033[0;32m" << std::setw(20) << std::left << "Signed:" << "\033[m";
		os << "\033[0;32m" << std::right << ins.getSigned() << "\033[m" << std::endl;
	}
	os << "\033[0;36m-<======================>\033[m\n";
	return os;
}
