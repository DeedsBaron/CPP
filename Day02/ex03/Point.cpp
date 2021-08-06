#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const Point& ins) : x(ins.x), y(ins.y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::~Point(void) {}

Point&			Point::operator=(const Point& right)
{
	if (this == &right)
		return (*this);
	else
		return (*this);
}

const Fixed&			Point::get_x(void) const {return (this->x);}
const Fixed&			Point::get_y(void) const {return (this->y);}

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
	os << "x = " << obj.get_x() << "\t y = " << obj.get_y();
	return (os);
}