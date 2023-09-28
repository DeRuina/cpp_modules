#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal 
{
  protected:
      std::string type;

  public:
      Cat();
      Cat(const Cat &copy);
      Cat &operator=(const Cat &src);
      ~Cat();

      void makeSound(void) const;
      std::string getType(void) const;
};



#endif