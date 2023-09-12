#include "PhoneBook.hpp"

// Constructor

PhoneBook::PhoneBook()
{
	std::cout << "------------------------------------\n"
	<< "Shalom! You can use me in 3 ways:\n\n" <<
	"ADD - save a new contact\n" << "SEARCH - display a specific contact\n"
	<< "EXIT - goodbye\n" << "------------------------------------\n" << std::endl;
}

// Static variable initialization

int PhoneBook::index = 0;

// Prints the contact chosen by the input

void PhoneBook::display_contact(int i)
{
	std::cout << "First Name: " << this->contacts[i].get_first_name("normal") << std::endl;
	std::cout << "Last Name: " << this->contacts[i].get_last_name("normal") << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname("normal") << std::endl;
	std::cout << "Phone Number: " << this->contacts[i].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[i].get_darkest_secret() << std::endl;
}

// Prints the Phonebook list and asks user for index to diplay

void PhoneBook::print_columns(void)
{
	int i = 0;
	if (index == 0)
		return;
	for (i = 0; i < 8; i++)
	{
		if (!this->contacts[i].get_first_name("sub").empty())
		{
			std::cout << "|" << std::setw(10) << i;
			std::cout << "|" << std::setw(10) << this->contacts[i].get_first_name("sub");
			std::cout << "|" << std::setw(10) << this->contacts[i].get_last_name("sub");
			std::cout << "|" << std::setw(10) << this->contacts[i].get_nickname("sub");
			std::cout << "|" << std::endl;
		}
		else
			break;
	}
	std::cout << "Contact index:" << std::endl;
	int num;
	std::cin >> num;
	if (std::cin.fail() || num < 0 || num > 7)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "invalid index enter SEARCH to try again" << std::endl;
		return;
	}
	if (num < i)
		display_contact(num);
	else
		std::cout << "invalid index enter SEARCH to try again" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
// Adds a new contact to the phonebook

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
// Get's the input from user and runs the command

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

