#ifndef UNWANTED_H
#define UNWANTED_H

#include "AMateria.hpp"

class UnWanted
{
	private:
		AMateria	*current;
		UnWanted	*next;

	public:
		UnWanted(AMateria *materia);
		UnWanted(const UnWanted &copy);
		UnWanted	&operator=(const UnWanted &src);
		virtual		~UnWanted();

		UnWanted	*getNext(void);
		void		setNext(UnWanted *append);
		AMateria	*getCurrent(void);
};

#endif
