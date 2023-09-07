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
std::string	Contact::get_first_name (void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name (void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname (void)
{
	return (this->nickname);
}

std::string	Contact::get_phone_number (void)
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret (void)
{
	return (this->darkest_secret);
}
