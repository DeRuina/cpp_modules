#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {

private:
std::string first_name;
std::string last_name;
std::string nickname;
std::string phone_number;
std::string darkest_secret;


public:


	void	get_new_contact(Contact *new_contact);
	std::string	get_first_name (void);
	std::string	Contact::get_last_name (void);
	std::string	Contact::get_nickname (void);
	std::string	Contact::get_phone_number (void);
	std::string	Contact::get_darkest_secret (void);
};


#endif
