#include "Base.hpp"

int main(void)
{
	Base b1;
	Base* ptr = b1.generate();
	Base& ref = *ptr;
	identify(ptr);
	identify(ref);
//	Data* d1 = new Data();
//	d1->val = 1337;
//	std::cout << std::setw(35) << std::left << "Data adress: " << std::right << d1 << std::endl;
//	std::cout << std::setw(35) << std::left << "Data value: " << std::right << d1->val << std::endl;
//	uintptr_t ptr = serialize(d1);
//	std::cout << std::setw(35) << std::left << "After serialize ptr adress: " <<  std::right << ptr << std::endl;
//	std::cout << std::setw(35) << std::left << "After deserialize Data adress: " <<  std::right << deserialize(ptr) << std::endl;
//	std::cout << std::setw(35) << std::left << "Data value: " << std::right << deserialize(ptr)->val << std::endl;
//	delete d1;
	return (0);
}