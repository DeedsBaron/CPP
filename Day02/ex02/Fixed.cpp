#include "Fixed.hpp"

Fixed::Fixed(const int a) : fixed_p_value(a << fract_bits) {}

Fixed::Fixed(const float n)
{
	fixed_p_value = (int)(roundf(n * (1 << fract_bits)));
}

Fixed::Fixed(void) : fixed_p_value(0){}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed::~Fixed(void) {}

int				Fixed::getRawBits() const
{
	return (fixed_p_value);
}

void			Fixed::setRawBits(const int raw)
{
	this->fixed_p_value = raw;
}

float			Fixed::toFloat(void) const
{
	return (((float)fixed_p_value / (float)(1 << fract_bits)));
}

int 			Fixed::toInt(void) const
{
	return (fixed_p_value >> fract_bits);
}

Fixed&			Fixed::operator=(const Fixed& right)
{
	if (this == &right)
		return (*this);
	fixed_p_value = right.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

bool			Fixed::operator>(const Fixed& right) const
{
	return (this->getRawBits() > right.getRawBits());
}

bool			Fixed::operator<(const Fixed& right) const
{
	return (this->getRawBits() < right.getRawBits());
}

bool			Fixed::operator>=(const Fixed& right) const
{
	return (this->getRawBits() >= right.getRawBits());
}

bool			Fixed::operator<=(const Fixed& right) const
{
	return (this->getRawBits() <= right.getRawBits());
}

bool			Fixed::operator==(const Fixed &right) const
{
	return (this->getRawBits() == right.getRawBits());
}

bool			Fixed::operator!=(const Fixed &right) const
{
	return (this->getRawBits() != right.getRawBits());
}

Fixed			Fixed::operator+(const Fixed& right) const
{
	Fixed instance;
	instance.setRawBits(this->getRawBits() + right.getRawBits());
	return instance;
}

Fixed			Fixed::operator-(const Fixed& right) const
{
	Fixed instance;
	instance.setRawBits(this->getRawBits() - right.getRawBits());
	return instance;
}

Fixed			Fixed::operator*(const Fixed& right) const
{
	Fixed instance;
	instance.setRawBits((this->getRawBits() * right.getRawBits()) >> fract_bits);
	return (instance);
}

Fixed			Fixed::operator/(const Fixed& right) const
{
	Fixed instance;
	instance.setRawBits(((this->getRawBits() << fract_bits) / right.getRawBits()));
	return (instance);
}

Fixed&			Fixed::operator++()
{
	++this->fixed_p_value;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed&			Fixed::operator--()
{
	--this->fixed_p_value;
	return *this;
}

Fixed			Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed&			Fixed::min(Fixed& fp1, Fixed& fp2)
{
	return (fp1 < fp2 ? fp1 : fp2);
}

const Fixed&	Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
	return (fp1 < fp2 ? fp1 : fp2);
}


Fixed&			Fixed::max(Fixed& fp1, Fixed& fp2)
{
	return (fp1 > fp2 ? fp1 : fp2);
}

const Fixed&	Fixed::max(const Fixed& fp1, const Fixed& fp2)
{
	return (fp1 > fp2 ? fp1 : fp2);
}