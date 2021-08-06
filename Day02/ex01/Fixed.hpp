#pragma once
#include <iostream>
#include <math.h>
#include <ostream>

class Fixed{
private:
	int 				fixed_p_value;
	static const int	fract_bits = 8;
public:
	Fixed(const float n);
	Fixed(const int a);
	Fixed(void);
	Fixed(const Fixed & obj);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed& operator=(const Fixed& right);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
