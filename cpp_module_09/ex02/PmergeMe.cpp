#include "PmergeMe.hpp"

std::vector<unsigned long> PmergeMe::vec_sort(std::string sequence)
{
	std::vector<unsigned long> vec;
	const char *str = sequence.c_str();
	while(*str)
	{
		while (*str && (*str < '0' || *str > '9'))
			str++;
		if (!*str)
			break;
		vec.push_back(std::atoi(str));
		while (*str && *str != ' ')
			str++;
	}
	merge_sort(vec);
	return (vec);

}

std::deque<unsigned long> PmergeMe::deq_sort(std::string sequence)
{
	std::deque<unsigned long> deq;
	const char *str = sequence.c_str();
	while(*str)
	{
		while (*str && (*str < '0' || *str > '9'))
			str++;
		if (!*str)
			break;
		deq.push_back(std::atoi(str));
		while (*str && *str != ' ')
			str++;
	}
	merge_sort(deq);
	return (deq);

}

std::string PmergeMe::parse_and_check_input(char **input)
{
	std::string str;
	input++;
	while (*input)
	{
		str += *input++;
		str += " ";
	}
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	{
		while (*it != ' ')
		{
			if (*it == '+' && (*(it + 1) > '0' && *(it + 1) < '9'))
				break;
			if (*it == '-' || *it < '0' || *it > '9')
				throw std::exception();
			++it;
		}
	}
	return (str);
}

void PmergeMe::sort_sequence(std::string sequence)
{
	clock_t time_begin = std::clock();
	std::vector<unsigned long> vec(PmergeMe::vec_sort(sequence));
	clock_t vec_time = (std::clock() - time_begin);
	time_begin = std::clock();
	std::deque<unsigned long> deq(PmergeMe::deq_sort(sequence));
	clock_t deque_time = std::clock() - time_begin;

	std::cout << "Before: ";
	for (std::string::iterator it = sequence.begin(); it != sequence.end(); ++it)
	{
		while (*it == ' ')
			++it;
		if (!*it)
			break;
		while (*it != ' ')
			std::cout << *it++;
		std::cout << " ";
	}
	std::cout << "\nAfter: ";
	for (std::vector<unsigned long>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		if (*it == *vec.rbegin())
		{
			std::cout << *it << std::endl;
			break;
		}
		std::cout << *it << " ";
	}
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(3) << 1000 * (vec_time / (double)CLOCKS_PER_SEC) << " ms" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << std::fixed << std::setprecision(3) << 1000 * (deque_time / (double)CLOCKS_PER_SEC) << " ms" << std::endl;
}
