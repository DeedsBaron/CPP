#include "Fixed.hpp"
#include "Point.hpp"
int main(void) {

	Point p1(10.56f, 20.23f);
	std::cout << p1;
	Point p2(0, 0);
	p1 = p2;
	std::cout << p1;
	return 0;
}