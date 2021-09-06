#pragma once

#include <iostream>
#include <string>
#include <ostream>
#include "Colors.hpp"

template <class T>
class Array {
private:
	T*	_array;
	int _len;
public:
	Array(void) : _array(0), _len(0) {}
	Array(unsigned int len) : _array(new T[len]()), _len(len) {}
	Array(const Array<T>& ins)
	{
		_array = 0;
		*this = ins;
	}
	Array<T>&	operator=(const Array<T>& right)
	{
		if (this == &right)
			return (*this);
		if (_array)
			delete [] _array;
		_len = right.getLen();
		_array = new T[_len]();
		for (int i = 0; i < _len; i++)
			_array[i] = right.getValue()[i];
		return (*this);
	}
	~Array(void) {delete [] _array;};
	T* 		getValue(void) const { return _array; }
	int 	getLen(void) const { return _len; }
	void 	setArray(T val)
	{
		for (int i = 0; i < _len; i++)
			_array[i] = val;
	}
	T		operator[](int iter) const
	{
		if (!(iter >= 0 && iter < _len))
			throw (std::exception());
		return (_array[iter]);
	}
	int		size(void) const { return _len; }
};

template<class T>
std::ostream&		operator<<(std::ostream& os, const Array<T>& right)
{
	if (right.getLen() == 0)
		os << RED << "Array is empty" << RES;
	for (int i = 0; i < right.getLen(); i++)
		os << right[i] << " ";
	return os;
}