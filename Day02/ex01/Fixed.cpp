#include "Fixed.hpp"

Fixed::Fixed(const int a) : fixed_p_value(a << fract_bits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float n)
{
	fixed_p_value = (int)(roundf(n * (1 << fract_bits)));
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(void) : fixed_p_value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

int		Fixed::getRawBits() const
{
	return (fixed_p_value);
}

void 	Fixed::setRawBits(const int raw)
{
	this->fixed_p_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (((float)fixed_p_value / (float)(1 << fract_bits)));
}

int 	Fixed::toInt(void) const
{
	return (fixed_p_value >> fract_bits);
}

Fixed&	Fixed::operator=(const Fixed& right)
{
	std::cout << "Assignation operator called\n";
	if (this == &right)
		return (*this);
	fixed_p_value = right.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}