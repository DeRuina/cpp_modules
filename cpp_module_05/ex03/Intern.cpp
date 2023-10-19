#include "Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &copy)
{
  (void)copy;
}
Intern &Intern::operator=(const Intern &src)
{
  (void)src;
  return (*this);
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
  std::string formNames[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

  form forms[] = {&Intern::getShrubbery, &Intern::getRobotomy, &Intern::getPresidential};

  for (int i = 0; i < 3; i++)
  {
    if (formName.compare(formNames[i]) == 0)
    {
      std::cout << "Intern creates " << formNames[i] << std::endl;
      return (this->*forms[i])(target);
    }
  }
  std::cout << "Intern couldn't create the form" << std::endl; 
  return (NULL);
}

AForm *Intern::getShrubbery(std::string target)
{
  return (new ShrubberyCreationForm(target));
}

AForm *Intern::getRobotomy(std::string target)
{
  return (new RobotomyRequestForm(target));
}

AForm *Intern::getPresidential(std::string target)
{
  return (new PresidentialPardonForm(target));
}