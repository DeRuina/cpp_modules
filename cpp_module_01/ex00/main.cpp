#include "Zombie.hpp"

int main(void)
{
	Zombie *zomb = newZombie("Rasmus");
	zomb->announce();
	delete zomb;
	randomChump("Teemu Spoof");
	return (0);
}
