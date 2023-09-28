#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{}

void HumanB::setWeapon(Weapon &weapon)
{
  this->weapon = &weapon;
}

void HumanB::attack(void)
{
  if (this->weapon != NULL && this->weapon->get_Type() != "")
		std::cout << this->name <<  " attacks with their " << this->weapon->get_Type() << std::endl;
	else
		std::cout << "NO WEAPON" << std::endl;
}
