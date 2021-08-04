#include <iostream>
#include <iomanip>

int main(void)
{
	std::string brainz("HI THIS IS BRAIN");
	std::string *stringPTR = &brainz;
	std::string &stringREF = brainz;
	std::cout << std::setw(40) << std::left << "Adress of the string:" << std::right << &brainz << std::endl;
	std::cout << std::setw(40) << std::left << "Adress of the string using pointer:" << std::right << stringPTR << std::endl;
	std::cout << std::setw(40) << std::left << "Adress of the string using pointer:" << std::right << &stringREF << std::endl;
	std::cout << std::setw(40) << std::left << "Display using pointer:" << std::right << *stringPTR << std::endl;
	std::cout << std::setw(40) << std::left << "Display using ref:" << std::right << stringREF << std::endl;
	return (0);
}