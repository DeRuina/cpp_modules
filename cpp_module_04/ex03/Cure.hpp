#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
    Cure();
    Cure(const Cure &copy);
    Cure &operator=(const Cure &src);
    virtual ~Cure();

    Cure* clone() const;
	void use(ICharacter &target);

};

#endif
