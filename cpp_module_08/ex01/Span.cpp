#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
}
Span::Span(const Span &copy)
{
	*this = copy;
}
Span &Span::operator=(const Span &src)
{
	this->vec.clear();
	unsigned int size = src.N;
	for (unsigned int i = 0; i < size; i++)
		this->vec.push_back(src.vec[i]);
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int num)
{
	if (this->vec.size() >= this->N)
		throw std::out_of_range("Vector full");
	this->vec.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator it1, std::vector<int>::iterator it2)
{
	if (this->vec.size() >= this->N)
		throw std::out_of_range("Vector full");
	this->vec.insert(this->vec.begin(), it1, it2);
}

unsigned int Span::longestSpan()
{
	if (this->vec.size() < 2)
		throw std::out_of_range("Vector empty/ has 1 number");
	return (*std::max_element(this->vec.begin(), this->vec.end()) - *std::min_element(this->vec.begin(), this->vec.end()));
}
unsigned int Span::shortestSpan()
{
	if (this->vec.size() < 2)
		throw std::out_of_range("Vector empty/ has 1 number");
	std::vector<int> tmp(this->vec.begin(), this->vec.end());
	std::sort(tmp.begin(), tmp.end());
	int size = tmp.size();
	int span  = *std::max_element(this->vec.begin(), this->vec.end());
	for (int i = 0; i < size - 1; i++)
		if (tmp[i + 1] - tmp[i] < span)
			span = tmp[i + 1] - tmp[i];
	return (span);
}
