#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
  private:
      const std::string name;
      int grade;
  
  public:
      class GradeTooHighException : public std::excpetion
      {
        virtual const char* what() const throw();
      };
      class GradeTooLowException : public std::exception 
      {
        virtual const char* what() const throw();
      };

      Bureaucrat(std::string name, int grade);
      Bureaucrat(const Bureaucrat &copy);
      Bureaucrat &operator=(const Bureaucrat &src);
      ~Bureaucrat();

      const       std::string &getName() const;
      int         getGrade() const;
      void        incrementGrade();
      void        decrementGrade();

      std::ostream &operator<<(std::ostream &OUT, const Bureaucrat &bureaucrat);

};


#endif