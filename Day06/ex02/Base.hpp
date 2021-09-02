#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include "Colors.hpp"

class Base{
public:
	virtual ~Base(void);
	Base*	generate(void);
};

void identify(Base* p);
void identify(Base& p);