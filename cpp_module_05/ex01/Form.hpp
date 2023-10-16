#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			const	std::string	name;
			bool				isSigned;
			const int			signGrade;
			const int			executeGrade;

  public:
			Form(std::string name, int signGrade, int executeGrade);
			Form(const Form &copy);
			Form &operator=(const Form &src);
			~Form();

		std::string	getName() const;
		bool				getSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};


};

std::ostream &operator<<(std::ostream &OUT, const Form &form);

#endif
