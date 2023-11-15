#include "PmergeMe.hpp"

std::vector<unsigned long> PmergeMe::vec_sort(std::string sequence)
{
	std::vector<unsigned long> vec;

	for (std::string::iterator it = sequence.begin(); it != sequence.end(); ++it)
	{
		if (*it == ' ')
			++it;
		vec.push_back(*it - '0');
	}
	merge_sort(vec);
	return (vec);

}

std::deque<unsigned long> PmergeMe::deq_sort(std::string sequence)
{
	std::deque<unsigned long> deq;

	for (std::string::iterator it = sequence.begin(); it != sequence.end(); ++it)
	{
		if (*it == ' ')
			++it;
		deq.push_back(*it - '0');
	}
	merge_sort(deq);
	return (deq);

}

std::string PmergeMe::parse_and_check_input(char **input)
{


}

void PmergeMe::sort_sequence(std::string sequence)
{
	clock_t time_begin = std::clock();
	std::vector<unsigned long> vec(PmergeMe::vec_sort(sequence));
	clock_t vec_time = std::clock() - time_begin;
	time_begin = std::clock();
	std::deque<unsigned long> deq(PmergeMe::deq_sort(sequence));
	clock_t deque_time = std::clock() - time_begin;

	std::cout << "Before: " << sequence << std::endl;
	std::cout << "After: ";
	for (std::vector<unsigned long>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		if (*it == *vec.rbegin())
			std::cout << std::endl;
		std::cout << *it << " ";
	}
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << float(vec_time) << " microseconds" << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " << float(deque_time) << " microseconds" << std::endl;
}
