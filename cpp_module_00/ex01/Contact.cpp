#include "PhoneBook.hpp"

// Gets the contact info as an input

void Contact::get_new_contact(void)
{
	std::cout << "First Name:" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Last Name:" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Phone Number:" << std::endl;
	std::getline(std::cin, this->phone_number);
	std::cout << "Darkest Secret:" << std::endl;
	std::getline(std::cin, this->darkest_secret);
}

// Checks if the input is valid or not (empthy is not valid)

bool	Contact::check_if_valid(void)
{
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty()
	|| this->phone_number.empty() || this->darkest_secret.empty())
		return (false);
	else
		return (true);
}

// First name getter

std::string	Contact::get_first_name (std::string str)
{
	if (str == "sub")
		if (this->first_name.length() > 10)
			return (this->first_name.substr(0, 9) + ".");
	return (this->first_name);
}

// Last name getter

std::string	Contact::get_last_name (std::string str)
{
	if (str == "sub")
		if (this->last_name.length() > 10)
			return (this->last_name.substr(0, 9) + ".");
	return (this->last_name);
}

// Nickname getter

std::string	Contact::get_nickname (std::string str)
{
	if (str == "sub")
		if (this->nickname.length() > 10)
			return (this->nickname.substr(0, 9) + ".");
	return (this->nickname);
}

// Phone number getter

std::string	Contact::get_phone_number (void)
{
	return (this->phone_number);
}

// Darkest secret getter

std::string	Contact::get_darkest_secret (void)
{
	return (this->darkest_secret);
}
