#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{ 
}
Ice::Ice(const Ice &copy) : AMateria("ice")
{
  this->type = copy.getType();
}
Ice &Ice::operator=(const Ice &src)
{
  this->type = src.getType();
  return (*this);
}

Ice::~Ice()
{
}

Ice* Ice::clone() const
{
  return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}