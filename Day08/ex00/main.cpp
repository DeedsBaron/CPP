#include "easifind.hpp"

int main(void)
{
	int arr[5] = {0, 1, 2, 3, 4};
	std::vector<int>	v1(arr, arr + sizeof(arr) / sizeof(int));
	try
	{
		easyfind(v1, 1);
		easyfind(v1, 100);
	}
	catch (std::exception& e1)
	{
		std::cout << RED << "Not found\n" << RES;
	}
	return (0);
}

