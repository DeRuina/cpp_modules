#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{}

void HumanA::attack(void)
{
	if (this->weapon.get_Type() != "")
		std::cout << this->name <<  " attacks with their " << this->weapon.get_Type() << std::endl;
	else
		std::cout << "NO WEAPON" << std::endl;
}
