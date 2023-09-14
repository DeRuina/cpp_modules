#include "Zombie.hpp"

Zombie::Zombie(std:: string name) :name(name)
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
