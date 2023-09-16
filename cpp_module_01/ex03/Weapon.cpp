#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

const std::string &Weapon::get_Type(void) const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
