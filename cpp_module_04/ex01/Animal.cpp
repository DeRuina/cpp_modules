#include"Animal.hpp"

Animal::Animal() : type("has_a_heart")
{
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
   std::cout << "Animal copy constructor called" << std::endl;
   *this = copy;
}
Animal &Animal::operator=(const Animal &src)
{
  std::cout << "Animal copy assignment operator called" << std::endl;
  this->type = src.type;
  return (*this);
}

Animal::~Animal()
{
   std::cout << " Animal destructor called" << std::endl;
}
void Animal::makeSound(void) const
{
  std::cout << "dsfhsdsfasdfasdf I make a sound I'm an animal" << std::endl;
}

std::string Animal::getType(void) const
{
  return (this->type);
}