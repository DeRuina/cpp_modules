#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];

	public:
				PhoneBook();
	std::string	get_action(void);
	void		add_contact(void);

};


#endif
