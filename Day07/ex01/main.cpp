#include "func.hpp"
#include "TestClass.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "-<======TEST_ITER:CASE_1(int)======>\n" << RES;
		int array[5] = {0, 1, 2, 3, 4};
		iter<int>(array, 5, &disp_elem<int>);
		std::cout << std::endl;
		std::cout << YELLOW << "-<======TEST_ITER:CASE_1(char)======>\n" << RES;
		char charay[5] = {'a', 'b', 'c', 'd', 'e'};
		iter<char>(charay, 5, &disp_elem<char>);
		std::cout << std::endl;
		return (0);
	}
}