#include "AForm.hpp"

AForm::AForm(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade), isSigned(false)
{
	if ( signGrade < 1 )
		throw AForm::GradeTooHighException();
    if ( signGrade > 150 )
        throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm &copy) : name(copy.name), signGrade(copy.signGrade), executeGrade(copy.executeGrade)
{
}

AForm &AForm::operator=(const AForm &src)
{
	if ( signGrade < 1 )
		throw AForm::GradeTooHighException();
    if ( signGrade > 150 )
        throw AForm::GradeTooLowException();
	this->isSigned = src.isSigned;
	return (*this);
}

AForm::~AForm()
{
}
std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getSigned() const
{
	return (this->isSigned);
}

int	AForm::getGradeToSign() const
{
	return (this->signGrade);
}

int	AForm::getGradeToExecute() const
{
	return (this->executeGrade);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw AForm::GradeTooLowException();
	isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
  return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
  return ("Grade too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
  return ("Form not signed");
}

std::ostream &operator<<(std::ostream &OUT, const AForm &form)
{
	OUT << "Form name : " << form.getName() << std::endl <<
	"Form is signed : " << form.getSigned() << std::endl <<
	"Grade to sign : " << form.getGradeToSign() << std::endl <<
	"Grade to execute : " << form.getGradeToExecute() << std::endl;
	return (OUT);
}


