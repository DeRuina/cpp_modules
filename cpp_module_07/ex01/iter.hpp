#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void printValue(T const & val)
{
	std::cout << val << std::endl;
}

 template <typename T>
void iter(T arr[], int size, void (*func)(T const &))
{
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T>
void iter(T arr[], int size, void (*func)(T&))
{
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

#endif
