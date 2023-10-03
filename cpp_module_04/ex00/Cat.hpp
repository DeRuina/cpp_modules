#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
  public:
      Cat();
      Cat(const Cat &copy);
      Cat &operator=(const Cat &src);
      ~Cat();

      void makeSound(void) const;
      std::string getType(void) const;
};



#endif
