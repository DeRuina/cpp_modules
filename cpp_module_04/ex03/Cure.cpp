#include "Cure.hpp"

Cure::Cure(std::string const & type) : AMateria("cure")
{
}
Cure::Cure(const Cure &copy) : AMateria("cure")
{
  this->type = copy.getType();
}
Cure &Cure::operator=(const Cure &src)
{
  this->type = src.getType();
  return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
  return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}