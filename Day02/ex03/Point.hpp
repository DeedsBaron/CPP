#pragma once
#include "Fixed.hpp"

class Point{
private:
	Fixed const x;
	Fixed const y;
public:
	Point(void);
	Point(const Point& ins);
	Point(const float x, const float y);
	~Point(void);

	const Fixed& get_x(void) const;
	const Fixed& get_y(void) const;

	Point&	operator=(const Point& ins);
};

std::ostream& operator<<(std::ostream& os, const Point& obj);
