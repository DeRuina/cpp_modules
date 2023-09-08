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

	bool	check_if_valid(void);
	void	get_new_contact(void);
	std::string	get_first_name (std::string str);
	std::string	get_last_name (std::string str);
	std::string	get_nickname (std::string str);
	std::string	get_phone_number (void);
	std::string	get_darkest_secret (void);
};


#endif
