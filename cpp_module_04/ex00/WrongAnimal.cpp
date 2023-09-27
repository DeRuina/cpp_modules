#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("has_a_heart_with_no_brain")
{
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
   std::cout << "WrongAnimal copy constructor called" << std::endl;
   *this = copy;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
  this->type = src.type;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
   std::cout << " WrongAnimal destructor called" << std::endl;
}
void WrongAnimal::makeSound(void) const
{
  std::cout << "gyjdtyfhdtfhxdthg I make a sound I'm a WrongAnimal" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
  return (this->type);
}