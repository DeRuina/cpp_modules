#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(40);
	vec.push_back(41);
	vec.push_back(42);
	vec.push_back(43);
	vec.push_back(44);
	std::cout << easyfind(vec, 40) << std::endl;
	std::cout << easyfind(vec, 42) << std::endl;
	std::cout << easyfind(vec, 44) << std::endl;


	std::deque<int> deq;
	deq.push_front(0);
	deq.push_front(1);
	deq.push_front(2);
	deq.push_front(3);
	deq.push_front(4);

	std::cout << easyfind(deq, 0) << std::endl;
	std::cout << easyfind(deq, 3) << std::endl;
	std::cout << easyfind(deq, 4) << std::endl;

	try
	{
	std::cout << easyfind(vec, 50) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found" << std::endl;
	}

	try
	{
		std::cout << easyfind(deq, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found" << std::endl;
	}

	return (0);
}
