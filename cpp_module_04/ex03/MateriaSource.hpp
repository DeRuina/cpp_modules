#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &src);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria *materia);
		virtual AMateria *createMateria(std::string const &type);

		AMateria *getMateria(int i) const;


};

#endif
