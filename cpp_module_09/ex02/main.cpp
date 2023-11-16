#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	// if (argc < 2)
	// 	return (std::cout << "Error: no input" << std::endl, 1);
	// std::string sequence(PmergeMe::parse_and_check_input(argv));
	(void)argc;
	(void)argv;
	std::string sequence("  12 34   456456 0 2323   2 55 7 ");
	PmergeMe::sort_sequence(sequence);
	return (0);
}
