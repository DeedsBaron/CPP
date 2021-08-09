#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const Point& ins) : x(ins.x), y(ins.y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::~Point(void) {}

const Fixed&			Point::get_x(void) const {return (this->x);}

const Fixed&			Point::get_y(void) const {return (this->y);}

Point&					Point::operator=(const Point& right)
{
	if (this == &right)
		return (*this);
	Fixed* p_x = const_cast<Fixed*>(&x);
	Fixed* p_y = const_cast<Fixed*>(&y);
	*p_x = right.x;
	*p_y = right.y;
	return (*this);

}

bool 					Point::operator==(const Point& right) const
{
	return (this->x == right.get_x() && this->y == right.get_y() ? true : false);
}

std::ostream&			operator<<(std::ostream& os, const Point& obj)
{
	os << "x = " << obj.get_x() << "\ty = " << obj.get_y();
	return (os);
}