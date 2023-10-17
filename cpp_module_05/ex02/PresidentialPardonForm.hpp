#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
  private:
      std::string target;

  public:
      PresidentialPardonForm(std::string target);
      PresidentialPardonForm(const PresidentialPardonForm &copy);
      PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
       virtual ~PresidentialPardonForm();

      void  execute(const Bureaucrat& executor) const;
};

#endif