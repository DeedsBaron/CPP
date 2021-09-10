#include "Span.hpp"

Span::Span(void) : N(0) {}

Span::Span(unsigned int len) : N(len) {}

Span::Span(Span& ins)
{
	*this = ins;
}

Span& Span::operator=(Span& right)
{
	if (this == &right)
		return (*this);
	for (std::vector<int>::iterator it = _num.begin(); it < _num.end(); it++)
		_num[*it] = (right.getNum())[*it];
	return (*this);
}

Span::~Span(void) {}

std::vector<int>&	Span::getNum(void) { return _num; }

void Span::addNumber(int val)
{
	if (_num.size() == N)
		throw Span::OutOfRangeException(val, N);
	_num.push_back(val);
}

int Span::shortestSpan(void)
{
	if (_num.size() < 2)
		throw NoSpanException();
	int shortestSpan = std::abs(_num[0] - _num[1]);
	for (std::vector<int>::iterator it = _num.begin(); it < _num.end(); it++)
	{
		for(std::vector<int>::iterator jt = it + 1; jt < _num.end(); jt++)
		{
			if (std::abs(*it - *jt) < shortestSpan)
				shortestSpan = std::abs(*it - *jt);

		}
	}
	return (shortestSpan);

}

int Span::longestSpan(void)
{
	if (_num.size() < 2)
		throw NoSpanException();
	int longestSpan = std::abs(_num[0] - _num[1]);
	for (std::vector<int>::iterator it = _num.begin(); it < _num.end(); it++)
	{
		for(std::vector<int>::iterator jt = it + 1; jt < _num.end(); jt++)
		{
			if (std::abs(*it - *jt) > longestSpan)
				longestSpan = std::abs(*it - *jt);

		}
	}
	return (longestSpan);
}

void Span::displayVectorContents(void) const
{
	std::cout << CYAN << "-<==================>-\n" << RES;
	for (int i = 0; i < _num.size(); i++)
		std::cout << "Arr[" << i << "] = " << _num[i] << std::endl;
}
