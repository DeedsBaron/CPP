#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <algorithm>
#include "Colors.hpp"
#include <stdlib.h>

class Span{
private:
	std::vector<int> _num;
	int N;
public:
	class OutOfRangeException : public std::exception
	{
	private:
		int _index;
	public:
		OutOfRangeException(int val, int index) : _index(index) {}
		int		getIndex(void) const { return _index;}
	};
	class NoSpanException : public std::exception {};
	Span(void);
	Span(Span& ins);
	Span(unsigned int len);
	Span& operator=(Span& right);
	~Span(void);

	std::vector<int>&	getNum(void);
	void 				addNumber(int val);
	int 				shortestSpan(void);
	int 				longestSpan(void);
	void				displayVectorContents(void) const;
	template<class InputIterator>
	void				addNumber(InputIterator first, InputIterator last)
	{
		if (_num.size() + (last - first - 1) >= N)
			throw Span::OutOfRangeException(0, N);
		_num.insert(_num.end(), first, last);
	}
};
