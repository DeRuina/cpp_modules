#ifndef INTERN_H
#define INTERN_H

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern 
{
  private:
      AForm *getShrubbery(std::string taget);
      AForm *getRobotomy(std::string taget);
      AForm *getPresidential(std::string taget);

  public:
      Intern();
      Intern(const Intern &copy);
      Intern &operator=(const Intern &src);
      ~Intern();

      AForm *makeForm(std::string formName, std::string target);
};

typedef AForm *(Intern:: *form)(std:: string target);

#endif