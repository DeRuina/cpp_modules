#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact 	contacts[8];
	static int	index;


	public:
				PhoneBook();
	std::string	get_action(void);
	void		add_contact(void);
	void		print_columns(void);
	void		display_contact(int i);


};


#endif
