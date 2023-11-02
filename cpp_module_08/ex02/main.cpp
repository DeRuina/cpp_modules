#include "MutantStack.hpp"

int main()
{
	// Subject test ///
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
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
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	// List subject test ///

	std::cout << std::endl;

	std::list<int> ls;
	ls.push_back(5);
	ls.push_back(17);
	std::cout << ls.back() << std::endl;
	ls.pop_back();
	std::cout << ls.size() << std::endl;
	ls.push_back(3);
	ls.push_back(5);
	ls.push_back(737);
	ls.push_back(0);
	std::list<int>::iterator it1 = ls.begin();
	std::list<int>::iterator ite2 = ls.end();
	++it1;
	--it1;
	while (it1 != ite2)
	{
	std::cout << *it1 << std::endl;
	++it1;
	}


	// More tests ///

	std::cout << std::endl;

	MutantStack<int> mystack;
	mystack.push(41);
	mystack.push(42);
	mystack.push(43);
	mystack.push(44);
	mystack.push(45);
	std::cout << mystack.size() << std::endl;
	mystack.pop();
	std::cout << mystack.size() << std::endl << std::endl;
	MutantStack<int>::const_iterator c_1 = mystack.begin();
	MutantStack<int>::const_iterator c_2 = mystack.end();
	while (c_1 != c_2)
		std::cout << *c_1++ << std::endl;

	return 0;
}
