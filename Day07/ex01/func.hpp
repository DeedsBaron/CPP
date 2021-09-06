#include <iostream>
#include <iomanip>
#include "Colors.hpp"

template<typename T>
void	iter(T* a, int length, void (*f)(T b))
{
	int i = 0;
	while (i < length)
	{
		(*f)(a[i]);
		i++;
	}
}

template<typename T>
void 	disp_elem(T b)
{
	std::cout << b;
}

