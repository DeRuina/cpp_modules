#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		return (std::cout << "Error: no input" << std::endl, 1);
	(void)argv;
	std::string sequence(PmergeMe::parse_and_check_input(argv));
	PmergeMe::sort_sequence(sequence);
}
