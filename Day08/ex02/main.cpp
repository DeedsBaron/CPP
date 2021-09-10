#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << CYAN << "Top: " << RES << mstack.top() << std::endl;
	mstack.pop();
	std::cout << CYAN << "Size: " << RES << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Mstack[" << it - mstack.begin() << "] = " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}

