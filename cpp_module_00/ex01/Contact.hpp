#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {

private:
// std::string first_name;
// std::string last_name;
// std::string nickname;
// std::string phone_number;
// std::string darkest_secret;


public:
	std::string first_name;
std::string last_name;
std::string nickname;
std::string phone_number;
std::string darkest_secret;

	void	get_new_contact(Contact *new_contact);

};


#endif
