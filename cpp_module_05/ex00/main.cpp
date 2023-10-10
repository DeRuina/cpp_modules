#include "Bureaucrat.hpp"

int main(void)
{
 // Constructor
	try {
		Bureaucrat Teemu("Teemu", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Increment
	try {
		Bureaucrat Rasmus("Rasmus", 1);
		Rasmus.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Decrement
	try {
		Bureaucrat Jun("Jun", 150);
		Jun.decrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Printing
	Bureaucrat Andre("Andre", 42);
	std::cout << "Hello from " << Andre << std::endl;

	return 0;
}