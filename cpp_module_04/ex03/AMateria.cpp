#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria &copy) : type(copy.getType())
{  
}
AMateria &AMateria::operator=(const AMateria &src)
{
  this->type = src.getType();
  return (*this);
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
  return (this->type);
}

void AMateria::use(ICharacter& target)
{
  std::cout << "default behaviour of use" << std::endl;
}