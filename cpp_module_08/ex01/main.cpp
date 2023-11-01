#include "Span.hpp"

int main()
{


	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	try
	{
		std::vector<int> test(10000);
		std::generate(test.begin(), test.end(), std::rand);
		Span span(10000);
		span.addNumber(test.begin(), test.end());
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span span2(3);
		span2.addNumber(1);
		span2.addNumber(2);
		span2.addNumber(3);
		span2.addNumber(4);

	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	return 0;
}
