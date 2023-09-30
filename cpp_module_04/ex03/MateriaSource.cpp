#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		materias[i] = copy.getMateria(i)->clone();
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete materias[i];
		materias[i] = src.getMateria(i)->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete materias[i];
		materias[i] = NULL;
	}
}
void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] == NULL && materia)
		{
			materias[i] = materia;
      std::cout << "New materia learned"<< std::endl;
			return;
		}
	}
	  std::cout << "Didn't learn" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] != NULL && materias[i]->getType() == type)
		{
			std::cout << "Materia "<< type << " created."<< std::endl;
			return (materias[i]->clone());
		}
	}
	std::cout << "Didn't create" << std::endl;
	return (NULL);
}

AMateria *MateriaSource::getMateria(int i) const
{
  if (i < 0 || i > 3) 
		return (NULL);
	return (materias[i]);
}
