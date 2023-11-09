#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <string>
#include <vector>
#include <deque>

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &src);
		~PmergeMe();

	public:
		static void sort_sequence(std::string sequence);

};



#endif
