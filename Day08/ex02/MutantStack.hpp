#pragma once

#include <iostream>
#include <string>
#include <stack>
#include "Colors.hpp"

template<class T>
class MutantStack : public std::stack<T> {
private:
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (std::stack<T>::c.begin()); };
	iterator end() { return (std::stack<T>::c.end()); };
	~MutantStack(void) {};
};
