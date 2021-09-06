#include "TestClass.hpp"

TestClass::TestClass(void) : _value(0) {}

TestClass::TestClass(int value) : _value(value) {}

TestClass::TestClass(const TestClass& ins)
{
	*this = ins;
}

TestClass& TestClass::operator=(const TestClass& right)
{
	if (this == &right)
		return (*this);
	_value = right.getValue();
	return (*this);
}

TestClass::~TestClass(void) {}

int TestClass::getValue(void) const
{
	return (_value);
}

bool TestClass::operator<(const TestClass& right)
{
	return (_value < right.getValue() ? true : false);
}

bool TestClass::operator>(const TestClass& right)
{
	return (_value > right.getValue() ? true : false);
}

bool TestClass::operator==(const TestClass& right)
{
	return (_value == right.getValue() ? true : false);
}

std::ostream&		operator<<(std::ostream& os, const TestClass& right)
{
	os << "Value: " << right.getValue();
	return (os);
}

