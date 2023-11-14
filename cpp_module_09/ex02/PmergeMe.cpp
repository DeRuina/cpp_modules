#include "PmergeMe.hpp"

std::vector<unsigned long> PmergeMe::vec_sort(std::string sequence)
{

}

std::deque<unsigned long> PmergeMe::deq_sort(std::string sequence)
{

}

void PmergeMe::check_input(std::string sequence)
{


}

void PmergeMe::sort_sequence(std::string sequence)
{
	clock_t time_begin = std::clock();
	std::vector<unsigned long> vec(PmergeMe::sort_vector(sequence));
	clock_t vec_time = std::clock() - time_begin;
	time_begin = std::clock();
	std::deque<unsigned long> deq(PmergeMe::sort_deque(sequence));
	clock_t deque_time = std::clock() - time_begin;

	std::cout << "Before: " << sequence << std::endl;
	std::cout << "After: ";
	for (std::vector<unsigned long>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		if (*it == *vec.rbegin())
			std::cout << std::endl;
		std::cout << *it << " ";
	}
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector :" << float(vec_time) << std::endl;
	std::cout << "Time to process a range of " << deq.size() << " elements with std::deque :" << float(deque_time) << std::endl;
}
