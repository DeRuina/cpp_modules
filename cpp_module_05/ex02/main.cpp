#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat Lukatsch("Lukatsch", 5);
	Bureaucrat Dan("Dan", 150);

	ShrubberyCreationForm shrubbery("HIVE");
	RobotomyRequestForm robotomy("Rasmus");
	PresidentialPardonForm presidential("Dean");

	Dan.signForm(shrubbery);

	Lukatsch.signForm(shrubbery);
	Lukatsch.signForm(robotomy);
	Lukatsch.signForm(presidential);

	Dan.executeForm(shrubbery);

	Lukatsch.executeForm(shrubbery);
	Lukatsch.executeForm(robotomy);
	Lukatsch.executeForm(robotomy);
	Lukatsch.executeForm(robotomy);
	Lukatsch.executeForm(presidential);

	return 0;
}
