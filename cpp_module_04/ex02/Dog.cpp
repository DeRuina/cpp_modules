#include "Dog.hpp"

Dog::Dog() : brain(new Brain()), type("Dog")
{
  std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
  std::cout << "Dog copy constructor called" << std::endl;
  this->type = copy.type;
   this->brain = new Brain(*copy.brain);
}
Dog &Dog::operator=(const Dog &src)
{
  std::cout << "Dog copy assignment operator called" << std::endl;
  this->type = src.type;
  delete this->brain;
  this->brain = new Brain(*src.brain);
  return (*this);
}

Dog::~Dog()
{
   std::cout << " Dog destructor called" << std::endl;
   delete brain;
}
void Dog::makeSound(void) const
{
  std::cout << "YYYaaaaffff YYYYaaaffff  I'm a Dog" << std::endl;
}

std::string Dog::getType(void) const
{
  return (this->type);
}

Brain &Dog::getBrain(void)
{
  return (*this->brain);
}