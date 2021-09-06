#include "Array.hpp"

int main(void)
{
	std::cout << YELLOW << "-<======TEST_DEFAULT_CON:CASE_1(int)======>\n" << RES;
	Array<int> a1;
	std::cout << a1 << std::endl;
	std::cout << YELLOW << "-<======TEST_DEFAULT_CON:CASE_2(char)======>\n" << RES;
	Array<char> c1;
	std::cout << a1 << std::endl;
	std::cout << YELLOW << "-<======TEST_UI_CON:CASE_1(int)======>\n" << RES;
	Array<int> a2(10);
	std::cout << "Len = " << a2.getLen() << std::endl;
	std::cout << a2 << std::endl;
	std::cout << YELLOW << "-<======TEST_UI_CON:CASE_1(char)======>\n" << RES;
	Array<char> c2(10);
	std::cout << "Len = " << c2.getLen() << std::endl;
	std::cout << c2 << std::endl;
	std::cout << YELLOW << "-<======TEST_COPY_CON:CASE_1(int)======>\n" << RES;
	Array<int> a3(a2);
	std::cout << CYAN << "a2<int>: " << RES << a2 << std::endl;
	std::cout << CYAN << "a3<int>: " << RES << a3 << std::endl;
	std::cout << PURPLE << "After changing value:\n" << RES;
	a3.setArray(666);
	std::cout << CYAN << "a2<int>: " << RES << a2 << std::endl;
	std::cout << CYAN << "a3<int>: " << RES << a3 << std::endl;
	std::cout << YELLOW << "-<======TEST_COPY_CON:CASE_1(char)======>\n" << RES;
	Array<char> c3(c2);
	std::cout << CYAN << "c2<char>: " << RES << c2 << std::endl;
	std::cout << CYAN << "c3<char>: " << RES << c3 << std::endl;
	std::cout << PURPLE << "After changing value:\n" << RES;
	c3.setArray('Z');
	std::cout << CYAN << "c2<char>: " << RES << c2 << std::endl;
	std::cout << CYAN << "c3<char>: " << RES << c3 << std::endl;
	std::cout << YELLOW << "-<======TEST_OPERATOR[]:CASE_1(int)======>\n" << RES;
	try
	{
		std::cout << "a3[0] = " << a3[0] << std::endl;
		std::cout << a3[10] << std::endl ;
	}
	catch (std::exception& ex)
	{
		std::cout << RED << ex.what() << ": Out of range" << std::endl;
	}
	std::cout << YELLOW << "-<======TEST_OPERATOR[]:CASE_1(char)======>\n" << RES;
	try
	{
		std::cout << "c3[0] = " << c3[0] << std::endl;
		std::cout << c3[10] << std::endl ;
	}
	catch (std::exception& ex)
	{
		std::cout << RED << ex.what() << ": Out of range" << RES << std::endl;
	}
}