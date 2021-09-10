#include <iostream>
#include <iomanip>
#include "Colors.hpp"
#include <algorithm>
#include <vector>

template<typename T>
typename std::vector<T>::iterator	easyfind(std::vector<T>& cont, int val)
{
	typename std::vector<T>::iterator it;
	it = find(cont.begin(), cont.end(), val);
	if (it != cont.end())
	{
		std::cout << GREEN << "Element was found!\n" << RES << "Index = " << it - cont.begin() << "\nValue = " << *it << std::endl;;
		return (it);
	}
	else
		throw	std::exception();
}