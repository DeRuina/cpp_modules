#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>

class AMateria
{
protected:
      std::string type;

  public:
    AMateria(std::string const & type);
    AMateria(const AMateria &copy);
    AMateria &operator=(const AMateria &src);
    virtual ~AMateria();


    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif