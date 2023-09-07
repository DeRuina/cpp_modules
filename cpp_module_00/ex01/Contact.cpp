#include "PhoneBook.hpp"

void Contact::get_new_contact(Contact *new_contact)
{


	std::cout << "First Name:" << std::endl;
	std::getline(std::cin, new_contact->first_name);
	std::cout << "Last Name:" << std::endl;
	std::getline(std::cin, new_contact->last_name);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, new_contact->nickname);
	std::cout << "Phone Number:" << std::endl;
	std::getline(std::cin, new_contact->phone_number);
	std::cout << "Darkest Secret:" << std::endl;
	std::getline(std::cin, new_contact->darkest_secret);
}
