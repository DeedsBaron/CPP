#include <iostream>
#include <iomanip>
#include "Colors.hpp"

template<typename T>
void	swap(T* a, T* b)
{
	T c = *a;
	*a = *b;
	*b = c;
}

template<typename T>
T&		min(T& a, T& b)
{
	if (a < b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}

template<typename T>
T&		max(T& a, T& b)
{
	if (a > b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}