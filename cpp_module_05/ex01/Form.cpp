#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
	if ( signGrade < 1 )
		throw Form::GradeTooHighException();
    if ( signGrade > 150 )
        throw Form::GradeTooLowException();
}
Form::Form(const Form &copy) : name(copy.name), signGrade(copy.signGrade), executeGrade(copy.executeGrade)
{
}

Form &Form::operator=(const Form &src)
{
	if ( signGrade < 1 )
		throw Form::GradeTooHighException();
    if ( signGrade > 150 )
        throw Form::GradeTooLowException();
	this->isSigned = src.isSigned;
	return (*this);
}

Form::~Form()
{
}
std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSigned() const
{
	return (this->isSigned);
}

int	Form::getGradeToSign() const
{
	return (this->signGrade);
}

int	Form::getGradeToExecute() const
{
	return (this->executeGrade);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
  return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
  return ("Grade too low");
}

std::ostream &operator<<(std::ostream &OUT, const Form &form)
{
	OUT << "Form name : " << form.getName() << std::endl <<
	"Form is signed : " << form.getSigned() << std::endl <<
	"Grade to sign : " << form.getGradeToSign() << std::endl <<
	"Grade to execute : " << form.getGradeToExecute() << std::endl;
	return (OUT);
}


