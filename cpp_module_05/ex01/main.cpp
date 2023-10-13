#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat Dean("Dean", 70);
	std::cout << "Hello from " << Dean << std::endl;

	Form form50("Form50", 50, 100);
	Form form70("Form70", 70, 100);
	Form form90("Form90", 90, 100);

	Dean.signForm(form50);
	Dean.signForm(form70);
	Dean.signForm(form90);

	std::cout << form50 << std::endl;
	std::cout << form70 << std::endl;
	std::cout << form90 << std::endl;

	return 0;
}
