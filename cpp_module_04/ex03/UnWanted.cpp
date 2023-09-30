#include "UnWanted.hpp"

UnWanted::UnWanted(AMateria *materia) : current(materia), next(NULL)
{
}
UnWanted::UnWanted(const UnWanted &copy)
{
  this->current = copy.current;
  this->next = copy.next;
}

UnWanted &UnWanted::operator=(const UnWanted &src)
{
  this->current = src.current;
  this->next = src.next;
  return (*this);
}

UnWanted::~UnWanted()
{
  delete current;
  current = NULL;
  delete next;
  next = NULL;
}

UnWanted *UnWanted::getNext(void)
{
  return (this->next);
}

void UnWanted::setNext(UnWanted *next)
{
  this->next = next;
}

AMateria	*UnWanted::getCurrent(void)
{
  return (this->current);
}