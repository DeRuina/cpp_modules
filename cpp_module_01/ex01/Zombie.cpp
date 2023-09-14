#include "Zombie.hpp"

Zombie::Zombie()
{
}
Zombie::~Zombie()
{
	std::cout << this->name << "'s head was chopped off" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::set_name(std::string name)
{
	this->name = name;
}
