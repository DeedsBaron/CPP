#pragma once

#include <iostream>
#include <string>
#include <ostream>

class TestClass {
private:
	int _value;
public:
	TestClass(void);
	TestClass(int value);
	TestClass(const TestClass& ins);
	TestClass&	operator=(const TestClass& right);
	~TestClass(void);

	int 		getValue(void) const;
	bool 		operator<(const TestClass& right);
	bool 		operator>(const TestClass& right);
	bool 		operator==(const TestClass& right);
};

std::ostream&		operator<<(std::ostream& os, const TestClass& ins);

