#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat Lukatsch("Lukatsch", 5);
	Bureaucrat Dan("Dan", 150);

	Intern Teemu;

	AForm *shrubbery = Teemu.makeForm("ShrubberyCreationForm", "HIVE");
	AForm *robotomy = Teemu.makeForm("RobotomyRequestForm", "Rasmus");
	AForm *presidential = Teemu.makeForm("PresidentialPardonForm", "Dean");	
	AForm *lukasDrinkingMilk = Teemu.makeForm("MilkMeBrother", "Lukas");
	(void)lukasDrinkingMilk;
	

	Dan.signForm(*shrubbery);

	Lukatsch.signForm(*shrubbery);
	Lukatsch.signForm(*robotomy);
	Lukatsch.signForm(*presidential);

	Dan.executeForm(*shrubbery);

	Lukatsch.executeForm(*shrubbery);
	Lukatsch.executeForm(*robotomy);
	Lukatsch.executeForm(*robotomy);
	Lukatsch.executeForm(*presidential);

	delete shrubbery;
	delete robotomy;
	delete presidential;

	return (0);
}
