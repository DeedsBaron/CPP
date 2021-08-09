#include "Fixed.hpp"

int main(void) {
	Fixed a(10);
	Fixed const b(10);
	Fixed const c(42.42f);

	std::cout << "\033[0;35m-<===============\033[0;32mCOMPARISON OVERLOADS\033[0;35m===============>-\033[m\n";
	std::cout << "\033[0;32mTest 1: \">\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\tb > c ?\n";
	if (b > c)
		std::cout << "\tb is bigger\n";
	else
		std::cout << "\tc is bigger\n";

	std::cout << "\033[0;32mTest 2: \"<\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\tb < c ?\n";
	if (b < c)
		std::cout << "\tb is smaller\n";
	else
		std::cout << "\tc is smaller\n";

	std::cout << "\033[0;32mTest 3: \">=\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\tb >= c ?\n";
	if (b >= c)
		std::cout << "\tb is bigger or equals\n";
	else
		std::cout << "\tc is bigger or equals\n";

	std::cout << "\033[0;32mTest 4: \"<=\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\tb <= c ?\n";
	if (b <= c)
		std::cout << "\tb is smaller or equals\n";
	else
		std::cout << "\tc is smaller or equals\n";

	std::cout << "\033[0;32mTest 5: \"==\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta == b?\n";
	if (a == b)
		std::cout << "\ta equals b\n";
	else
		std::cout << "\ta not equals b\n";

	std::cout << "\033[0;32mTest 6: \"==\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta != c?\n";
	if (a != c)
		std::cout << "\ta not equals c\n";
	else
		std::cout << "\ta equals c\n";

	std::cout << "\033[0;35m-<===============\033[0;32mARITHMETIC OVERLOADS\033[0;35m===============>-\033[m\n";
	std::cout << "\033[0;32mTest 1: \"+\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta + c = " << a + c << std::endl;

	std::cout << "\033[0;32mTest 2: \"-\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta - c = " << a - c << std::endl;

	std::cout << "\033[0;32mTest 3: \"*\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta * c = " << a * c << std::endl;

	std::cout << "\033[0;32mTest 4: \"/\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta / c = " << a / c << std::endl;

	std::cout << "\033[0;35m-<===============\033[0;32mINCREMENT OVERLOADS\033[0;35m===============>-\033[m\n";
	std::cout << "\033[0;32mTest 1: \"pre ++\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\t++a = " << ++a << std::endl;

	std::cout << "\033[0;32mTest 2: \"post ++\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta++ = " << a++ << std::endl;
	std::cout << "\ta = " << a << std::endl;

	std::cout << "\033[0;32mTest 3: \"pre --\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\t--a = " << --a << std::endl;

	std::cout << "\033[0;32mTest 4: \"post --\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n\ta = " << a << ";\tb = " << b << ";" << "\tc = " << c << ";\n";
	std::cout << "\ta-- = " << a-- << std::endl;
	std::cout << "\ta = " << a << std::endl;

	std::cout << "\033[0;35m-<===============\033[0;32mCONST OVERLOADS\033[0;35m===============>-\033[m\n";
	Fixed d(1234.1234f);
	std::cout << "\033[0;32mTest 1: \"non const min\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n";
	std::cout << "\ta = " << a << ";(non const)   b = " << b << ";(const)   ";
	std::cout << "c = " << c << ";(const)   d = " << d << ";(non const)\n";
	std::cout << "\t\033[0;35mMin res (a, d)\033[m = " << Fixed::min(a, d) << std::endl;

	std::cout << "\033[0;32mTest 2: \"const min\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n";
	std::cout << "\ta = " << a << ";(non const)   b = " << b << ";(const)   ";
	std::cout << "c = " << c << ";(const)   d = " << d << ";(non const)\n";
	std::cout << "\t\033[0;35mMin res (b, c)\033[m = " << Fixed::min(b, c) << std::endl;

	std::cout << "\033[0;32mTest 3: \"non const max\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n";
	std::cout << "\ta = " << a << ";(non const)   b = " << b << ";(const)   ";
	std::cout << "c = " << c << ";(const)   d = " << d << ";(non const)\n";
	std::cout << "\t\033[0;35mMax res (a, b)\033[m = " << Fixed::max(a, b) << std::endl;

	std::cout << "\033[0;32mTest 4: \"const max\"\033[m\n";
	std::cout << "\033[0;36mInstances:\033[m\n";
	std::cout << "\ta = " << a << ";(non const)   b = " << b << ";(const)   ";
	std::cout << "c = " << c << ";(const)   d = " << d << ";(non const)\n";
	std::cout << "\t\033[0;35mMax res (b, c)\033[m = " << Fixed::max(b, c) << std::endl;
	return 0;
}