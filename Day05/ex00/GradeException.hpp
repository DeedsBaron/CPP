#pragma once

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
