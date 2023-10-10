#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Grade too low");
}

Bureaucrat::Bureaucrat(std::string name, int grade) :name(name)
{
  if (grade  < 1)
    throw Bureaucrat::GradeTooHighException();
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name)
{
  *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
  if (src.grade < 1)
    throw Bureaucrat::GradeTooHighException();
  if (src.grade > 150)
    throw Bureaucrat::GradeTooLowException();
  this->grade = src.grade;
  return (*this);
}

Bureaucrat::~Bureaucrat()
{ 
}

const std::string Bureaucrat::getName() const
{
  return (this->name);
} 

int Bureaucrat::getGrade() const
{
  return (this->grade);
}

void Bureaucrat::incrementGrade()
{
  if (this->grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
  if (this->grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->grade++;
}

std::ostream &operator<<(std::ostream &OUT, const Bureaucrat &bureaucrat)
{
  OUT << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
  return (OUT);
}