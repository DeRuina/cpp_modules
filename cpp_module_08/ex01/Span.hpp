#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	private:
		unsigned int N;
		std::vector<int> vec;

	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &src);
		~Span();

		void addNumber(int num);
		void addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2);
		unsigned int shortestSpan();
		unsigned int longestSpan();



};


#endif
