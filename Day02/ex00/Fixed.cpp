#include "Fixed.hpp"

Fixed::Fixed(void) : fixed_p_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called\n";
	fixed_p_value = obj.getRawBits();
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_p_value);
}

void 	Fixed::setRawBits(const int raw)
{
	this->fixed_p_value = raw;
}

Fixed & Fixed::operator=(const Fixed & right)
{
	std::cout << "Assignation operator called\n";
	if (this == &right)
		return (*this);
	fixed_p_value = right.getRawBits();
	return (*this);
}
