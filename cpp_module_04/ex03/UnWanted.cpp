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
  delete this->current;
  this->current = NULL;
  delete this->next;
  this->next = NULL;
}

UnWanted *UnWanted::getNext(void)
{
  return (this->next);
}

void UnWanted::setNext(UnWanted *append)
{
  this->next = append;
}

AMateria	*UnWanted::getCurrent(void)
{
  return (this->current);
}