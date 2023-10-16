#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat &copy);
			Bureaucrat &operator=(const Bureaucrat &src);
			~Bureaucrat();

			const	std::string getName() const;
			int		getGrade() const;
			void	incrementGrade();
			void	decrementGrade();
			void	signForm(Form &form) const;

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

 std::ostream &operator<<(std::ostream &OUT, const Bureaucrat &bureaucrat);


#endif
