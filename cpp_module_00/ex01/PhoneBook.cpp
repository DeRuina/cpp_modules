#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Shalom! You can use me in 3 ways:" << std::endl << std::endl <<
	"ADD - save a new contact" << std::endl << "SEARCH - display a specific contact"
	<< std::endl << "EXIT - goodbye" << std::endl << std::endl;
}

void PhoneBook::add_contact(void)
{
	Contact new_contact;

	new_contact.get_new_contact(&new_contact);

	std::cout << new_contact.first_name << std::endl;

}

std::string PhoneBook::get_action(void)
{
	std::cout << "ENTER:" << std::endl;
	std::string input;
	std::getline(std::cin, input);
	if (input == "ADD")
		return (PhoneBook::add_contact(),"ADD");
	else if (input == "SEARCH")
			return ("SEARCH");
	else if (input == "EXIT")
			return ("EXIT");
	else
		return ("INVALID");

}


