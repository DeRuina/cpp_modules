#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "------------------------------------\n"
	<< "Shalom! You can use me in 3 ways:\n\n" <<
	"ADD - save a new contact\n" << "SEARCH - display a specific contact\n"
	<< "EXIT - goodbye\n" << "------------------------------------\n" << std::endl;
}

int PhoneBook::index = 0;

void PhoneBook::add_contact(void)
{
	Contact new_contact;

	new_contact.get_new_contact();
	if (!new_contact.check_if_valid())
	{
		std::cout << "Invalid Contact, try again" << std::endl;
		return;
	}
	if (index == 8)
		index = 0;
	this->contacts[index++] = new_contact;
}

std::string PhoneBook::get_action(void)
{
	std::string input;

	std::cout << "< ";
	std::getline(std::cin, input);
	if (input == "ADD")
		return (add_contact(),"ADD");
	else if (input == "SEARCH")
			return (print_columns(),"SEARCH");
	else if (input == "EXIT")
			return ("EXIT");
	else
		return ("INVALID");
}

void PhoneBook::print_columns(void)
{
	for (int i = 0; i < this->index; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << this->contacts[i].get_first_name("sub");
		std::cout << "|" << std::setw(10) << this->contacts[i].get_last_name("sub");
		std::cout << "|" << std::setw(10) << this->contacts[i].get_nickname("sub");
		std::cout << "|" << std::endl;
	}
	std::cout << "Contact index";
	std::string num;
	std::getline(std::cin, num)
}


