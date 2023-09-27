#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
  protected:
      std::string type;

  public:
      WrongCat();
      WrongCat(const WrongCat &copy);
      WrongCat &operator=(const WrongCat &src);
      ~WrongCat();

      void makeSound(void) const;
      std::string getType(void) const;
};

#endif