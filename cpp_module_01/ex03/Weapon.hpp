#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		const std::string &get_Type(void) const;
		void setType(std::string type);
};

#endif
