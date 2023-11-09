#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &src);
		~PmergeMe();
		static std::vector<unsigned long> sort_vector(std::string sequence);
		static std::deque<unsigned long> sort_deque(std::string sequence);

	public:
		static void sort_sequence(std::string sequence);

};



#endif
