#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat constructor called" << std::endl;
  this->type = "Cat";
  this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal()
{
   std::cout << "Cat copy constructor called" << std::endl;
   this->type = copy.type;
   this->brain = new Brain(*copy.brain);
}
Cat &Cat::operator=(const Cat &src)
{
  std::cout << "Cat copy assignment operator called" << std::endl;
  this->type = src.type;
  delete this->brain;
  this->brain = new Brain(*src.brain);
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
