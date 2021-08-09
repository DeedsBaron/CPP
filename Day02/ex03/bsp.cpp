#include "Point.hpp"

bool		bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return (false);
	float val1 = ((a.get_x() - point.get_x()) * (b.get_y() - a.get_y()) - (b.get_x() - a.get_x()) * (a.get_y() - point.get_y())).toFloat();
	float val2 = ((b.get_x() - point.get_x()) * (c.get_y() - b.get_y()) - (c.get_x() - b.get_x()) * (b.get_y() - point.get_y())).toFloat();
	float val3 = ((c.get_x() - point.get_x()) * (a.get_y() - c.get_y()) - (a.get_x() - c.get_x()) * (c.get_y() - point.get_y())).toFloat();
	if (val1 == 0 || val2 == 0 || val3 == 0)
			return (false);
	if ((val1 > 0 && val2 > 0 && val3 > 0) || (val1 < 0 && val2 < 0 && val3 < 0))
		return (true);
	else
		return (false);
}