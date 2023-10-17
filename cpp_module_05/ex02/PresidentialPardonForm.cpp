#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AFrom("PresidentialPardonForm", 25, 5),
target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute(), copy.getSigned())
{
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
  (void)src;
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
  if (this->getSigned() == false)
    throw AForm::FormNotSignedException();
  else if (executor.getGrade() > this->getGradeToExecute())
    throw AForm::GradeTooLowException();
  std::cout << this->target << " > has been pardoned by Zaphod Beeblebrox." << std::endl;
}