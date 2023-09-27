#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
  std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
  std::cout << "Dog copy constructor called" << std::endl;
  *this = copy;
}
Dog &Dog::operator=(const Dog &src)
{
  this->type = src.type;
  return (*this);
}

Dog::~Dog()
{
   std::cout << " Dog destructor called" << std::endl;
}
void Dog::makeSound(void) const
{
  std::cout << "YYYaaaaffff YYYYaaaffff  I'm a Dog" << std::endl;
}

std::string Dog::getType(void) const
{
  return (this->type);
}