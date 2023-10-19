#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
  private:
      std::string target;

  public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();

	void  execute(const Bureaucrat& executor) const;
};



#endif
