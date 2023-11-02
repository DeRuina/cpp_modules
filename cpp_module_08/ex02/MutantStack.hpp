#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
#include <list>


template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	private:

	public:
		MutantStack()
		{
		}
		MutantStack(const MutantStack &copy)
		{
			*this = copy;
		}
		MutantStack &operator=(const MutantStack &src)
		{
			std::stack<T, Container>::operator=(src);
			return (*this);
		}
		~MutantStack()
		{
		}

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		const_iterator begin() const
		{
			return (this->c.being());
		}
		const_iterator end() const
		{
			return (this->c.end());
		}
};



#endif
