#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* Teemu = new Character( "Teemu");

	// Equip test
	AMateria* tmp;
	tmp = src->createMateria("ice");
 	Teemu->equip(tmp);
	tmp = src->createMateria("cure");
 	Teemu->equip(tmp);

	// Unequip test
	tmp = src->createMateria("ice");
 	Teemu->equip(tmp);
	tmp = src->createMateria("cure");
 	Teemu->equip(tmp);
 	Teemu->unequip(2);
 	Teemu->unequip(3);

	// Equip Teemu overload test
	tmp = src->createMateria("ice");
 	Teemu->equip(tmp);
	tmp = src->createMateria("cure");
 	Teemu->equip(tmp);
	tmp = src->createMateria("ice");
 	Teemu->equip(tmp);

	delete tmp;

	// Use test
	ICharacter* bob = new Character("bob");
 	Teemu->use(0, *bob);
 	Teemu->use(1, *bob);
 	Teemu->use(2, *bob);
 	Teemu->use(3, *bob);

	delete bob;
	delete Teemu;
	delete src;

	return (0);
}
