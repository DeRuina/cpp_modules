#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
    Ice();
    Ice(const Ice &copy);
    Ice &operator=(const Ice &src);
    virtual ~Ice();

    Ice* clone() const;
	void use(ICharacter &target);

};

#endif
