#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name(), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& ins)
{
	*this = ins;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& right)
{
	if (this == &right)
		return (*this);
	_grade = right.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
}

void Bureaucrat::signForm(Form& ins)
{
	if (_grade <= ins.getSignGrade())
	{
		std::cout << "\033[0;36m" << _name << "\033[0;32m signs \033[0;35m" << ins.getName() << std::endl;
		ins.setSign();
	}
	else
	{
		std::cout << "\033[0;36m" << _name << "\033[0;31m cannot sign \033[0;35m" << ins.getName();
		std::cout << "\033[m because his grade value is \033[0;31m" << _grade << "\033[m and form grade value is \033[0;32m" << ins.getSignGrade() << "\033[m\n";
	}
}



std::ostream&	operator<<(std::ostream& os, Bureaucrat const& ins)
{
	os << "\033[0;36m" << ins.getName() << "\033[m, burecrat grade \033[0;35m" << ins.getGrade() << "\033[m\n";
	return (os);
}
