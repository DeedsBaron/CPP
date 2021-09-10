#include "Span.hpp"

void 	try_case1(void)
{
	Span s1(5);
	try
	{
		s1.addNumber(5);
		s1.addNumber(3);
		s1.addNumber(17);
		s1.addNumber(9);
		s1.addNumber(11);
		s1.displayVectorContents();
		s1.addNumber(11);
	}
	catch (Span::OutOfRangeException& ex)
	{
		std::cout << RED << "ERROR\nOverflow at index: " << CYAN << ex.getIndex() << RES << std::endl;
	}
}
void 	try_case2(void)
{
	Span s1(5);
	try
	{
		s1.addNumber(5);
		s1.addNumber(3);
		s1.addNumber(17);
		s1.addNumber(9);
		s1.addNumber(11);
		s1.displayVectorContents();
	}
	catch (Span::OutOfRangeException& ex)
	{
		std::cout << RED << "ERROR\nOverflow at index: " << CYAN << ex.getIndex() << RES << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s1.longestSpan() << std::endl;
	}
	catch (Span::NoSpanException& nsp)
	{
		std::cout << RED << "ERROR\nNo span to be found\n" << RES;
	}
}

void 	try_case3(void)
{
	Span s1(5);
	try
	{
		s1.addNumber(5);
		s1.displayVectorContents();
	}
	catch (Span::OutOfRangeException& ex)
	{
		std::cout << RED << "ERROR\nOverflow at index: " << CYAN << ex.getIndex() << RES << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s1.longestSpan() << std::endl;
	}
	catch (Span::NoSpanException& nsp)
	{
		std::cout << RED << "ERROR\nNo span to be found\n" << RES;
	}
}

void 	try_case4(void)
{
	Span s1(5);
	try
	{
		int array[] = {5, 3, 17, 9, 11};
		s1.addNumber(array, array + sizeof array / sizeof array[0]);
		s1.displayVectorContents();
		s1.addNumber(array, array + sizeof array / sizeof array[0]);
	}
	catch (Span::OutOfRangeException& ex)
	{
		std::cout << RED << "ERROR\nOverflow at index: " << CYAN << ex.getIndex() << RES << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s1.longestSpan() << std::endl;
	}
	catch (Span::NoSpanException& nsp)
	{
		std::cout << RED << "ERROR\nNo span to be found\n" << RES;
	}
}

void 	try_case5(void)
{
	Span s1(10000);
	try
	{
		int array[10000];
		for (int i = 0; i < 10000l; i++)
			array[i] = rand();
		s1.addNumber(array, array + sizeof array / sizeof array[0]);
		s1.displayVectorContents();
	}
	catch (Span::OutOfRangeException& ex)
	{
		std::cout << RED << "ERROR\nOverflow at index: " << CYAN << ex.getIndex() << RES << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << s1.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s1.longestSpan() << std::endl;
	}
	catch (Span::NoSpanException& nsp)
	{
		std::cout << RED << "ERROR\nNo span to be found\n" << RES;
	}
}

int main(void)
{
	{
		std::cout << "\033[0;33m-<======CASE_1:AddNumber======>\033[m\n";
		try_case1();
	}
	{
		std::cout << "\033[0;33m-<======CASE_2:Shortest/Longest_Span======>\033[m\n";
		try_case2();
	}
	{
		std::cout << "\033[0;33m-<======CASE_3:Shortest/Longest_Span_exception======>\033[m\n";
		try_case3();
	}
	{
		std::cout << "\033[0;33m-<======CASE_4:Modified_AddNumber======>\033[m\n";
		try_case4();
	}
	{
		std::cout << "\033[0;33m-<======CASE_5:100000======>\033[m\n";
//		try_case5();
	}
	return (0);
}

