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
		static std::vector<unsigned long> vec_sort(std::string sequence);
		static std::deque<unsigned long> deq_sort(std::string sequence);

		template<typename T>
		static void merge_sort(T &sequence)
		{
			if (sequence.size()  <= 1)
				return ;
			typename T::iterator middle = sequence.begin() + (sequence.size() / 2);
			T begin(sequence.begin(), middle);
			T end(middle, sequence.end());

			merge_sort(begin);
			merge_sort(end);

			typename T::iterator sequence_it = sequence.begin();
			typename T::iterator begin_it = begin.begin();
			typename T::iterator end_it = end.begin();

			while(begin_it < begin.end() && end_it < end.end())
			{
				if (*begin_it < * end_it)
				{
					*sequence_it = *begin_it;
					begin_it++;
				}
				else
				{
					*sequence_it = *end_it;
					end_it++;
				}
				sequence_it++;
			}
			while (begin_it < begin.end())
			{
				*sequence_it = *begin_it;
				sequence_it++;
				begin_it++;
			}
			while (end_it < end.end())
			{
				*sequence_it = *end_it;
				sequence_it++;
				end_it++;
			}
		}

	public:
		static void sort_sequence(std::string sequence);
		static std::string parse_and_check_input(char **input);
};


#endif
