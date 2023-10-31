#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

template<typename T>
int &easyfind(T container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	if (it != container.end())
		return (*it);
	else
		throw std::exception();
}

#endif
