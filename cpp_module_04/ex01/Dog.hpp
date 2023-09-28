#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal 
{
  protected:
      std::string type;

  public:
      Dog();
      Dog(const Dog &copy);
      Dog &operator=(const Dog &src);
      ~Dog();

      void makeSound(void) const;
      std::string getType(void) const;
};


#endif