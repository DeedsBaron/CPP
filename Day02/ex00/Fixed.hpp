#pragma once
#include <iostream>

class Fixed{
private:
	int					fixed_p_value;
	static const int	fract_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed & obj);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed& operator=(const Fixed& right);
};
