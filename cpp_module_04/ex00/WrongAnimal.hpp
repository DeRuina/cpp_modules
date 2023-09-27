#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal 
{
  protected:
      std::string type;

  public:
      WrongAnimal();
      WrongAnimal(const WrongAnimal &copy);
      WrongAnimal &operator=(const WrongAnimal &src);
      virtual ~WrongAnimal();

      void makeSound(void) const;
      std::string getType(void) const;
};

#endif