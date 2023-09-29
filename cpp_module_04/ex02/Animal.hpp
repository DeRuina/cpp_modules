#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal 
{
  protected:
      std::string type;

  public:
      Animal();
      Animal(const Animal &copy);
      Animal &operator=(const Animal &src);
      virtual ~Animal();

      virtual void makeSound(void) const = 0;
      std::string getType(void) const;
};


#endif