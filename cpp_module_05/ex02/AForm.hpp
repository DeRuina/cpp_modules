#ifndef AFORM_H
#define AFORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const				std::string	name;
		const int			signGrade;
		const int			executeGrade;
		bool				isSigned;

  public:
			AForm(std::string name, int signGrade, int executeGrade);
			AForm(const AForm &copy);
			AForm &operator=(const AForm &src);
			virtual ~AForm();

			std::string	getName() const;
			bool				getSigned() const;
			int					getGradeToSign() const;
			int					getGradeToExecute() const;
			void				beSigned(const Bureaucrat &bureaucrat);

			virtual void	execute(const Bureaucrat& executor) const = 0;


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
	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};


};

std::ostream &operator<<(std::ostream &OUT, const AForm &form);

#endif
