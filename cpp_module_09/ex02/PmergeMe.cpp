#include "PmergeMe.hpp"

void PmergeMe::sort_sequence(std::string sequence)
{
	for (int i = 0; i < sequence.length(); i++)
		if (std::isalpha(sequence[i]) || sequence[i] < 0)
			std::cout << "Error: Invalid arguments" << std::endl;
	std::vector<unsigned int> vec;
	std::deque<unsigned int> deq;

}
