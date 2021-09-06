#include "func.hpp"
#include "TestClass.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "-<======TEST_SWAP:CASE_1(int)======>\n" << RES;
		int a = 14;
		int b = 1337;
		std::cout << CYAN << "Before swap:\n" << RES;
		std::cout << "\ta = " << a << std::endl;
		std::cout << "\tb = " << b << std::endl;
		std::cout << CYAN << "After swap:\n" << RES;
		swap<int>(&a, &b);
		std::cout << "\ta = " << a << std::endl;
		std::cout << "\tb = " << b << std::endl;
	}
	{
		std::cout << YELLOW << "-<======TEST_SWAP:CASE_2(TestClass)======>\n" << RES;
		TestClass a1(666);
		TestClass b1(999);
		std::cout << CYAN << "Before swap:\n" << RES;
		std::cout << "\ta1." << a1 << std::endl;
		std::cout << "\tb1." << b1 << std::endl;
		std::cout << CYAN << "After swap:\n" << RES;
		swap<TestClass>(&a1, &b1);
		std::cout << "\ta1." << a1 << std::endl;
		std::cout << "\tb1." << b1 << std::endl;
	}
	{
		std::cout << YELLOW << "-<======TEST_MIN:CASE_1(int)======>\n" << RES;
		int a = 14;
		int b = 1337;
		std::cout << "\ta = " << a << std::endl;
		std::cout << "\tb = " << b << std::endl;
		std::cout << CYAN << "\tmin(a, b) " << RES << "= " << min<int>(a, b) << std::endl;
	}
	{
		std::cout << YELLOW << "-<======TEST_MIN:CASE_2(TestClass)======>\n" << RES;
		TestClass a1(666);
		TestClass b1(999);
		std::cout << "\ta1." << a1 << std::endl;
		std::cout << "\tb1." << b1 << std::endl;
		std::cout << CYAN << "\tmin(a1, b1) " << RES << "= " << min<TestClass>(a1, b1) << std::endl;
	}
	{
		std::cout << YELLOW << "-<======TEST_MAX:CASE_1(int)======>\n" << RES;
		int a = 14;
		int b = 1337;
		std::cout << "\ta = " << a << std::endl;
		std::cout << "\tb = " << b << std::endl;
		std::cout << CYAN << "\tmax(a, b) " << RES << "= " << max<int>(a, b) << std::endl;
	}
	{
		std::cout << YELLOW << "-<======TEST_MAX:CASE_2(TestClass)======>\n" << RES;
		TestClass a1(666);
		TestClass b1(999);
		std::cout << "\ta1." << a1 << std::endl;
		std::cout << "\tb1." << b1 << std::endl;
		std::cout << CYAN << "\tmax(a1, b1) " << RES << "= " << max<TestClass>(a1, b1) << std::endl;
	}
}

