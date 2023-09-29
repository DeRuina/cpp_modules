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
}