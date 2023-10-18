#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45),
target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute())
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	(void)src;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "DRRRR BRRRR DRILLING NOISES" << std::endl;
	static int i;
	if (i % 2 == 0)
		std::cout << this->target << " has been robotomized." << std::endl;
	else
		std::cout << "robotomy failed " << this->target << " gives you the middle finger." << std::endl;
	i++;
}
