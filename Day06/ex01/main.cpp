#include <iostream>
#include <string>
#include <iomanip>
#include "Colors.hpp"

struct Data {
	int val;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data* d1 = new Data();
	d1->val = 1337;
	std::cout << std::setw(35) << std::left << "Data adress: " << std::right << d1 << std::endl;
	std::cout << std::setw(35) << std::left << "Data value: " << std::right << d1->val << std::endl;
	uintptr_t ptr = serialize(d1);
	std::cout << std::setw(35) << std::left << "After serialize ptr adress: " <<  std::right << ptr << std::endl;
	std::cout << std::setw(35) << std::left << "After deserialize Data adress: " <<  std::right << deserialize(ptr) << std::endl;
	std::cout << std::setw(35) << std::left << "Data value: " << std::right << deserialize(ptr)->val << std::endl;
	delete d1;
	return (0);
}