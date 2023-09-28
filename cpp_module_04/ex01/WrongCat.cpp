#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
  std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
   std::cout << "WrongCat copy constructor called" << std::endl;
   *this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &src)
{
  this->type = src.type;
  return (*this);
}

WrongCat::~WrongCat()
{
   std::cout << " WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound(void) const
{
  std::cout << "Meeeeeooooowwww KKKssssss I'm a cat" << std::endl;
}

std::string WrongCat::getType(void) const
{
  return (this->type);
}