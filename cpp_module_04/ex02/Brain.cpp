#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
  std::cout << "Brain copy constructor called" << std::endl;
  *this = copy;
}
Brain &Brain::operator=(const Brain &src)
{
  std::cout << "Brain copy assignment operator called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = src.ideas[i];
  return (*this);
}

Brain::~Brain()
{
  std::cout<< "Brain destructor being called" << std::endl;
}

std::string &Brain::getIdea(int index)
{
  return (this->ideas[index]);
}

void Brain::setIdea(int index,  std::string idea)
{
  this->ideas[index] = idea;
}