#include "Fixed.hpp"
#include "Point.hpp"
int main(void) {

	Point p1;
	std::cout << "p1:\t" << p1 << std::endl;
	Point p2(10.56f, 20.23f);
	std::cout << "p2:\t" << p2 << std::endl;
	p1 = p2;
	std::cout << "p1 = p2\np1:\t" << p1 << std::endl;
	Point a(4.6f, -1.02f);
	Point b(6.3f, 4.38f);
	Point c(12.14f, 2.58f);
	Point point_inside(7.78f, 2.38f);
	Point point_on_side(10.85f, 1.96f);
	Point point_eq_vert(a);
	if (bsp(a,b,c,point_inside))
		std::cout << "Point is inside triangle\n";
	else
		std::cout << "Point is NOT inside triangle\n";
	if (bsp(a,b,c,point_on_side))
		std::cout << "Point is inside triangle\n";
	else
		std::cout << "Point is NOT inside triangle\n";
	if (bsp(a,b,c,point_eq_vert))
		std::cout << "Point is inside triangle\n";
	else
		std::cout << "Point is NOT inside triangle\n";
	return 0;
}