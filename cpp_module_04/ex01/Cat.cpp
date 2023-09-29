#include "Cat.hpp"

Cat::Cat() : type("Cat"), brain(new Brain())
{
  std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
   std::cout << "Cat copy constructor called" << std::endl;
   *this = copy;
}
Cat &Cat::operator=(const Cat &src)
{
  std::cout << "Cat copy assignment operator called" << std::endl;
  this->type = src.type;
  return (*this);
}

Cat::~Cat()
{
   std::cout << " Cat destructor called" << std::endl;
   delete brain;
}
void Cat::makeSound(void) const
{
  std::cout << "Meeeeeooooowwww KKKssssss I'm a cat" << std::endl;
}
std::string Cat::getType(void) const
{
  return (this->type);
}

Brain &Cat::getBrain(void)
{
  return (*this->brain);
}